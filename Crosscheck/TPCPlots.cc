#include "TH1D.h"
#include "TH2D.h"
#include "TCanvas.h"
#include "TLegend.h"
#include "TMath.h"
#include "TFile.h"
#include "TAxis.h"
#include "TAttMarker.h"
#include "TAttLine.h"
#include "TAttAxis.h"
#include "TColor.h"
#include "TF1.h"
#include "Settings.h"

void formatTPCAxes(TH2D * h, float offsetx, float offsety, float offsetz){
   h->SetTitleOffset(offsetx,"X");
   h->SetTitleOffset(offsety,"Y");
   h->SetTitleOffset(offsetz,"Z");
   h->GetXaxis()->CenterTitle();
   h->GetYaxis()->CenterTitle();
   h->GetZaxis()->CenterTitle();
   h->SetNdivisions(505,"X");
   h->SetNdivisions(505,"Y");
   h->SetNdivisions(505,"Z");
   h->GetXaxis()->SetTitle("#Delta#eta");
   h->GetYaxis()->SetTitle("#Delta#phi");
   h->GetZaxis()->SetTitle("#frac{1}{N^{trig}} #frac{d^{2}N^{pair}}{d#Delta#etad#Delta#phi}");
   h->SetStats(0);
}
void formatTH1D(TH1D * h, float offsetx, float offsety){
   h->SetTitleOffset(offsetx,"X");
   h->SetTitleOffset(offsety,"Y");
   h->GetXaxis()->CenterTitle();
   h->GetYaxis()->CenterTitle();
   h->SetStats(0);
}

