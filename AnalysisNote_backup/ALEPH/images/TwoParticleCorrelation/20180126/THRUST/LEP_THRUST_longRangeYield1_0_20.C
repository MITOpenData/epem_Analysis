void LEP_THRUST_longRangeYield1_0_20()
{
//=========Macro generated from canvas: c2/dphi
//=========  (Thu Feb 15 23:06:26 2018) by ROOT version 6.13/01
   TCanvas *c2 = new TCanvas("c2", "dphi",988,1124,600,600);
   c2->Range(0,0,1,1);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c2_1
   TPad *c2_1 = new TPad("c2_1", "c2_1",0.01,0.51,0.49,0.99);
   c2_1->Draw();
   c2_1->cd();
   c2_1->Range(-2.356195,0.2193275,5.497787,0.3113038);
   c2_1->SetFillColor(0);
   c2_1->SetBorderMode(0);
   c2_1->SetBorderSize(2);
   c2_1->SetFrameBorderMode(0);
   c2_1->SetFrameBorderMode(0);
   
   TH1D *h_deltaphi_0__262 = new TH1D("h_deltaphi_0__262","#Delta#phi, #Delta#eta (2.000000, 10.000000), Multipliplicity (0, 20)",20,-1.570796,4.712389);
   h_deltaphi_0__262->SetBinContent(1,0.2320277);
   h_deltaphi_0__262->SetBinContent(2,0.2334723);
   h_deltaphi_0__262->SetBinContent(3,0.2396682);
   h_deltaphi_0__262->SetBinContent(4,0.2482766);
   h_deltaphi_0__262->SetBinContent(5,0.2549774);
   h_deltaphi_0__262->SetBinContent(6,0.2549774);
   h_deltaphi_0__262->SetBinContent(7,0.2482766);
   h_deltaphi_0__262->SetBinContent(8,0.2396682);
   h_deltaphi_0__262->SetBinContent(9,0.2334723);
   h_deltaphi_0__262->SetBinContent(10,0.2320277);
   h_deltaphi_0__262->SetBinContent(11,0.2362388);
   h_deltaphi_0__262->SetBinContent(12,0.2466269);
   h_deltaphi_0__262->SetBinContent(13,0.2635633);
   h_deltaphi_0__262->SetBinContent(14,0.2834426);
   h_deltaphi_0__262->SetBinContent(15,0.2984241);
   h_deltaphi_0__262->SetBinContent(16,0.2984241);
   h_deltaphi_0__262->SetBinContent(17,0.2834426);
   h_deltaphi_0__262->SetBinContent(18,0.2635633);
   h_deltaphi_0__262->SetBinContent(19,0.2466269);
   h_deltaphi_0__262->SetBinContent(20,0.2362388);
   h_deltaphi_0__262->SetBinError(1,0.0001656415);
   h_deltaphi_0__262->SetBinError(2,0.0001685108);
   h_deltaphi_0__262->SetBinError(3,0.0001728842);
   h_deltaphi_0__262->SetBinError(4,0.0001779873);
   h_deltaphi_0__262->SetBinError(5,0.0001813624);
   h_deltaphi_0__262->SetBinError(6,0.0001813624);
   h_deltaphi_0__262->SetBinError(7,0.0001779873);
   h_deltaphi_0__262->SetBinError(8,0.0001728842);
   h_deltaphi_0__262->SetBinError(9,0.0001685108);
   h_deltaphi_0__262->SetBinError(10,0.0001656415);
   h_deltaphi_0__262->SetBinError(11,0.0001647947);
   h_deltaphi_0__262->SetBinError(12,0.0001660046);
   h_deltaphi_0__262->SetBinError(13,0.0001697238);
   h_deltaphi_0__262->SetBinError(14,0.0001745568);
   h_deltaphi_0__262->SetBinError(15,0.0001781641);
   h_deltaphi_0__262->SetBinError(16,0.0001781641);
   h_deltaphi_0__262->SetBinError(17,0.0001745568);
   h_deltaphi_0__262->SetBinError(18,0.0001697238);
   h_deltaphi_0__262->SetBinError(19,0.0001660046);
   h_deltaphi_0__262->SetBinError(20,0.0001647947);
   h_deltaphi_0__262->SetEntries(4.347532e+07);
   h_deltaphi_0__262->SetStats(0);
   
   TF1 *f197 = new TF1("f1","[0]*(1+2*([1]*cos(1*x)+[2]*cos(2*x)+[3]*cos(3*x)+[4]*cos(4*x)+[5]*cos(5*x)+[6]*cos(6*x)))",-1.570796,4.712389, TF1::EAddToList::kNo);
   f197->SetFillColor(19);
   f197->SetFillStyle(0);
   f197->SetLineColor(2);
   f197->SetLineWidth(2);
   f197->SetChisquare(2.724865);
   f197->SetNDF(13);
   f197->GetXaxis()->SetLabelFont(42);
   f197->GetXaxis()->SetLabelSize(0.035);
   f197->GetXaxis()->SetTitleSize(0.035);
   f197->GetXaxis()->SetTitleFont(42);
   f197->GetYaxis()->SetLabelFont(42);
   f197->GetYaxis()->SetLabelSize(0.035);
   f197->GetYaxis()->SetTitleSize(0.035);
   f197->GetYaxis()->SetTitleOffset(0);
   f197->GetYaxis()->SetTitleFont(42);
   f197->SetParameter(0,0.2536718);
   f197->SetParError(0,3.847253e-05);
   f197->SetParLimits(0,0,0);
   f197->SetParameter(1,-0.03854273);
   f197->SetParError(1,0.0001098535);
   f197->SetParLimits(1,0,0);
   f197->SetParameter(2,0.04387937);
   f197->SetParError(2,0.0001072584);
   f197->SetParLimits(2,0,0);
   f197->SetParameter(3,-0.004892463);
   f197->SetParError(3,0.0001072431);
   f197->SetParLimits(3,0,0);
   f197->SetParameter(4,0.004196093);
   f197->SetParError(4,0.0001072371);
   f197->SetParLimits(4,0,0);
   f197->SetParameter(5,-0.0004843098);
   f197->SetParError(5,0.0001071345);
   f197->SetParLimits(5,0,0);
   f197->SetParameter(6,0.0003677759);
   f197->SetParError(6,0.0001071294);
   f197->SetParLimits(6,0,0);
   f197->SetParent(h_deltaphi_0__262);
   h_deltaphi_0__262->GetListOfFunctions()->Add(f197);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_deltaphi_0__262->SetLineColor(ci);
   h_deltaphi_0__262->GetXaxis()->SetTitle("#Delta#phi");
   h_deltaphi_0__262->GetXaxis()->SetLabelFont(42);
   h_deltaphi_0__262->GetXaxis()->SetLabelSize(0.035);
   h_deltaphi_0__262->GetXaxis()->SetTitleSize(0.035);
   h_deltaphi_0__262->GetXaxis()->SetTitleOffset(0);
   h_deltaphi_0__262->GetXaxis()->SetTitleFont(42);
   h_deltaphi_0__262->GetYaxis()->SetTitle("Y(#Delta#phi)");
   h_deltaphi_0__262->GetYaxis()->SetLabelFont(42);
   h_deltaphi_0__262->GetYaxis()->SetLabelSize(0.035);
   h_deltaphi_0__262->GetYaxis()->SetTitleSize(0.035);
   h_deltaphi_0__262->GetYaxis()->SetTitleOffset(0);
   h_deltaphi_0__262->GetYaxis()->SetTitleFont(42);
   h_deltaphi_0__262->GetZaxis()->SetLabelFont(42);
   h_deltaphi_0__262->GetZaxis()->SetLabelSize(0.035);
   h_deltaphi_0__262->GetZaxis()->SetTitleSize(0.035);
   h_deltaphi_0__262->GetZaxis()->SetTitleFont(42);
   h_deltaphi_0__262->Draw("");
   
   TPaveText *pt = new TPaveText(0.15,0.9341304,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("#Delta#phi, #Delta#eta (2.000000, 10.000000), Multipliplicity (0, 20)");
   pt->Draw();
   c2_1->Modified();
   c2->cd();
  
// ------------>Primitives in pad: c2_2
   TPad *c2_2 = new TPad("c2_2", "c2_2",0.51,0.51,0.99,0.99);
   c2_2->Draw();
   c2_2->cd();
   c2_2->Range(-2.356195,0.2193275,5.497787,0.3113038);
   c2_2->SetFillColor(0);
   c2_2->SetBorderMode(0);
   c2_2->SetBorderSize(2);
   c2_2->SetFrameBorderMode(0);
   c2_2->SetFrameBorderMode(0);
   
   TH1D *h_deltaphi_2__263 = new TH1D("h_deltaphi_2__263","#Delta#phi, #Delta#eta (2.200000, 10.000000), Multipliplicity (0, 20)",20,-1.570796,4.712389);
   h_deltaphi_2__263->SetBinContent(1,0.2320277);
   h_deltaphi_2__263->SetBinContent(2,0.2334723);
   h_deltaphi_2__263->SetBinContent(3,0.2396682);
   h_deltaphi_2__263->SetBinContent(4,0.2482766);
   h_deltaphi_2__263->SetBinContent(5,0.2549774);
   h_deltaphi_2__263->SetBinContent(6,0.2549774);
   h_deltaphi_2__263->SetBinContent(7,0.2482766);
   h_deltaphi_2__263->SetBinContent(8,0.2396682);
   h_deltaphi_2__263->SetBinContent(9,0.2334723);
   h_deltaphi_2__263->SetBinContent(10,0.2320277);
   h_deltaphi_2__263->SetBinContent(11,0.2362388);
   h_deltaphi_2__263->SetBinContent(12,0.2466269);
   h_deltaphi_2__263->SetBinContent(13,0.2635633);
   h_deltaphi_2__263->SetBinContent(14,0.2834426);
   h_deltaphi_2__263->SetBinContent(15,0.2984241);
   h_deltaphi_2__263->SetBinContent(16,0.2984241);
   h_deltaphi_2__263->SetBinContent(17,0.2834426);
   h_deltaphi_2__263->SetBinContent(18,0.2635633);
   h_deltaphi_2__263->SetBinContent(19,0.2466269);
   h_deltaphi_2__263->SetBinContent(20,0.2362388);
   h_deltaphi_2__263->SetBinError(1,0.0001656415);
   h_deltaphi_2__263->SetBinError(2,0.0001685108);
   h_deltaphi_2__263->SetBinError(3,0.0001728842);
   h_deltaphi_2__263->SetBinError(4,0.0001779873);
   h_deltaphi_2__263->SetBinError(5,0.0001813624);
   h_deltaphi_2__263->SetBinError(6,0.0001813624);
   h_deltaphi_2__263->SetBinError(7,0.0001779873);
   h_deltaphi_2__263->SetBinError(8,0.0001728842);
   h_deltaphi_2__263->SetBinError(9,0.0001685108);
   h_deltaphi_2__263->SetBinError(10,0.0001656415);
   h_deltaphi_2__263->SetBinError(11,0.0001647947);
   h_deltaphi_2__263->SetBinError(12,0.0001660046);
   h_deltaphi_2__263->SetBinError(13,0.0001697238);
   h_deltaphi_2__263->SetBinError(14,0.0001745568);
   h_deltaphi_2__263->SetBinError(15,0.0001781641);
   h_deltaphi_2__263->SetBinError(16,0.0001781641);
   h_deltaphi_2__263->SetBinError(17,0.0001745568);
   h_deltaphi_2__263->SetBinError(18,0.0001697238);
   h_deltaphi_2__263->SetBinError(19,0.0001660046);
   h_deltaphi_2__263->SetBinError(20,0.0001647947);
   h_deltaphi_2__263->SetEntries(4.347532e+07);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("h_deltaphi_2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries =   4.347532e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  1.645");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.798");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   h_deltaphi_2__263->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h_deltaphi_2__263);

   ci = TColor::GetColor("#000099");
   h_deltaphi_2__263->SetLineColor(ci);
   h_deltaphi_2__263->GetXaxis()->SetTitle("#Delta#phi");
   h_deltaphi_2__263->GetXaxis()->SetLabelFont(42);
   h_deltaphi_2__263->GetXaxis()->SetLabelSize(0.035);
   h_deltaphi_2__263->GetXaxis()->SetTitleSize(0.035);
   h_deltaphi_2__263->GetXaxis()->SetTitleOffset(0);
   h_deltaphi_2__263->GetXaxis()->SetTitleFont(42);
   h_deltaphi_2__263->GetYaxis()->SetTitle("Y(#Delta#phi)");
   h_deltaphi_2__263->GetYaxis()->SetLabelFont(42);
   h_deltaphi_2__263->GetYaxis()->SetLabelSize(0.035);
   h_deltaphi_2__263->GetYaxis()->SetTitleSize(0.035);
   h_deltaphi_2__263->GetYaxis()->SetTitleOffset(0);
   h_deltaphi_2__263->GetYaxis()->SetTitleFont(42);
   h_deltaphi_2__263->GetZaxis()->SetLabelFont(42);
   h_deltaphi_2__263->GetZaxis()->SetLabelSize(0.035);
   h_deltaphi_2__263->GetZaxis()->SetTitleSize(0.035);
   h_deltaphi_2__263->GetZaxis()->SetTitleFont(42);
   h_deltaphi_2__263->Draw("");
   
   pt = new TPaveText(0.15,0.9341304,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("#Delta#phi, #Delta#eta (2.200000, 10.000000), Multipliplicity (0, 20)");
   pt->Draw();
   c2_2->Modified();
   c2->cd();
  
// ------------>Primitives in pad: c2_3
   TPad *c2_3 = new TPad("c2_3", "c2_3",0.01,0.01,0.49,0.49);
   c2_3->Draw();
   c2_3->cd();
   c2_3->Range(-2.356195,0.2275591,5.497787,0.2838901);
   c2_3->SetFillColor(0);
   c2_3->SetBorderMode(0);
   c2_3->SetBorderSize(2);
   c2_3->SetFrameBorderMode(0);
   c2_3->SetFrameBorderMode(0);
   
   TH1D *h_deltaphi_4__264 = new TH1D("h_deltaphi_4__264","#Delta#phi, #Delta#eta (2.400000, 10.000000), Multipliplicity (0, 20)",20,-1.570796,4.712389);
   h_deltaphi_4__264->SetBinContent(1,0.2354212);
   h_deltaphi_4__264->SetBinContent(2,0.2388398);
   h_deltaphi_4__264->SetBinContent(3,0.2467023);
   h_deltaphi_4__264->SetBinContent(4,0.256696);
   h_deltaphi_4__264->SetBinContent(5,0.2641659);
   h_deltaphi_4__264->SetBinContent(6,0.2641659);
   h_deltaphi_4__264->SetBinContent(7,0.256696);
   h_deltaphi_4__264->SetBinContent(8,0.2467023);
   h_deltaphi_4__264->SetBinContent(9,0.2388398);
   h_deltaphi_4__264->SetBinContent(10,0.2354212);
   h_deltaphi_4__264->SetBinContent(11,0.2367589);
   h_deltaphi_4__264->SetBinContent(12,0.2433541);
   h_deltaphi_4__264->SetBinContent(13,0.2545642);
   h_deltaphi_4__264->SetBinContent(14,0.2672476);
   h_deltaphi_4__264->SetBinContent(15,0.2759187);
   h_deltaphi_4__264->SetBinContent(16,0.2759187);
   h_deltaphi_4__264->SetBinContent(17,0.2672476);
   h_deltaphi_4__264->SetBinContent(18,0.2545642);
   h_deltaphi_4__264->SetBinContent(19,0.2433541);
   h_deltaphi_4__264->SetBinContent(20,0.2367589);
   h_deltaphi_4__264->SetBinError(1,0.0001852219);
   h_deltaphi_4__264->SetBinError(2,0.0001888878);
   h_deltaphi_4__264->SetBinError(3,0.0001941334);
   h_deltaphi_4__264->SetBinError(4,0.0002001084);
   h_deltaphi_4__264->SetBinError(5,0.000204009);
   h_deltaphi_4__264->SetBinError(6,0.000204009);
   h_deltaphi_4__264->SetBinError(7,0.0002001084);
   h_deltaphi_4__264->SetBinError(8,0.0001941334);
   h_deltaphi_4__264->SetBinError(9,0.0001888878);
   h_deltaphi_4__264->SetBinError(10,0.0001852219);
   h_deltaphi_4__264->SetBinError(11,0.0001835735);
   h_deltaphi_4__264->SetBinError(12,0.0001839585);
   h_deltaphi_4__264->SetBinError(13,0.0001866338);
   h_deltaphi_4__264->SetBinError(14,0.0001901311);
   h_deltaphi_4__264->SetBinError(15,0.0001924116);
   h_deltaphi_4__264->SetBinError(16,0.0001924116);
   h_deltaphi_4__264->SetBinError(17,0.0001901311);
   h_deltaphi_4__264->SetBinError(18,0.0001866338);
   h_deltaphi_4__264->SetBinError(19,0.0001839585);
   h_deltaphi_4__264->SetBinError(20,0.0001835735);
   h_deltaphi_4__264->SetEntries(3.479893e+07);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("h_deltaphi_4");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries =   3.479893e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  1.593");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.802");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   h_deltaphi_4__264->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h_deltaphi_4__264);

   ci = TColor::GetColor("#000099");
   h_deltaphi_4__264->SetLineColor(ci);
   h_deltaphi_4__264->GetXaxis()->SetTitle("#Delta#phi");
   h_deltaphi_4__264->GetXaxis()->SetLabelFont(42);
   h_deltaphi_4__264->GetXaxis()->SetLabelSize(0.035);
   h_deltaphi_4__264->GetXaxis()->SetTitleSize(0.035);
   h_deltaphi_4__264->GetXaxis()->SetTitleOffset(0);
   h_deltaphi_4__264->GetXaxis()->SetTitleFont(42);
   h_deltaphi_4__264->GetYaxis()->SetTitle("Y(#Delta#phi)");
   h_deltaphi_4__264->GetYaxis()->SetLabelFont(42);
   h_deltaphi_4__264->GetYaxis()->SetLabelSize(0.035);
   h_deltaphi_4__264->GetYaxis()->SetTitleSize(0.035);
   h_deltaphi_4__264->GetYaxis()->SetTitleOffset(0);
   h_deltaphi_4__264->GetYaxis()->SetTitleFont(42);
   h_deltaphi_4__264->GetZaxis()->SetLabelFont(42);
   h_deltaphi_4__264->GetZaxis()->SetLabelSize(0.035);
   h_deltaphi_4__264->GetZaxis()->SetTitleSize(0.035);
   h_deltaphi_4__264->GetZaxis()->SetTitleFont(42);
   h_deltaphi_4__264->Draw("");
   
   pt = new TPaveText(0.15,0.9341304,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("#Delta#phi, #Delta#eta (2.400000, 10.000000), Multipliplicity (0, 20)");
   pt->Draw();
   c2_3->Modified();
   c2->cd();
  
// ------------>Primitives in pad: c2_4
   TPad *c2_4 = new TPad("c2_4", "c2_4",0.51,0.01,0.99,0.49);
   c2_4->Draw();
   c2_4->cd();
   c2_4->Range(-2.356195,0.2275591,5.497787,0.2838901);
   c2_4->SetFillColor(0);
   c2_4->SetBorderMode(0);
   c2_4->SetBorderSize(2);
   c2_4->SetFrameBorderMode(0);
   c2_4->SetFrameBorderMode(0);
   
   TH1D *h_deltaphi_6__265 = new TH1D("h_deltaphi_6__265","#Delta#phi, #Delta#eta (2.600000, 10.000000), Multipliplicity (0, 20)",20,-1.570796,4.712389);
   h_deltaphi_6__265->SetBinContent(1,0.2354212);
   h_deltaphi_6__265->SetBinContent(2,0.2388398);
   h_deltaphi_6__265->SetBinContent(3,0.2467023);
   h_deltaphi_6__265->SetBinContent(4,0.256696);
   h_deltaphi_6__265->SetBinContent(5,0.2641659);
   h_deltaphi_6__265->SetBinContent(6,0.2641659);
   h_deltaphi_6__265->SetBinContent(7,0.256696);
   h_deltaphi_6__265->SetBinContent(8,0.2467023);
   h_deltaphi_6__265->SetBinContent(9,0.2388398);
   h_deltaphi_6__265->SetBinContent(10,0.2354212);
   h_deltaphi_6__265->SetBinContent(11,0.2367589);
   h_deltaphi_6__265->SetBinContent(12,0.2433541);
   h_deltaphi_6__265->SetBinContent(13,0.2545642);
   h_deltaphi_6__265->SetBinContent(14,0.2672476);
   h_deltaphi_6__265->SetBinContent(15,0.2759187);
   h_deltaphi_6__265->SetBinContent(16,0.2759187);
   h_deltaphi_6__265->SetBinContent(17,0.2672476);
   h_deltaphi_6__265->SetBinContent(18,0.2545642);
   h_deltaphi_6__265->SetBinContent(19,0.2433541);
   h_deltaphi_6__265->SetBinContent(20,0.2367589);
   h_deltaphi_6__265->SetBinError(1,0.0001852219);
   h_deltaphi_6__265->SetBinError(2,0.0001888878);
   h_deltaphi_6__265->SetBinError(3,0.0001941334);
   h_deltaphi_6__265->SetBinError(4,0.0002001084);
   h_deltaphi_6__265->SetBinError(5,0.000204009);
   h_deltaphi_6__265->SetBinError(6,0.000204009);
   h_deltaphi_6__265->SetBinError(7,0.0002001084);
   h_deltaphi_6__265->SetBinError(8,0.0001941334);
   h_deltaphi_6__265->SetBinError(9,0.0001888878);
   h_deltaphi_6__265->SetBinError(10,0.0001852219);
   h_deltaphi_6__265->SetBinError(11,0.0001835735);
   h_deltaphi_6__265->SetBinError(12,0.0001839585);
   h_deltaphi_6__265->SetBinError(13,0.0001866338);
   h_deltaphi_6__265->SetBinError(14,0.0001901311);
   h_deltaphi_6__265->SetBinError(15,0.0001924116);
   h_deltaphi_6__265->SetBinError(16,0.0001924116);
   h_deltaphi_6__265->SetBinError(17,0.0001901311);
   h_deltaphi_6__265->SetBinError(18,0.0001866338);
   h_deltaphi_6__265->SetBinError(19,0.0001839585);
   h_deltaphi_6__265->SetBinError(20,0.0001835735);
   h_deltaphi_6__265->SetEntries(3.479893e+07);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("h_deltaphi_6");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries =   3.479893e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  1.593");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.802");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   h_deltaphi_6__265->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h_deltaphi_6__265);

   ci = TColor::GetColor("#000099");
   h_deltaphi_6__265->SetLineColor(ci);
   h_deltaphi_6__265->GetXaxis()->SetTitle("#Delta#phi");
   h_deltaphi_6__265->GetXaxis()->SetLabelFont(42);
   h_deltaphi_6__265->GetXaxis()->SetLabelSize(0.035);
   h_deltaphi_6__265->GetXaxis()->SetTitleSize(0.035);
   h_deltaphi_6__265->GetXaxis()->SetTitleOffset(0);
   h_deltaphi_6__265->GetXaxis()->SetTitleFont(42);
   h_deltaphi_6__265->GetYaxis()->SetTitle("Y(#Delta#phi)");
   h_deltaphi_6__265->GetYaxis()->SetLabelFont(42);
   h_deltaphi_6__265->GetYaxis()->SetLabelSize(0.035);
   h_deltaphi_6__265->GetYaxis()->SetTitleSize(0.035);
   h_deltaphi_6__265->GetYaxis()->SetTitleOffset(0);
   h_deltaphi_6__265->GetYaxis()->SetTitleFont(42);
   h_deltaphi_6__265->GetZaxis()->SetLabelFont(42);
   h_deltaphi_6__265->GetZaxis()->SetLabelSize(0.035);
   h_deltaphi_6__265->GetZaxis()->SetTitleSize(0.035);
   h_deltaphi_6__265->GetZaxis()->SetTitleFont(42);
   h_deltaphi_6__265->Draw("");
   
   pt = new TPaveText(0.15,0.9341304,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("#Delta#phi, #Delta#eta (2.600000, 10.000000), Multipliplicity (0, 20)");
   pt->Draw();
   c2_4->Modified();
   c2->cd();
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
