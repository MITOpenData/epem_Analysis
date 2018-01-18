#ifndef PARTICLEDATA_H
#define PARTICLEDATA_H

#include "TTree.h"

class particleData{
 public:
  static const int nMaxPart = 10000;

  int nParticle;
  int EventNo;
  int RunNo;
  int year;
  int process;
  float Energy;
  int bFlag;
  float bx;
  float by;
  float ebx;
  float eby;
  float px[nMaxPart];
  float py[nMaxPart];
  float pz[nMaxPart];
  float pt[nMaxPart];
  float pmag[nMaxPart];
  float rap[nMaxPart];
  float eta[nMaxPart];
  float theta[nMaxPart];
  float phi[nMaxPart];
  float mass[nMaxPart];
  float charge[nMaxPart];
  // Starting from 0, pwflag (via Marcello) - CHARGED_TRACK, CHARGED_LEPTONS1, CHARGED_LEPTONS2, V0, PHOTON, NEUTRAL_HADRON
  int pwflag[nMaxPart];
  int pid[nMaxPart];
  float d0[nMaxPart];
  float z0[nMaxPart];
  int ntpc[nMaxPart];
  
  //thrust axis variables
  float pt_wrtThr[nMaxPart];
  float eta_wrtThr[nMaxPart];
  float theta_wrtThr[nMaxPart];
  float phi_wrtThr[nMaxPart];
  float pt_wrtChThr[nMaxPart];
  float eta_wrtChThr[nMaxPart];
  float theta_wrtChThr[nMaxPart];
  float phi_wrtChThr[nMaxPart];

  static const int nVar = 35;
  std::string varStr[nVar] = {"nParticle",
			      "EventNo",
			      "RunNo",
			      "year",
			      "process",
			      "Energy",
			      "bFlag",
			      "bx",
			      "by",
			      "ebx",
			      "eby",
			      "px",
			      "py",
			      "pz",
			      "pt",
			      "pmag",
			      "rap",
			      "eta",
			      "theta",
			      "phi",
			      "mass",
			      "charge",
			      "pwflag",
			      "pid",
			      "d0",
			      "z0",
			      "ntpc",
			      "pt_wrtThr",
			      "eta_wrtThr",
			      "theta_wrtThr",
			      "phi_wrtThr",
			      "pt_wrtChThr",
			      "eta_wrtChThr",
			      "theta_wrtChThr",
			      "phi_wrtChThr"};

  bool varIsGood[nVar];
  
  particleData();
  void SetStatusAndAddressRead(TTree* inTree_p, std::vector<std::string> inList);
};

particleData::particleData()
{
  for(int i = 0; i < nVar; ++i){varIsGood[i] = true;}
  return;
}

void particleData::SetStatusAndAddressRead(TTree* inTree_p, std::vector<std::string> inList)
{
  if(inList.size() != 0){
    for(int i = 0; i < nVar; ++i){varIsGood[i] = false;}

    for(unsigned int i = 0; i < inList.size(); ++i){
      
      for(Int_t j = 0; j < nVar; ++j){
	if(inList.at(i).size() == varStr[j].size() && inList.at(i).find(varStr[j]) != std::string::npos){
	  varIsGood[j] = true;
	  break;
	}
      }
    }
  }

  for(Int_t i = 0; i < nVar; ++i){
    if(varIsGood[i]) inTree_p->SetBranchStatus(varStr[i].c_str(), 1);
  }

  if(varIsGood[0]) inTree_p->SetBranchAddress("nParticle", &nParticle); 
  if(varIsGood[1]) inTree_p->SetBranchAddress("EventNo", &EventNo);
  if(varIsGood[2]) inTree_p->SetBranchAddress("RunNo", &RunNo);
  if(varIsGood[3]) inTree_p->SetBranchAddress("year", &year);
  if(varIsGood[4]) inTree_p->SetBranchAddress("process", &process);
  if(varIsGood[5]) inTree_p->SetBranchAddress("Energy", &Energy);
  if(varIsGood[6]) inTree_p->SetBranchAddress("bFlag", &bFlag);
  if(varIsGood[7]) inTree_p->SetBranchAddress("bx", &bx);
  if(varIsGood[8]) inTree_p->SetBranchAddress("by", &by);
  if(varIsGood[9]) inTree_p->SetBranchAddress("ebx", &ebx);
  if(varIsGood[10]) inTree_p->SetBranchAddress("eby", &eby);
  if(varIsGood[11]) inTree_p->SetBranchAddress("px", px);
  if(varIsGood[12]) inTree_p->SetBranchAddress("py", py);
  if(varIsGood[13]) inTree_p->SetBranchAddress("pz", pz);
  if(varIsGood[14]) inTree_p->SetBranchAddress("pt", pt);
  if(varIsGood[15]) inTree_p->SetBranchAddress("pmag", pmag);
  if(varIsGood[16]) inTree_p->SetBranchAddress("rap", rap);
  if(varIsGood[17]) inTree_p->SetBranchAddress("eta", eta);
  if(varIsGood[18]) inTree_p->SetBranchAddress("theta", theta);
  if(varIsGood[19]) inTree_p->SetBranchAddress("phi", phi);
  if(varIsGood[20]) inTree_p->SetBranchAddress("mass", mass);
  if(varIsGood[21]) inTree_p->SetBranchAddress("charge", charge);
  if(varIsGood[22]) inTree_p->SetBranchAddress("pwflag", pwflag);
  if(varIsGood[23]) inTree_p->SetBranchAddress("pid", pid);
  if(varIsGood[24]) inTree_p->SetBranchAddress("d0", d0);
  if(varIsGood[25]) inTree_p->SetBranchAddress("z0", z0);
  if(varIsGood[26]) inTree_p->SetBranchAddress("ntpc", ntpc);
  if(varIsGood[27]) inTree_p->SetBranchAddress("pt_wrtThr", pt_wrtThr);
  if(varIsGood[28]) inTree_p->SetBranchAddress("eta_wrtThr", eta_wrtThr);
  if(varIsGood[29]) inTree_p->SetBranchAddress("theta_wrtThr", theta_wrtThr);
  if(varIsGood[30]) inTree_p->SetBranchAddress("phi_wrtThr", phi_wrtThr);
  if(varIsGood[31]) inTree_p->SetBranchAddress("pt_wrtChThr", pt_wrtChThr);
  if(varIsGood[32]) inTree_p->SetBranchAddress("eta_wrtChThr", eta_wrtChThr);
  if(varIsGood[33]) inTree_p->SetBranchAddress("theta_wrtChThr", theta_wrtChThr);
  if(varIsGood[34]) inTree_p->SetBranchAddress("phi_wrtChThr", phi_wrtChThr);
  
  return;
}

