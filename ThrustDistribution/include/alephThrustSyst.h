#ifndef ALEPHTHRUSTSYST_H
#define ALEPHTHRUSTSYST_H

#include <string>

#include "TFile.h"
#include "TH1D.h"
#include "TMath.h"

#include "doGlobalDebug.h"

class alephThrustSyst
{
 public:
  TH1D* sysRel_0_p;
  TH1D* sysRel_1_p;
  TH1D* sysRel_2_p;

  alephThrustSyst(const std::string inSysName);
  Double_t getRelQuadSystFromThrust(Double_t thrust);
};

alephThrustSyst::alephThrustSyst(const std::string inSysName)
{
  if(inSysName=="../inputs/HEPData-ins636645-v1-Table54.root")
  {
    TFile* inFile_p = new TFile(inSysName.c_str(), "READ");
    cout <<"LEP1"<<endl;
    inFile_p->cd("Table 54");
    TH1D* centralVal_p = (TH1D*)gDirectory->Get("Hist1D_y1");
    TH1D* sysTemp1_p = (TH1D*)gDirectory->Get("Hist1D_y1_e2"); 
    TH1D* sysTemp2_p = (TH1D*)gDirectory->Get("Hist1D_y1_e3");

    const Int_t nBins = sysTemp1_p->GetNbinsX();
    Double_t bins[nBins+1];
    for(Int_t i = 0; i < nBins+1; ++i){
      bins[i] = sysTemp1_p->GetBinLowEdge(i+1);
    }

//    inFile_p->Close();
//    delete inFile_p;
  
    sysRel_0_p = new TH1D("sys_0_h", "", nBins, bins);
    sysRel_1_p = new TH1D("sys_1_h", "", nBins, bins);
    sysRel_2_p = new TH1D("sys_2_h", "", nBins, bins);

    for(Int_t i = 0; i < nBins; ++i){
      sysRel_0_p->SetBinContent(i+1, sysTemp1_p->GetBinContent(i+1)/centralVal_p->GetBinContent(i+1));
    }

    for(Int_t i = 0; i < nBins; ++i){
      sysRel_1_p->SetBinContent(i+1, sysTemp2_p->GetBinContent(i+1)/centralVal_p->GetBinContent(i+1));
    }

    for(Int_t i = 0; i < nBins; ++i){
      Double_t val = sysTemp1_p->GetBinContent(i+1)*sysTemp1_p->GetBinContent(i+1) + sysTemp2_p->GetBinContent(i+1)*sysTemp2_p->GetBinContent(i+1);
      sysRel_2_p->SetBinContent(i+1, TMath::Sqrt(val)/centralVal_p->GetBinContent(i+1));
    }

    sysRel_2_p->Print("ALL");

    return;
  }
  else if(inSysName=="../inputs/HEPData-ins636645-v1-Table61.root")
  {
    TFile* inFile_p = new TFile(inSysName.c_str(), "READ");
    if(inFile_p->IsZombie()) std::cout << "Bad file" << std::endl;
    inFile_p->cd("Table 61");
    TH1D* centralVal_p = (TH1D*)gDirectory->Get("Hist1D_y1");
    TH1D* sysTemp1_p = (TH1D*)gDirectory->Get("Hist1D_y1_e1"); 
    TH1D* sysTemp2_p = (TH1D*)gDirectory->Get("Hist1D_y1_e2");

    const Int_t nBins = sysTemp1_p->GetNbinsX();
    Double_t bins[nBins+1];
    for(Int_t i = 0; i < nBins+1; ++i){
      bins[i] = sysTemp1_p->GetBinLowEdge(i+1);
    }
  
    sysRel_0_p = new TH1D("sys_0_h", "", nBins, bins);
    sysRel_1_p = new TH1D("sys_1_h", "", nBins, bins);
    sysRel_2_p = new TH1D("sys_2_h", "", nBins, bins);

    for(Int_t i = 0; i < nBins; ++i){
      sysRel_0_p->SetBinContent(i+1, sysTemp1_p->GetBinContent(i+1)/centralVal_p->GetBinContent(i+1));
    }

    for(Int_t i = 0; i < nBins; ++i){
      sysRel_1_p->SetBinContent(i+1, sysTemp2_p->GetBinContent(i+1)/centralVal_p->GetBinContent(i+1));
    }

    for(Int_t i = 0; i < nBins; ++i){
      Double_t val = sysTemp1_p->GetBinContent(i+1)*sysTemp1_p->GetBinContent(i+1) + sysTemp2_p->GetBinContent(i+1)*sysTemp2_p->GetBinContent(i+1);
      sysRel_2_p->SetBinContent(i+1, TMath::Sqrt(val)/centralVal_p->GetBinContent(i+1));
    }

    sysRel_2_p->Print("ALL");

//    inFile_p->Close();
//    delete inFile_p;

    return;
  }
  else
  {
    std::cout << "Invalid filename." << std::endl;
    return;
  }
}

Double_t alephThrustSyst::getRelQuadSystFromThrust(Double_t thrust)
{
  if(doGlobalDebug) sysRel_2_p->Print("ALL");
  if(doGlobalDebug) std::cout << " check " << thrust << ", " << sysRel_2_p->Interpolate(thrust) << std::endl;
  
  return sysRel_2_p->Interpolate(thrust);
}

#endif
