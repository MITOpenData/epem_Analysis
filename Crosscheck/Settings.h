#ifndef SETTINGS
#define SETTINGS

#include <string>
#include <iostream>
#include "TH1F.h"

class Settings{
  public:

    //0 = ALEPH (defaults, rest are initialized in constructor)
    //1 - DELPHI
    //2 = Belle
    //3 = CMS

    int experiment = 0;
    bool isMC = false;
    int MCProcess = 5;
    //ALEPH data
    //std::string inputFile = "/data/abaty/ALEPHTrees/cleaned_ALEPH_Data2-v3_Aug11_2017.root";
    //std::string inputFile = "/data/abaty/ALEPHTrees/mergedLEP1_20171022.root";
    //std::string inputFile = "/data/cmcginn/StudyMultSamples/ALEPH/MC/20171022/alephMCRecoAfterCutPaths_1997_KQQAndKWW4F_1of2_20171022.root";
    //std::string inputFile = "/data/cmcginn/GeneratorsHEPMC/PYTHIA8/0p0912/pthat1_Zee_RopeWalk_minNPart60/outFile_PYTHIA8_0p0912_pthat1_Zee_RopeWalk_minNPart60_MERGED.root";
    //std::string inputFile = "/data/cmcginn/GeneratorsHEPMC/PYTHIA8/0p0912/pthat1_Zee_minNPart60/outFile_PYTHIA8_0p0912_pthat1_Zee_minNPart60_MERGED.root";
    //std::string inputFile = "/data/cmcginn/GeneratorsHEPMC/PYTHIA8/0p0912/pthat1_Zee/outFile_PYTHIA8_0p0912_pthat1_Zee_MERGED.root";
    //std::string inputFile = "/data/cmcginn/GeneratorsHEPMC/PYTHIA8/0p0912/pthat1_Zee_RopeWalk/outFile_PYTHIA8_0p0912_pthat1_Zee_RopeWalk_MERGED.root";
    std::string inputFile = "/data/cmcginn/GeneratorsHEPMC/PYTHIA8/0p0912/pthat1_Zee_RopeWalk/20171208/outFile_MERGED_nEvt2000000_nMinChgPart0_RopeWalk1.root";


    //cuts
    bool doUseLeptons = false;

    //kinematics (if trig != assoc cuts, make sure doExcludeNTrigLT2 is set to false)
    float trigPt[2] = {0,999};
    float assocPt[2] = {0,999};
    float nTrkPt[2] = {0.4,100};
    
    //float etaCut = 1.8;
    float etaCut = 1.8;
    //beam  axis stuff
    //float etaPlotRange = 1.8;//this gets multiplied by 2
    //float dEtaBins = 36;//keep even
    //float dPhiBins = 36;//keep factor of 4
    float etaPlotRange = 1.8;//this gets multiplied by 2
    float dEtaBins = 36;//keep even
    float dPhiBins = 20;//keep factor of 4

    float dEtaRangeToIntegrate[2] = {2.0,3.6};//try to make this correspond with bin edges based on above parameters

    //mixing
    int nMixedEvents = 1;
    int maxSkipSize  = 3;


    //plots
    static const int nMultBins = 3;
    int multBinsLow[nMultBins]  = {0 , 20, 30};
    int multBinsHigh[nMultBins] = {20, 30, 999};

    bool calcKinematicsWrtThrust = false;

    //other
    bool doThrust = false;
    bool doChargedThrust = true;
    float thrustMatchWindow = 99.0;
    bool doMultMatch = true;
    bool doMissPCut = false;
    float MissPCut = 20;
    bool doExcludeNTrigLT2 = true;
    bool doAjCut = false;
    float AjCut = 0.1;
    float thirdJetCut = 0.03;
    bool doAllData = false;
    int nEvts = 50000;

    Settings();
    bool isInMultBin(int n, int bin);
    bool isInSameMultBin(int n1, int n2);

  private:

};

Settings::Settings()
{
  std::cout << "Getting settings.." << std::endl;
  if(experiment == 3){//CMS
    inputFile = "/data/flowex/CMSsample/TPCNtuple_MinBias_TuneCUETP8M1_5p02TeV-pythia8-HINppWinter16DR-NoPU_75X_mcRun2_asymptotic_ppAt5TeV_forest_v2_track.root";
    nMixedEvents = 5;
    trigPt[0] = 1; trigPt[1] = 3;
    assocPt[0] = 1; assocPt[1] = 3;
    nTrkPt[0] = 0.4; nTrkPt[1]=100;
    etaCut = 2.4;
    dEtaBins = 40;//keep even
    dPhiBins = 40;//keep factor of 4
    dEtaRangeToIntegrate[0] = 2; dEtaRangeToIntegrate[1] = 4;
    doThrust = false;
  }

  return;
}

bool Settings::isInMultBin(int n, int bin){
  if(bin >= nMultBins) std::cout << "Error in isInMultBin(): bin out of bounds!" << std::endl;
  if(n >= multBinsLow[bin] && n < multBinsHigh[bin]) return true;
  return false;
}

bool Settings::isInSameMultBin(int n1, int n2){
  bool isIt = false;
  for(int i = 0; i<nMultBins; i++){
    if(isInMultBin(n1,i) && isInMultBin(n2,i)) isIt = true;
  }
  return isIt;
}
#endif
