// Standard library
#include <math.h>
#include <iostream>
#include <fstream>

// ROOT Library
#include <TROOT.h>
#include <TStyle.h>
#include <TLegend.h>
#include <TH1D.h>
#include <TH2D.h>
#include <TH3D.h>
#include <TProfile.h>
#include <TFile.h>
#include <TCanvas.h>
#include <TNtuple.h>
#include <TTree.h>
#include <TLine.h>
#include <TF1.h>
#include <TCut.h>
#include <TPad.h>
#include "TRandom.h"
#include <TLegend.h>
#include <TBox.h>

// Unfolding
#include "bayesianUnfold.h"

// logo 
#include "../../Utilities/include/plotLogo.h"

// Constants
#define CanvasSizeX 400
#define CanvasSizeY 400



Double_t smear (Double_t xt)
{
  Double_t xeff= 0.3 + (1.0-0.3)/20*(xt+10.0);  // efficiency
  Double_t x= gRandom->Rndm();
  Double_t xsmear= gRandom->Gaus(-5,1);     // bias and smear
  return xt+xsmear;
}



void UnfoldThrust()
{
  gStyle->SetPadTopMargin(0.08);

  // Use the output ntople from thrust_distribution.     
  TFile *infMC = new TFile("outFile_LEP1MC_0_9999.root");
  TTree *tMC = (TTree*)infMC->Get("nt");
  TFile *infMCGen = new TFile("outFile_LEP1MCGen_0_9999.root");
  TTree *tMCAll = (TTree*)infMCGen->Get("ntGen");
  TFile *infData = new TFile("outFile_LEP1_0_9999.root");
  TTree *tData = (TTree*)infData->Get("nt");

  // HEP data from ALEPH QCD paper EPJC 2004
  TFile *hdata = new TFile("../inputs/HEPData-ins636645-v1-Table54.root");
  TH1D *hep;
  hdata->cd("Table 54");
  hep = (TH1D*)gDirectory->Get("Hist1D_y1");
  TH1D *hE1=(TH1D*) gDirectory->Get("Hist1D_y1_e1");
  TH1D *hE2=(TH1D*) gDirectory->Get("Hist1D_y1_e2");
  TH1D *hE3=(TH1D*) gDirectory->Get("Hist1D_y1_e3");
  hep->SetMarkerStyle(20);
  hep->SetMarkerSize(1);

  // Output file
  TFile *output = new TFile("unfolding.root","recreate");
  TH1D *hM = new TH1D("hM","",168*4,0.58,1);			// Measurement from Data (or from MC for closure test)
  TH1D *hMMC = new TH1D("hMMC","",168*4,0.58,1);			// Measurement from MC
  TH1D *hT = new TH1D("hT","",42,0.58,1);			// Generator level truth from MC
  TH1D *hTAll = new TH1D("hTAll","",42,0.58,1);			// Generator level truth without event selection
 


  TH2D *hR = new TH2D("hR","",42,0.58,1,168*4,0.58,1);
  
  tMC->Draw("Thrust:GenThrust>>hR");
  tMC->Draw("Thrust>>hMMC");
  tData->Draw("Thrust>>hM");
  //hM = (TH1D*)infData->Get("h_thrust");
  tMC->Draw("GenThrust>>hT");
  tMC->Draw("GenThrust>>hTAll");
  hM->Sumw2();
  hMMC->Sumw2();
  hT->Sumw2();
  hTAll->Sumw2();

  TH1D *hEff = (TH1D*)hT->Clone("hEff");
  hEff->Divide(hTAll);
  TCanvas *c6 = new TCanvas("c6","",600,600);
  hEff->SetXTitle("Thrust");
  hEff->SetYTitle("Selection Efficiency");
  hEff->Draw();
  
  
  // rescale response function
  for (Int_t m= 1; m<=hR->GetNbinsY(); m++)
  {
     double Measured = hM->GetBinContent(m);
     double MeasuredMC = hMMC->GetBinContent(m);
	
     double Ratio=0;
     if (MeasuredMC) {
        Ratio = Measured / MeasuredMC;
     }
     
     for (Int_t t= 1; t<=hR->GetNbinsX(); t++)
     {
	double var = hR->GetBinContent(t,m);
	double varErr = hR->GetBinError(t,m);
	hR->SetBinContent(t,m,var*Ratio);
	hR->SetBinError(t,m,varErr*Ratio);
     }  
  }
  
  
  
  for (int i=0;i<100;i++) {
     bayesianUnfold myUnfolding0(hR,hT,0);
     myUnfolding0.unfold(hM,5);
  
     TH1D *hU0 = (TH1D*)myUnfolding0.hPrior->Clone();
     TH1D *hT2 = (TH1D*) hR->ProjectionX();

     for (Int_t t= 1; t<=hR->GetNbinsX(); t++)
     {
        double Measured = hU0->GetBinContent(t);
        double MeasuredMC = hT2->GetBinContent(t);
	
        double Ratio=0;
        if (MeasuredMC) {
           Ratio = Measured / MeasuredMC;
        }
       
        for (Int_t m= 1; m<=hR->GetNbinsY(); m++)
        {
 	  double var = hR->GetBinContent(t,m);
   	   double varErr = hR->GetBinError(t,m);
   	   hR->SetBinContent(t,m,var*Ratio);
	   hR->SetBinError(t,m,varErr*Ratio);
        }  
     }
  }
  
  
  

  TH1D *hPrior = (TH1D*)hT->Clone("hPrior");
  
  for (int i=0;i<100;i++) {
     bayesianUnfold myUnfolding(hR,hPrior,0);
     myUnfolding.unfold(hM,4);
  
     TH1D *hU0 = (TH1D*)myUnfolding.hPrior->Clone();
     TH1D *hT2 = (TH1D*) hR->ProjectionX();

     for (Int_t t= 1; t<=hR->GetNbinsX(); t++)
     {
        double Measured = hU0->GetBinContent(t);
        double MeasuredMC = hT2->GetBinContent(t);
	
        double Ratio=0;
        if (MeasuredMC) {
           Ratio = Measured / MeasuredMC;
        }
       
        for (Int_t m= 1; m<=hR->GetNbinsY(); m++)
        {
 	  double var = hR->GetBinContent(t,m);
   	   double varErr = hR->GetBinError(t,m);
   	   hR->SetBinContent(t,m,var*Ratio);
	   hR->SetBinError(t,m,varErr*Ratio);
        }  
     }
     hPrior=(TH1D*)myUnfolding.hPrior->Clone();
  }
  
  
  bayesianUnfold myUnfolding(hR,hT,0);
  myUnfolding.unfold(hM,20);
  
  TCanvas *c = new TCanvas("c","",600,600);

  hR->SetXTitle("Gen");
  hR->SetYTitle("Reco");
  hR->Draw("col");
//  myUnfolding.hResMatrix->Draw("col");
  
  TCanvas *c2 = new TCanvas("c2","",600,600);
//  c2->SetLogy();
  
  
  TH1D *hU = (TH1D*)myUnfolding.hPrior->Clone();
  hU->SetName("hU");
  TH1D *hRepM = (TH1D*)myUnfolding.hReproduced->Clone();
  hRepM->SetName("hRepM");
  hRepM->SetLineColor(6);
  hRepM->Draw();
  hU->Draw("same hist");
  hT->SetLineColor(4);
  hT->Draw("same hist");
  hM->SetLineColor(2);
  hM->Draw("same hist");
  
  
  
  TLegend *leg = new TLegend(0.68,0.7,0.93,0.9);
  leg->SetBorderSize(0);
  leg->SetFillColor(0);
  leg->AddEntry("hT","Truth","l");
  leg->AddEntry("hM","Measured","l");
  leg->AddEntry("hU","Unfolded","l");
  leg->AddEntry("hRepM","Reproduced","l");
  leg->Draw();
  
  TCanvas *c4 = new TCanvas("c4","",CanvasSizeX,CanvasSizeY);
  TH1F *hRatioM = (TH1F*)hM->Clone();
  hRatioM->SetName("hRatioM");
  hRatioM->SetXTitle("Measured / Reproduced Measured");
  hRatioM->Divide(hRepM);
  hRatioM->Draw();

  TCanvas *c5 = new TCanvas("c5","",CanvasSizeX,CanvasSizeY);
  TH1F *hRatioU = (TH1F*)hU->Clone();
  hRatioU->Sumw2();
  hRatioU->Divide(hT);
  hRatioU->SetXTitle("Unfolded / Truth");
  hRatioU->Draw();
  hM->Write();
  
  
  TH1D *hFinalResult = (TH1D*)hU->Clone("hFinalResult");
//  hFinalResult->Divide(hEff);
  TH1F *h21 = new TH1F("h21","Thrust {passesNTupleAfterCut}",42,0.58,1);
   h21->SetBinContent(0,1);
   h21->SetBinContent(1,1);
   h21->SetBinContent(2,0.9285714);
   h21->SetBinContent(3,0.9285714);
   h21->SetBinContent(4,0.8939394);
   h21->SetBinContent(5,0.8971962);
   h21->SetBinContent(6,0.9121951);
   h21->SetBinContent(7,0.8943299);
   h21->SetBinContent(8,0.8938462);
   h21->SetBinContent(9,0.884575);
   h21->SetBinContent(10,0.8953488);
   h21->SetBinContent(11,0.8851064);
   h21->SetBinContent(12,0.8851675);
   h21->SetBinContent(13,0.8867925);
   h21->SetBinContent(14,0.8872348);
   h21->SetBinContent(15,0.8840485);
   h21->SetBinContent(16,0.8779925);
   h21->SetBinContent(17,0.8726858);
   h21->SetBinContent(18,0.8678712);
   h21->SetBinContent(19,0.8636898);
   h21->SetBinContent(20,0.8513274);
   h21->SetBinContent(21,0.8612982);
   h21->SetBinContent(22,0.8511291);
   h21->SetBinContent(23,0.8410661);
   h21->SetBinContent(24,0.8423542);
   h21->SetBinContent(25,0.8365706);
   h21->SetBinContent(26,0.8293999);
   h21->SetBinContent(27,0.8220196);
   h21->SetBinContent(28,0.8202455);
   h21->SetBinContent(29,0.8049728);
   h21->SetBinContent(30,0.8055472);
   h21->SetBinContent(31,0.7993565);
   h21->SetBinContent(32,0.7976353);
   h21->SetBinContent(33,0.7920892);
   h21->SetBinContent(34,0.784632);
   h21->SetBinContent(35,0.7816142);
   h21->SetBinContent(36,0.7793024);
   h21->SetBinContent(37,0.7798591);
   h21->SetBinContent(38,0.7801157);
   h21->SetBinContent(39,0.7823851);
   h21->SetBinContent(40,0.7850208);
   h21->SetBinContent(41,0.7825564);
   h21->SetBinContent(42,0.7914762);
   for (int i=0;i<=42;i++) {
      h21->SetBinError(i,0);
   }
   
  hFinalResult->Multiply(h21);
  hFinalResult->SetXTitle("Thrust");
  hFinalResult->SetYTitle("#frac{1}{#sigma} #frac{d#sigma}{dT}");

//  hFinalResult->Rebin(4);
  Double_t scale = 1.0/( hFinalResult->GetXaxis()->GetBinWidth(1)*hFinalResult->Integral());
  hFinalResult->Sumw2();
  hFinalResult->Scale(scale);
  hFinalResult->SetMarkerSize(1.2);    
  hFinalResult->GetXaxis()->CenterTitle();
  hFinalResult->GetYaxis()->CenterTitle();


  TCanvas *cRatio = new TCanvas("cRatio","Result /HEP",600,600);
  TH1D *hRatio = (TH1D*)hFinalResult->Clone("hRatio");
  
  hRatio->Divide(hep);
  hRatio->Draw("hist");

  hFinalResult->SetAxisRange(0,19.5,"Y");
  TCanvas *cResult = new TCanvas("cResult","",600,600);
   hFinalResult->Draw();
   hep->SetMarkerStyle(5);
   hep->SetLineColor(kBlue);
   hep->SetLineWidth(2);
   hep->Draw("hist SAME");
 //  hppe96->Draw("hist same");
   TLine* line_thrust = new TLine();
   TLegend *leg2 = new TLegend(0.2,0.7,0.7,0.9);
   leg2->SetBorderSize(0);
   leg2->SetFillStyle(0);
   leg2->AddEntry(hU,"e^{+} e^{-} #sqrt{s}= 91 GeV","t");
   leg2->AddEntry(hU,"ALEPH Archived Data","p");
//   leg2->AddEntry(hppe96,"PR294(1998)1","l");
   leg2->AddEntry(hep,"EPJC35(2004)457","l");
   leg2->Draw();

   for (int i=1;i<=hFinalResult->GetNbinsX();i++) {
      double errSize = sqrt(hE1->GetBinContent(i)*hE1->GetBinContent(i)+hE2->GetBinContent(i)*hE2->GetBinContent(i)+hE3->GetBinContent(i)*hE3->GetBinContent(i));
      TBox *b = new TBox(hFinalResult->GetBinLowEdge(i),hep->GetBinContent(i)-errSize,hFinalResult->GetBinLowEdge(i+1),hep->GetBinContent(i)+errSize);
      b->SetFillColor(kGray);
      b->Draw();
   }
   hep->Draw("hist Same");
   hFinalResult->Draw("same");
   plotLogo(1,1,1);   
   
   cout <<hep->Integral()<<endl;
   cout <<hep->Integral()<<endl;
   
}