void particleData::SetBranchWrite(TTree* inTree_p)
{
  inTree_p->Branch("EventNo", &EventNo, "EventNo/I");
  inTree_p->Branch("RunNo", &RunNo, "RunNo/I");
  inTree_p->Branch("year", &year, "year/I");
  inTree_p->Branch("process", &process, "process/I");
  inTree_p->Branch("Energy", &Energy, "Energy/F");
  inTree_p->Branch("bFlag", &bFlag, "bFlag/I");
  inTree_p->Branch("bx", &bx, "bx/F");
  inTree_p->Branch("by", &by, "by/F");
  inTree_p->Branch("ebx", &ebx, "ebx/F");
  inTree_p->Branch("eby", &eby, "eby/F");
  inTree_p->Branch("nParticle", &nParticle, "nParticle/I"); 
  inTree_p->Branch("px", px, "px[nParticle]/F");
  inTree_p->Branch("py", py, "py[nParticle]/F");
  inTree_p->Branch("pz", pz, "pz[nParticle]/F");
  inTree_p->Branch("pt", pt, "pt[nParticle]/F");
  inTree_p->Branch("pmag", pmag, "pmag[nParticle]/F");
  inTree_p->Branch("rap", rap, "rap[nParticle]/F");
  inTree_p->Branch("eta", eta, "eta[nParticle]/F");
  inTree_p->Branch("theta", theta, "theta[nParticle]/F");
  inTree_p->Branch("phi", phi, "phi[nParticle]/F");
  inTree_p->Branch("mass", mass, "mass[nParticle]/F");
  inTree_p->Branch("charge", charge, "charge[nParticle]/F");
  inTree_p->Branch("pwflag", pwflag, "pwflag[nParticle]/I");
  inTree_p->Branch("pid", pid, "pid[nParticle]/I");
  inTree_p->Branch("d0", d0, "d0[nParticle]/F");
  inTree_p->Branch("z0", z0, "z0[nParticle]/F");
  inTree_p->Branch("ntpc", ntpc, "ntpx[nParticle]/I");
  inTree_p->Branch("pt_wrtThr", pt_wrtThr, "pt_wrtThr[nParticle]/F");
  inTree_p->Branch("eta_wrtThr", eta_wrtThr, "eta_wrtThr[nParticle]/F");
  inTree_p->Branch("theta_wrtThr", theta_wrtThr, "theta_wrtThr[nParticle]/F");
  inTree_p->Branch("phi_wrtThr", phi_wrtThr, "phi_wrtThr[nParticle]/F");
  inTree_p->Branch("pt_wrtChThr", pt_wrtChThr, "pt_wrtChThr[nParticle]/F");
  inTree_p->Branch("eta_wrtChThr", eta_wrtChThr, "eta_wrtChThr[nParticle]/F");
  inTree_p->Branch("theta_wrtChThr", theta_wrtChThr, "theta_wrtChThr[nParticle]/F");
  inTree_p->Branch("phi_wrtChThr", phi_wrtChThr, "phi_wrtChThr[nParticle]/F");
  
  return;
}

#endif