void TPCPlots(){
  Settings s;

  gStyle->SetLegendBorderSize(0);

  TH2D * sig[s.nMultBins], *bkg[s.nMultBins], *ratio[s.nMultBins];
  TH1D * LRCYield[s.nMultBins];

  TFile * f = TFile::Open("Analyzer_Output.root","read");
  for(int i = 0; i<s.nMultBins; i++){
    sig[i] = (TH2D*)f->Get(Form("signal2PC_%d_%d",s.multBinsLow[i],s.multBinsHigh[i]));
    bkg[i] = (TH2D*)f->Get(Form("bkgrnd2PC_%d_%d",s.multBinsLow[i],s.multBinsHigh[i]));
    ratio[i] = (TH2D*)f->Get(Form("ratio2PC_%d_%d",s.multBinsLow[i],s.multBinsHigh[i]));
    LRCYield[i] = (TH1D*)f->Get(Form("longRangeYield_%d_%d",s.multBinsLow[i],s.multBinsHigh[i]));

    TLegend * l = new TLegend(0.6,0.8,0.95,0.95);
    if(s.experiment==0)  l->AddEntry((TObject*)0,"ALEPH e^{+}e^{-}","");
    if(s.experiment==1)  l->AddEntry((TObject*)0,"DELPHI e^{+}e^{-}","");
    if(s.experiment==2)  l->AddEntry((TObject*)0,"Belle e^{+}e^{-}","");
    if(s.experiment==3)  l->AddEntry((TObject*)0,"CMS pp","");
    l->AddEntry((TObject*)0,Form("%d<=N^{trk}<%d",s.multBinsLow[i],s.multBinsHigh[i]),"");
    l->AddEntry((TObject*)0,Form("|#eta|<%f",s.etaCut),"");
    l->AddEntry((TObject*)0,Form("%f<p_{T}<%f",s.trigPt[0],s.trigPt[1]),"");

    TCanvas * c1 = new TCanvas("c1","c1",800,800);
    c1->SetLeftMargin(0.2);
    c1->SetTheta(60.839);
    c1->SetPhi(38.0172);
    formatTPCAxes(sig[i],1.5,1.5,2);
    sig[i]->Draw("surf1 fb");
    l->Draw("same");
    sig[i]->GetZaxis()->SetRangeUser(0.9*sig[i]->GetMinimum(),0.4*sig[i]->GetMaximum());
    c1->SaveAs(Form("img/signal_%d_%d.png",s.multBinsLow[i],s.multBinsHigh[i])); 
    c1->SaveAs(Form("img/signal_%d_%d.pdf",s.multBinsLow[i],s.multBinsHigh[i])); 
    c1->SaveAs(Form("img/signal_%d_%d.C",s.multBinsLow[i],s.multBinsHigh[i]));
    
    formatTPCAxes(bkg[i],1.5,1.5,2);
    bkg[i]->Draw("surf1 fb");
    l->Draw("same");
    bkg[i]->GetZaxis()->SetRangeUser(0.9*bkg[i]->GetMinimum(),1.1*bkg[i]->GetMaximum());
    c1->SaveAs(Form("img/background_%d_%d.png",s.multBinsLow[i],s.multBinsHigh[i])); 
    c1->SaveAs(Form("img/background_%d_%d.pdf",s.multBinsLow[i],s.multBinsHigh[i])); 
    c1->SaveAs(Form("img/background_%d_%d.C",s.multBinsLow[i],s.multBinsHigh[i]));

    formatTPCAxes(ratio[i],1.5,1.5,2);
    ratio[i]->Draw("surf1 fb");
    l->Draw("same");
    ratio[i]->GetZaxis()->SetRangeUser(0.9*ratio[i]->GetMinimum(),0.4*ratio[i]->GetMaximum());
    c1->SaveAs(Form("img/ratio_%d_%d.png",s.multBinsLow[i],s.multBinsHigh[i])); 
    c1->SaveAs(Form("img/ratio_%d_%d.pdf",s.multBinsLow[i],s.multBinsHigh[i])); 
    c1->SaveAs(Form("img/ratio_%d_%d.C",s.multBinsLow[i],s.multBinsHigh[i]));
 
    delete c1; 

    TCanvas * c2 = new TCanvas("c2","c2",800,800);
    c2->SetLeftMargin(0.2);
    formatTH1D(LRCYield[i],1.0,1.5); 
    LRCYield[i]->SetMarkerStyle(8);
    LRCYield[i]->SetMarkerColor(kBlack);  
    LRCYield[i]->SetLineColor(kBlack);  
    LRCYield[i]->Draw("p");
    l->SetY1(0.65);  l->SetY2(0.8);
    l->SetX1(0.5);  l->SetX2(0.8);
    l->Draw("same");
    c2->SaveAs(Form("img/LRCYield_%d_%d.png",s.multBinsLow[i],s.multBinsHigh[i])); 
    c2->SaveAs(Form("img/LRCYield_%d_%d.pdf",s.multBinsLow[i],s.multBinsHigh[i])); 
    c2->SaveAs(Form("img/LRCYield_%d_%d.C",s.multBinsLow[i],s.multBinsHigh[i]));
    delete c2;
    delete l;
  }

  TH1D *eta, *theta, *pt, *phi, *TTheta, *TPhi;
  pt = (TH1D*)f->Get("pt");
  eta = (TH1D*)f->Get("eta");
  theta = (TH1D*)f->Get("theta");
  phi = (TH1D*)f->Get("phi");
  TTheta = (TH1D*)f->Get("T_theta");
  TPhi = (TH1D*)f->Get("T_phi");

  TCanvas * c2 = new TCanvas("c2","c2",800,800);
  eta->Draw("p");
  eta->SetTitle(";#eta;N");
  eta->SetStats(0);
  c2->SaveAs("img/eta.png"); 
  c2->SaveAs("img/eta.pdf"); 
  c2->SaveAs("img/eta.C");
  phi->Draw("p");
  phi->SetTitle(";#phi;N");
  phi->SetStats(0);
  c2->SaveAs("img/phi.png"); 
  c2->SaveAs("img/phi.pdf"); 
  c2->SaveAs("img/phi.C");
  theta->Draw("p");
  theta->SetTitle(";#theta;N");
  theta->SetStats(0);
  c2->SaveAs("img/theta.png"); 
  c2->SaveAs("img/theta.pdf"); 
  c2->SaveAs("img/theta.C");
  TTheta->Draw("p");
  TTheta->SetTitle(";#theta_{thrust};N");
  TTheta->SetStats(0);
  c2->SaveAs("img/Ttheta.png"); 
  c2->SaveAs("img/Ttheta.pdf"); 
  c2->SaveAs("img/Ttheta.C");
  TPhi->Draw("p");
  TPhi->SetTitle(";#phi_{thrust};N");
  TPhi->SetStats(0);
  c2->SaveAs("img/Tphi.png"); 
  c2->SaveAs("img/Tphi.pdf"); 
  c2->SaveAs("img/Tphi.C");
  
  c2->SetLogy();
  pt->Draw("p");
  pt->SetTitle(";p_{T};N");
  pt->SetStats(0);
  c2->SaveAs("img/pt.png"); 
  c2->SaveAs("img/pt.pdf"); 
  c2->SaveAs("img/pt.C");
}
