#include "thrustTools.h"
#include "Tools.h"
#include "Settings.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TFile.h"
#include "TTree.h"
#include "TRandom.h"
#include "TAxis.h"
#include "TVector3.h"
#include <iostream>
#include <cmath>

inline float jtp(float pt, float eta){ return pt*TMath::CosH(eta); }

void Analyzer(){
  TH1::SetDefaultSumw2();
  TRandom2 randGen = TRandom2();

  //set up plots
  Settings s = Settings();
  TFile * output = TFile::Open("Analyzer_Output.root","recreate");
  TH2F * signal2PC[s.nMultBins]; 
  TH2F * bkgrnd2PC[s.nMultBins];
  TH2F * ratio2PC[s.nMultBins]; 
  TH1F * longRangeYield[s.nMultBins]; 
  TH2F * signal2PC_ptweighted[s.nMultBins]; 
  TH2F * bkgrnd2PC_ptweighted[s.nMultBins];
  TH2F * ratio2PC_ptweighted[s.nMultBins]; 
  TH1F * longRangeYield_ptweighted[s.nMultBins]; 
  float nSignalEvts[s.nMultBins] = {0};
  float nBkgrndEvts[s.nMultBins] = {0};


  TH1D *h_phi = new TH1D("phi","phi",100,-TMath::Pi(),TMath::Pi());
  TH1D *h_eta = new TH1D("eta","eta",100,-5,5);
  TH1D *h_theta = new TH1D("theta","theta",100,0,TMath::Pi());
  TH1D *h_pt = new TH1D("pt","pt",100,0,10);
  TH1D *h_Ttheta = new TH1D("T_theta","T_theta",100,0,TMath::Pi());
  TH1D *h_Tphi = new TH1D("T_phi","T_phi",100,-TMath::Pi(),TMath::Pi());
  TH1D *h_Aj = new TH1D("h_Aj","h_Aj",50,0,0.5);
  
  for(int i = 0; i<s.nMultBins; i++){
    signal2PC[i] = new TH2F(Form("signal2PC_%d_%d",s.multBinsLow[i],s.multBinsHigh[i]),";#Delta#eta;#Delta#Phi",s.dEtaBins,-2*s.etaPlotRange,2*s.etaPlotRange,s.dPhiBins,-TMath::Pi()/2.0,3*TMath::Pi()/2.0);
    bkgrnd2PC[i] = new TH2F(Form("bkgrnd2PC_%d_%d",s.multBinsLow[i],s.multBinsHigh[i]),";#Delta#eta;#Delta#Phi",s.dEtaBins,-2*s.etaPlotRange,2*s.etaPlotRange,s.dPhiBins,-TMath::Pi()/2.0,3*TMath::Pi()/2.0);
    longRangeYield[i] = new TH1F(Form("longRangeYield_%d_%d",s.multBinsLow[i],s.multBinsHigh[i]),";#Delta#phi;Y(#Delta#Phi)",s.dPhiBins,-TMath::Pi()/2.0,3*TMath::Pi()/2.0); 
    signal2PC_ptweighted[i] = new TH2F(Form("signal2PC_ptweighted_%d_%d",s.multBinsLow[i],s.multBinsHigh[i]),";#Delta#eta;#Delta#Phi",s.dEtaBins,-2*s.etaPlotRange,2*s.etaPlotRange,s.dPhiBins,-TMath::Pi()/2.0,3*TMath::Pi()/2.0);
    bkgrnd2PC_ptweighted[i] = new TH2F(Form("bkgrnd2PC_ptweighted_%d_%d",s.multBinsLow[i],s.multBinsHigh[i]),";#Delta#eta;#Delta#Phi",s.dEtaBins,-2*s.etaPlotRange,2*s.etaPlotRange,s.dPhiBins,-TMath::Pi()/2.0,3*TMath::Pi()/2.0);
    longRangeYield_ptweighted[i] = new TH1F(Form("longRangeYield_ptweighted_%d_%d",s.multBinsLow[i],s.multBinsHigh[i]),";#Delta#phi;Y(#Delta#Phi)",s.dPhiBins,-TMath::Pi()/2.0,3*TMath::Pi()/2.0); 
  }
  TH1F * multiplicity = new TH1F("multiplicity",";nTrk;nEvents",200,0,200);

  //files and variables for input
  TFile * f = TFile::Open(s.inputFile.c_str(),"read");
  TTree * t = (TTree*)f->Get("t"); 
  TTree * jt = (TTree*)f->Get("ak4ESchemeJetTree"); 
  TFile * fMix = TFile::Open(s.inputFile.c_str(),"read");
  TTree * tMix = (TTree*)fMix->Get("t");
  TTree * jtMix = (TTree*)fMix->Get("ak4ESchemeJetTree"); 

  int nParticle,     nParticleMix;
  float pt[500],     ptMix[500];
  float eta[500],    etaMix[500];
  float theta[500],  thetaMix[500];
  float phi[500],    phiMix[500];
  float pt_wrtThr[500],     ptMix_wrtThr[500];
  float eta_wrtThr[500],    etaMix_wrtThr[500];
  float theta_wrtThr[500],  thetaMix_wrtThr[500];
  float phi_wrtThr[500],    phiMix_wrtThr[500];
  float px[500],     pxMix[500];
  float py[500],     pyMix[500];
  float pz[500],     pzMix[500];
  int pwflag[500], pwflagMix[500];
  float TTheta,      TThetaMix;
  float TPhi,        TPhiMix;
  float MissP;
  int process,       processMix;
  int nref,          nrefMix;
  float jtpt[100],   jtptMix[100];
  float jteta[100],   jtetaMix[100];

  t->SetBranchAddress("nParticle",&nParticle); tMix->SetBranchAddress("nParticle",&nParticleMix);
  t->SetBranchAddress("pt",&pt);               tMix->SetBranchAddress("pt",&ptMix);
  t->SetBranchAddress("eta",&eta);             tMix->SetBranchAddress("eta",&etaMix);
  t->SetBranchAddress("theta",&theta);         tMix->SetBranchAddress("theta",&thetaMix);
  t->SetBranchAddress("phi",&phi);             tMix->SetBranchAddress("phi",&phiMix);
  if(s.doChargedThrust){
    t->SetBranchAddress("pt_wrtChThr",&pt_wrtThr);               tMix->SetBranchAddress("pt_wrtChThr",&ptMix_wrtThr);
    t->SetBranchAddress("eta_wrtChThr",&eta_wrtThr);             tMix->SetBranchAddress("eta_wrtChThr",&etaMix_wrtThr);
    t->SetBranchAddress("theta_wrtChThr",&theta_wrtThr);         tMix->SetBranchAddress("theta_wrtChThr",&thetaMix_wrtThr);
    t->SetBranchAddress("phi_wrtChThr",&phi_wrtThr);             tMix->SetBranchAddress("phi_wrtChThr",&phiMix_wrtThr);
    t->SetBranchAddress("TTheta_charged",&TTheta);       tMix->SetBranchAddress("TTheta_charged",&TThetaMix);
    t->SetBranchAddress("TPhi_charged",&TPhi);           tMix->SetBranchAddress("TPhi_charged",&TPhiMix);
  }else{
    t->SetBranchAddress("pt_wrtThr",&pt_wrtThr);               tMix->SetBranchAddress("pt_wrtThr",&ptMix_wrtThr);
    t->SetBranchAddress("eta_wrtThr",&eta_wrtThr);             tMix->SetBranchAddress("eta_wrtThr",&etaMix_wrtThr);
    t->SetBranchAddress("theta_wrtThr",&theta_wrtThr);         tMix->SetBranchAddress("theta_wrtThr",&thetaMix_wrtThr);
    t->SetBranchAddress("phi_wrtThr",&phi_wrtThr);             tMix->SetBranchAddress("phi_wrtThr",&phiMix_wrtThr);
    t->SetBranchAddress("TTheta",&TTheta);       tMix->SetBranchAddress("TTheta",&TThetaMix);
    t->SetBranchAddress("TPhi",&TPhi);           tMix->SetBranchAddress("TPhi",&TPhiMix);
  }
  t->SetBranchAddress("px",&px);               tMix->SetBranchAddress("px",&pxMix);
  t->SetBranchAddress("py",&py);               tMix->SetBranchAddress("py",&pyMix);
  t->SetBranchAddress("pz",&pz);               tMix->SetBranchAddress("pz",&pzMix);
  t->SetBranchAddress("pwflag",&pwflag);       tMix->SetBranchAddress("pwflag",&pwflagMix);
  t->SetBranchAddress("missP",&MissP);
  t->SetBranchAddress("process",&process);     tMix->SetBranchAddress("process",&processMix);
  jt->SetBranchAddress("nref",&nref);          jtMix->SetBranchAddress("nref",&nrefMix);
  jt->SetBranchAddress("jtpt",&jtpt);          jtMix->SetBranchAddress("jtpt",&jtptMix);
  jt->SetBranchAddress("jteta",&jteta);          jtMix->SetBranchAddress("jteta",&jtetaMix);

  for(int i = 0; i< (s.doAllData?t->GetEntries():s.nEvts); i++){
    t->GetEntry(i);
    if(i%1000==0) std::cout << i << "/" << (s.doAllData?t->GetEntries():s.nEvts) << std::endl;
    

    if(MissP>s.MissPCut && s.doMissPCut) continue;
    if(s.isMC && process!=s.MCProcess) continue;
    if(s.doAjCut){
      jt->GetEntry(i);
      if(nref>=2){
        h_Aj->Fill(TMath::Abs(jtp(jtpt[0],jteta[0])-jtp(jtpt[1],jteta[1]))/(jtp(jtpt[0],jteta[0])+jtp(jtpt[1],jteta[1]))); 
        if(TMath::Abs(jtp(jtpt[0],jteta[0])-jtp(jtpt[1],jteta[1]))/(jtp(jtpt[0],jteta[0])+jtp(jtpt[1],jteta[1])) > s.AjCut) continue;
        if(nref>2 && 2*jtp(jtpt[2],jteta[2])/(jtp(jtpt[0],jteta[0])+jtp(jtpt[1],jteta[1])) > s.thirdJetCut) continue;
      }
    }
 
    int nTrk = 0;
    float nTrig = 0;
    for(int t = 0; t<nParticle; t++){
      if(pwflag[t]==0 || (s.doUseLeptons && (pwflag[t]==1 || pwflag[t]==2))){
        if(TMath::Abs(eta[t]) >= s.etaCut) continue;
        if(pt[t]>s.nTrkPt[0] && pt[t]<s.nTrkPt[1])  nTrk++;//nTrk calculation

        if(s.doThrust && (pt[t]<=s.trigPt[0] || pt[t]>=s.trigPt[1])) continue;//nTrig calculation
        if(!s.doThrust && (pt_wrtThr[t]<=s.trigPt[0] || pt_wrtThr[t]>=s.trigPt[1])) continue;//nTrig calculation
        float corr = 1.0/getEff(s,pt[t],eta[t]);
        nTrig += corr;
      }
    }
    multiplicity->Fill(nTrk);
    if(nTrig<1 && s.doExcludeNTrigLT2) continue;
    h_Ttheta->Fill(TTheta);
    h_Tphi->Fill(TPhi);

    if(s.calcKinematicsWrtThrust && s.doThrust){
      TVector3 tempThr = TVector3();
      tempThr.SetPtThetaPhi(1,TTheta,TPhi);
      for(int t = 0; t<nParticle; t++){
        TVector3 tempPart = TVector3();
        tempPart.SetPtThetaPhi(pt[t],theta[t],phi[t]);
        pt_wrtThr[t] = ptFromThrust(tempThr,tempPart); 
        eta_wrtThr[t] = etaFromThrust(tempThr,tempPart); 
        phi_wrtThr[t] = phiFromThrust(tempThr,tempPart); 
      }
    }

    int nMixed = 0; 
    //start at the next event and add maxSkipSize each time
    for(int i2 = i+1; nMixed<s.nMixedEvents; i2 += (int)(s.maxSkipSize*randGen.Rndm())+1 ){
      if( i2>=t->GetEntries()) i2 = (int)(s.maxSkipSize*randGen.Rndm())+1;
      tMix->GetEntry(i2);
      if(MissP>s.MissPCut && s.doMissPCut) continue;
      if(s.isMC && processMix!=s.MCProcess) continue;
      if(s.doAjCut){
        jtMix->GetEntry(i2);
        if(nrefMix>=2){
          if(TMath::Abs(jtp(jtptMix[0],jtetaMix[0])-jtp(jtptMix[1],jtetaMix[1]))/(jtp(jtptMix[0],jtetaMix[0])+jtp(jtptMix[1],jtetaMix[1])) > s.AjCut) continue;
          if(nrefMix>2 && 2*jtp(jtptMix[2],jtetaMix[2])/(jtp(jtptMix[0],jtetaMix[0])+jtp(jtptMix[1],jtetaMix[1])) > s.thirdJetCut) continue;
        }
      }
      if(s.doThrust){
        if(TMath::Abs(TTheta-TThetaMix)>s.thrustMatchWindow || TMath::ACos(TMath::Cos(TPhi-TPhiMix))>s.thrustMatchWindow) continue;
      }
      int nTrkMix = 0;
      if(s.doMultMatch){
        for(int t = 0; t<nParticleMix; t++){
          if(pwflagMix[t]==0 || (s.doUseLeptons && (pwflagMix[t]==1 || pwflagMix[t]==2))){
            if(TMath::Abs(etaMix[t]) >= s.etaCut) continue;
            if(ptMix[t]>s.nTrkPt[0] && ptMix[t]<s.nTrkPt[1])  nTrkMix++;//nTrk calculation
          }
        }
        if(!s.isInSameMultBin(nTrk,nTrkMix)) continue;
      } 
 
      for(int k = 0; k<s.nMultBins; k++){
        if(s.isInMultBin(nTrk,k) && nMixed==0)  nSignalEvts[k]++;
        if(s.isInMultBin(nTrk,k))  nBkgrndEvts[k]++;
      }
      if(s.calcKinematicsWrtThrust && s.doThrust){
        TVector3 tempThr = TVector3();
        tempThr.SetPtThetaPhi(1,TThetaMix,TPhiMix);
        for(int t = 0; t<nParticleMix; t++){
          TVector3 tempPart = TVector3();
          tempPart.SetPtThetaPhi(ptMix[t],thetaMix[t],phiMix[t]);
          ptMix_wrtThr[t] = ptFromThrust(tempThr,tempPart); 
          etaMix_wrtThr[t] = etaFromThrust(tempThr,tempPart); 
          phiMix_wrtThr[t] = phiFromThrust(tempThr,tempPart); 
        }
      }
    
      //fill signal histogram
      for(int j1 = 0; j1<nParticle; j1++){
        if(!(pwflag[j1]==0 || (s.doUseLeptons && (pwflag[j1]==1 || pwflag[j1]==2)))) continue;
        if(nMixed == 0){
          h_phi->Fill(phi[j1]);
          h_eta->Fill(eta[j1]);
          h_theta->Fill(theta[j1]);
          h_pt->Fill(pt[j1]);
        }
        if(TMath::Abs(eta[j1]) > s.etaCut) continue;
        if(!s.doThrust && (pt[j1]<s.trigPt[0] || pt[j1]>s.trigPt[1])) continue;
        if(s.doThrust && (pt_wrtThr[j1]<s.trigPt[0] || pt_wrtThr[j1]>s.trigPt[1])) continue;
        float corr1 = 1.0/getEff(s,pt[j1],eta[j1]);

        //signal histogram
        if(nMixed == 0){
          for(int j2 = 0; j2<j1; j2++){
            if(TMath::Abs(eta[j2]) > s.etaCut) continue;
            if(s.doThrust && (pt[j2]<s.assocPt[0] || pt[j2]>s.assocPt[1])) continue;
            if(!s.doThrust && (pt_wrtThr[j2]<s.assocPt[0] || pt_wrtThr[j2]>s.assocPt[1])) continue;
            if(!(pwflag[j2]==0 || (s.doUseLeptons && (pwflag[j2]==1 || pwflag[j2]==2)))) continue;
            float corr2 = 1.0/getEff(s,pt[j2],eta[j2]);
            //correct for both particles and also divide by hte bin widths
            for(int k = 0; k<s.nMultBins; k++){
              if(s.isInMultBin(nTrk,k)){
                if(!s.doThrust) signal2PC[k]->Fill( dEta(eta[j1],eta[j2]), dPhi(phi[j1],phi[j2]), corr1*corr2/(4*s.etaPlotRange/(float)s.dEtaBins)/(2*TMath::Pi()/(float)s.dPhiBins)/nTrig);
                if(s.doThrust) signal2PC[k]->Fill( dEta(eta_wrtThr[j1],eta_wrtThr[j2]), dPhi(phi_wrtThr[j1],phi_wrtThr[j2]), corr1*corr2/(4*s.etaPlotRange/(float)s.dEtaBins)/(2*TMath::Pi()/(float)s.dPhiBins)/nTrig);
                if(!s.doThrust) signal2PC_ptweighted[k]->Fill( dEta(eta[j1],eta[j2]), dPhi(phi[j1],phi[j2]), pt[j1]*pt[j2]*corr1*corr2/(4*s.etaPlotRange/(float)s.dEtaBins)/(2*TMath::Pi()/(float)s.dPhiBins)/nTrig);
                if(s.doThrust) signal2PC_ptweighted[k]->Fill( dEta(eta_wrtThr[j1],eta_wrtThr[j2]), dPhi(phi_wrtThr[j1],phi_wrtThr[j2]), pt_wrtThr[j1]*pt_wrtThr[j2]*corr1*corr2/(4*s.etaPlotRange/(float)s.dEtaBins)/(2*TMath::Pi()/(float)s.dPhiBins)/nTrig);
              }
            }//end mult bin loop
          }//end 2nd particle loop
        }
        
        //background mixed event histogram  
        for(int j2 = 0; j2<nParticleMix; j2++){
          if(TMath::Abs(etaMix[j2]) > s.etaCut) continue;
          if(!s.doThrust && (ptMix[j2]<s.assocPt[0] || ptMix[j2]>s.assocPt[1])) continue;
          if(s.doThrust && (ptMix_wrtThr[j2]<s.assocPt[0] || ptMix_wrtThr[j2]>s.assocPt[1])) continue;
          if(!(pwflagMix[j2]==0 || (s.doUseLeptons && (pwflagMix[j2]==1 || pwflagMix[j2]==2)))) continue;
          float corr2 = 1.0/getEff(s,pt[j2],eta[j2]);
          //correct for both particles and also divide by hte bin widths
          for(int k = 0; k<s.nMultBins; k++){
            if(s.isInMultBin(nTrk,k)){
              if(!s.doThrust) bkgrnd2PC[k]->Fill( dEta(eta[j1],etaMix[j2]), dPhi(phi[j1],phiMix[j2]), corr1*corr2/(4*s.etaPlotRange/(float)s.dEtaBins)/(2*TMath::Pi()/(float)s.dPhiBins)/nTrig);
              if(s.doThrust) bkgrnd2PC[k]->Fill( dEta(eta_wrtThr[j1],etaMix_wrtThr[j2]), dPhi(phi_wrtThr[j1],phiMix_wrtThr[j2]), corr1*corr2/(4*s.etaPlotRange/(float)s.dEtaBins)/(2*TMath::Pi()/(float)s.dPhiBins)/nTrig);
              if(!s.doThrust) bkgrnd2PC_ptweighted[k]->Fill( dEta(eta[j1],etaMix[j2]), dPhi(phi[j1],phiMix[j2]), pt[j1]*ptMix[j2]*corr1*corr2/(4*s.etaPlotRange/(float)s.dEtaBins)/(2*TMath::Pi()/(float)s.dPhiBins)/nTrig);
              if(s.doThrust) bkgrnd2PC_ptweighted[k]->Fill( dEta(eta_wrtThr[j1],etaMix_wrtThr[j2]), dPhi(phi_wrtThr[j1],phiMix_wrtThr[j2]), pt_wrtThr[j1]*ptMix_wrtThr[j2]*corr1*corr2/(4*s.etaPlotRange/(float)s.dEtaBins)/(2*TMath::Pi()/(float)s.dPhiBins)/nTrig);
            }
          }//end mult bin loop
        }//end mixed particle loop
      }//end trigger particle loop
      nMixed++;
    }//end mixing loop
  }//end main evt loop
  
  output->cd();
  for(int k = 0; k<s.nMultBins; k++){
    std::cout << nSignalEvts[k] <<" " << std::endl;
    signal2PC[k]->Scale(1.0/(float)nSignalEvts[k]);
    symmetrizeDetaDphi(signal2PC[k],s.dEtaBins,s.dPhiBins);
    bkgrnd2PC[k]->Scale(1.0/(float)nBkgrndEvts[k]);
    symmetrizeDetaDphi(bkgrnd2PC[k],s.dEtaBins,s.dPhiBins);
    ratio2PC[k] = (TH2F*)signal2PC[k]->Clone(Form("ratio2PC_%d_%d",s.multBinsLow[k],s.multBinsHigh[k]));
    ratio2PC[k]->Divide(bkgrnd2PC[k]);
    ratio2PC[k]->Scale(bkgrnd2PC[k]->GetBinContent(bkgrnd2PC[k]->FindBin(0,0))/4.0);
    getLongRangeYield(s,ratio2PC[k],longRangeYield[k]);
    
    signal2PC_ptweighted[k]->Scale(1.0/(float)nSignalEvts[k]);
    symmetrizeDetaDphi(signal2PC_ptweighted[k],s.dEtaBins,s.dPhiBins);
    bkgrnd2PC_ptweighted[k]->Scale(1.0/(float)nBkgrndEvts[k]);
    symmetrizeDetaDphi(bkgrnd2PC_ptweighted[k],s.dEtaBins,s.dPhiBins);
    ratio2PC_ptweighted[k] = (TH2F*)signal2PC_ptweighted[k]->Clone(Form("ratio2PC_ptweighted_%d_%d",s.multBinsLow[k],s.multBinsHigh[k]));
    ratio2PC_ptweighted[k]->Divide(bkgrnd2PC_ptweighted[k]);
    ratio2PC_ptweighted[k]->Scale(bkgrnd2PC_ptweighted[k]->GetBinContent(bkgrnd2PC_ptweighted[k]->FindBin(0,0))/4.0);
    getLongRangeYield(s,ratio2PC_ptweighted[k],longRangeYield_ptweighted[k]);
  }

  f->Close();
  fMix->Close();
  output->Write();
  exit(1); 
}
