void LEP_BEAM_longRangeYield1_20_30()
{
//=========Macro generated from canvas: c2/dphi
//=========  (Thu Feb 15 23:04:40 2018) by ROOT version 6.13/01
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
   c2_1->Range(-2.356195,0.1480712,5.497787,12.25269);
   c2_1->SetFillColor(0);
   c2_1->SetBorderMode(0);
   c2_1->SetBorderSize(2);
   c2_1->SetFrameBorderMode(0);
   c2_1->SetFrameBorderMode(0);
   
   TH1D *h_deltaphi_0__153 = new TH1D("h_deltaphi_0__153","#Delta#phi, #Delta#eta (2.000000, 10.000000), Multipliplicity (20, 30)",20,-1.570796,4.712389);
   h_deltaphi_0__153->SetBinContent(1,2.088714);
   h_deltaphi_0__153->SetBinContent(2,1.903637);
   h_deltaphi_0__153->SetBinContent(3,1.812861);
   h_deltaphi_0__153->SetBinContent(4,1.809688);
   h_deltaphi_0__153->SetBinContent(5,1.811059);
   h_deltaphi_0__153->SetBinContent(6,1.811078);
   h_deltaphi_0__153->SetBinContent(7,1.809688);
   h_deltaphi_0__153->SetBinContent(8,1.812861);
   h_deltaphi_0__153->SetBinContent(9,1.903637);
   h_deltaphi_0__153->SetBinContent(10,2.088714);
   h_deltaphi_0__153->SetBinContent(11,2.52094);
   h_deltaphi_0__153->SetBinContent(12,3.341294);
   h_deltaphi_0__153->SetBinContent(13,4.808896);
   h_deltaphi_0__153->SetBinContent(14,7.40948);
   h_deltaphi_0__153->SetBinContent(15,10.55035);
   h_deltaphi_0__153->SetBinContent(16,10.55035);
   h_deltaphi_0__153->SetBinContent(17,7.40948);
   h_deltaphi_0__153->SetBinContent(18,4.808896);
   h_deltaphi_0__153->SetBinContent(19,3.341294);
   h_deltaphi_0__153->SetBinContent(20,2.52094);
   h_deltaphi_0__153->SetBinError(1,0.01324665);
   h_deltaphi_0__153->SetBinError(2,0.01270022);
   h_deltaphi_0__153->SetBinError(3,0.01213885);
   h_deltaphi_0__153->SetBinError(4,0.0119856);
   h_deltaphi_0__153->SetBinError(5,0.01166411);
   h_deltaphi_0__153->SetBinError(6,0.01166411);
   h_deltaphi_0__153->SetBinError(7,0.0119856);
   h_deltaphi_0__153->SetBinError(8,0.01213885);
   h_deltaphi_0__153->SetBinError(9,0.01270022);
   h_deltaphi_0__153->SetBinError(10,0.01324665);
   h_deltaphi_0__153->SetBinError(11,0.01493549);
   h_deltaphi_0__153->SetBinError(12,0.01765139);
   h_deltaphi_0__153->SetBinError(13,0.02159599);
   h_deltaphi_0__153->SetBinError(14,0.02736759);
   h_deltaphi_0__153->SetBinError(15,0.03075031);
   h_deltaphi_0__153->SetBinError(16,0.03075031);
   h_deltaphi_0__153->SetBinError(17,0.02736759);
   h_deltaphi_0__153->SetBinError(18,0.02159599);
   h_deltaphi_0__153->SetBinError(19,0.01765139);
   h_deltaphi_0__153->SetBinError(20,0.01493549);
   h_deltaphi_0__153->SetEntries(837324.9);
   h_deltaphi_0__153->SetStats(0);
   
   TF1 *f157 = new TF1("f1","[0]*(1+2*([1]*cos(1*x)+[2]*cos(2*x)+[3]*cos(3*x)+[4]*cos(4*x)+[5]*cos(5*x)+[6]*cos(6*x)))",-1.570796,4.712389, TF1::EAddToList::kNo);
   f157->SetFillColor(19);
   f157->SetFillStyle(0);
   f157->SetLineColor(2);
   f157->SetLineWidth(2);
   f157->SetChisquare(181.1674);
   f157->SetNDF(13);
   f157->GetXaxis()->SetLabelFont(42);
   f157->GetXaxis()->SetLabelSize(0.035);
   f157->GetXaxis()->SetTitleSize(0.035);
   f157->GetXaxis()->SetTitleFont(42);
   f157->GetYaxis()->SetLabelFont(42);
   f157->GetYaxis()->SetLabelSize(0.035);
   f157->GetYaxis()->SetTitleSize(0.035);
   f157->GetYaxis()->SetTitleOffset(0);
   f157->GetYaxis()->SetTitleFont(42);
   f157->SetParameter(0,3.806201);
   f157->SetParError(0,0.004158538);
   f157->SetParLimits(0,0,0);
   f157->SetParameter(1,-0.4325445);
   f157->SetParError(1,0.0006966289);
   f157->SetParLimits(1,0,0);
   f157->SetParameter(2,0.2549181);
   f157->SetParError(2,0.0007379241);
   f157->SetParLimits(2,0,0);
   f157->SetParameter(3,-0.1289872);
   f157->SetParError(3,0.0007605288);
   f157->SetParLimits(3,0,0);
   f157->SetParameter(4,0.06803099);
   f157->SetParError(4,0.0007614106);
   f157->SetParLimits(4,0,0);
   f157->SetParameter(5,-0.0346208);
   f157->SetParError(5,0.0007439721);
   f157->SetParLimits(5,0,0);
   f157->SetParameter(6,0.01543744);
   f157->SetParError(6,0.0006807445);
   f157->SetParLimits(6,0,0);
   f157->SetParent(h_deltaphi_0__153);
   h_deltaphi_0__153->GetListOfFunctions()->Add(f157);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_deltaphi_0__153->SetLineColor(ci);
   h_deltaphi_0__153->GetXaxis()->SetTitle("#Delta#phi");
   h_deltaphi_0__153->GetXaxis()->SetLabelFont(42);
   h_deltaphi_0__153->GetXaxis()->SetLabelSize(0.035);
   h_deltaphi_0__153->GetXaxis()->SetTitleSize(0.035);
   h_deltaphi_0__153->GetXaxis()->SetTitleOffset(0);
   h_deltaphi_0__153->GetXaxis()->SetTitleFont(42);
   h_deltaphi_0__153->GetYaxis()->SetTitle("Y(#Delta#phi)");
   h_deltaphi_0__153->GetYaxis()->SetLabelFont(42);
   h_deltaphi_0__153->GetYaxis()->SetLabelSize(0.035);
   h_deltaphi_0__153->GetYaxis()->SetTitleSize(0.035);
   h_deltaphi_0__153->GetYaxis()->SetTitleOffset(0);
   h_deltaphi_0__153->GetYaxis()->SetTitleFont(42);
   h_deltaphi_0__153->GetZaxis()->SetLabelFont(42);
   h_deltaphi_0__153->GetZaxis()->SetLabelSize(0.035);
   h_deltaphi_0__153->GetZaxis()->SetTitleSize(0.035);
   h_deltaphi_0__153->GetZaxis()->SetTitleFont(42);
   h_deltaphi_0__153->Draw("");
   
   TPaveText *pt = new TPaveText(0.15,0.9341304,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("#Delta#phi, #Delta#eta (2.000000, 10.000000), Multipliplicity (20, 30)");
   pt->Draw();
   c2_1->Modified();
   c2->cd();
  
// ------------>Primitives in pad: c2_2
   TPad *c2_2 = new TPad("c2_2", "c2_2",0.51,0.51,0.99,0.99);
   c2_2->Draw();
   c2_2->cd();
   c2_2->Range(-2.356195,0.1480712,5.497787,12.25269);
   c2_2->SetFillColor(0);
   c2_2->SetBorderMode(0);
   c2_2->SetBorderSize(2);
   c2_2->SetFrameBorderMode(0);
   c2_2->SetFrameBorderMode(0);
   
   TH1D *h_deltaphi_2__154 = new TH1D("h_deltaphi_2__154","#Delta#phi, #Delta#eta (2.200000, 10.000000), Multipliplicity (20, 30)",20,-1.570796,4.712389);
   h_deltaphi_2__154->SetBinContent(1,2.088714);
   h_deltaphi_2__154->SetBinContent(2,1.903637);
   h_deltaphi_2__154->SetBinContent(3,1.812861);
   h_deltaphi_2__154->SetBinContent(4,1.809688);
   h_deltaphi_2__154->SetBinContent(5,1.811059);
   h_deltaphi_2__154->SetBinContent(6,1.811078);
   h_deltaphi_2__154->SetBinContent(7,1.809688);
   h_deltaphi_2__154->SetBinContent(8,1.812861);
   h_deltaphi_2__154->SetBinContent(9,1.903637);
   h_deltaphi_2__154->SetBinContent(10,2.088714);
   h_deltaphi_2__154->SetBinContent(11,2.52094);
   h_deltaphi_2__154->SetBinContent(12,3.341294);
   h_deltaphi_2__154->SetBinContent(13,4.808896);
   h_deltaphi_2__154->SetBinContent(14,7.40948);
   h_deltaphi_2__154->SetBinContent(15,10.55035);
   h_deltaphi_2__154->SetBinContent(16,10.55035);
   h_deltaphi_2__154->SetBinContent(17,7.40948);
   h_deltaphi_2__154->SetBinContent(18,4.808896);
   h_deltaphi_2__154->SetBinContent(19,3.341294);
   h_deltaphi_2__154->SetBinContent(20,2.52094);
   h_deltaphi_2__154->SetBinError(1,0.01324665);
   h_deltaphi_2__154->SetBinError(2,0.01270022);
   h_deltaphi_2__154->SetBinError(3,0.01213885);
   h_deltaphi_2__154->SetBinError(4,0.0119856);
   h_deltaphi_2__154->SetBinError(5,0.01166411);
   h_deltaphi_2__154->SetBinError(6,0.01166411);
   h_deltaphi_2__154->SetBinError(7,0.0119856);
   h_deltaphi_2__154->SetBinError(8,0.01213885);
   h_deltaphi_2__154->SetBinError(9,0.01270022);
   h_deltaphi_2__154->SetBinError(10,0.01324665);
   h_deltaphi_2__154->SetBinError(11,0.01493549);
   h_deltaphi_2__154->SetBinError(12,0.01765139);
   h_deltaphi_2__154->SetBinError(13,0.02159599);
   h_deltaphi_2__154->SetBinError(14,0.02736759);
   h_deltaphi_2__154->SetBinError(15,0.03075031);
   h_deltaphi_2__154->SetBinError(16,0.03075031);
   h_deltaphi_2__154->SetBinError(17,0.02736759);
   h_deltaphi_2__154->SetBinError(18,0.02159599);
   h_deltaphi_2__154->SetBinError(19,0.01765139);
   h_deltaphi_2__154->SetBinError(20,0.01493549);
   h_deltaphi_2__154->SetEntries(837324.9);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("h_deltaphi_2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 837325 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  2.363");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.555");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   h_deltaphi_2__154->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h_deltaphi_2__154);

   ci = TColor::GetColor("#000099");
   h_deltaphi_2__154->SetLineColor(ci);
   h_deltaphi_2__154->GetXaxis()->SetTitle("#Delta#phi");
   h_deltaphi_2__154->GetXaxis()->SetLabelFont(42);
   h_deltaphi_2__154->GetXaxis()->SetLabelSize(0.035);
   h_deltaphi_2__154->GetXaxis()->SetTitleSize(0.035);
   h_deltaphi_2__154->GetXaxis()->SetTitleOffset(0);
   h_deltaphi_2__154->GetXaxis()->SetTitleFont(42);
   h_deltaphi_2__154->GetYaxis()->SetTitle("Y(#Delta#phi)");
   h_deltaphi_2__154->GetYaxis()->SetLabelFont(42);
   h_deltaphi_2__154->GetYaxis()->SetLabelSize(0.035);
   h_deltaphi_2__154->GetYaxis()->SetTitleSize(0.035);
   h_deltaphi_2__154->GetYaxis()->SetTitleOffset(0);
   h_deltaphi_2__154->GetYaxis()->SetTitleFont(42);
   h_deltaphi_2__154->GetZaxis()->SetLabelFont(42);
   h_deltaphi_2__154->GetZaxis()->SetLabelSize(0.035);
   h_deltaphi_2__154->GetZaxis()->SetTitleSize(0.035);
   h_deltaphi_2__154->GetZaxis()->SetTitleFont(42);
   h_deltaphi_2__154->Draw("");
   
   pt = new TPaveText(0.15,0.9341304,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("#Delta#phi, #Delta#eta (2.200000, 10.000000), Multipliplicity (20, 30)");
   pt->Draw();
   c2_2->Modified();
   c2->cd();
  
// ------------>Primitives in pad: c2_3
   TPad *c2_3 = new TPad("c2_3", "c2_3",0.01,0.01,0.49,0.49);
   c2_3->Draw();
   c2_3->cd();
   c2_3->Range(-2.356195,0.06034634,5.497787,12.8528);
   c2_3->SetFillColor(0);
   c2_3->SetBorderMode(0);
   c2_3->SetBorderSize(2);
   c2_3->SetFrameBorderMode(0);
   c2_3->SetFrameBorderMode(0);
   
   TH1D *h_deltaphi_4__155 = new TH1D("h_deltaphi_4__155","#Delta#phi, #Delta#eta (2.400000, 10.000000), Multipliplicity (20, 30)",20,-1.570796,4.712389);
   h_deltaphi_4__155->SetBinContent(1,2.20955);
   h_deltaphi_4__155->SetBinContent(2,1.994651);
   h_deltaphi_4__155->SetBinContent(3,1.87198);
   h_deltaphi_4__155->SetBinContent(4,1.839527);
   h_deltaphi_4__155->SetBinContent(5,1.817044);
   h_deltaphi_4__155->SetBinContent(6,1.817064);
   h_deltaphi_4__155->SetBinContent(7,1.839527);
   h_deltaphi_4__155->SetBinContent(8,1.87198);
   h_deltaphi_4__155->SetBinContent(9,1.994651);
   h_deltaphi_4__155->SetBinContent(10,2.20955);
   h_deltaphi_4__155->SetBinContent(11,2.686022);
   h_deltaphi_4__155->SetBinContent(12,3.573756);
   h_deltaphi_4__155->SetBinContent(13,5.137751);
   h_deltaphi_4__155->SetBinContent(14,7.868194);
   h_deltaphi_4__155->SetBinContent(15,11.05109);
   h_deltaphi_4__155->SetBinContent(16,11.05109);
   h_deltaphi_4__155->SetBinContent(17,7.868194);
   h_deltaphi_4__155->SetBinContent(18,5.137751);
   h_deltaphi_4__155->SetBinContent(19,3.573756);
   h_deltaphi_4__155->SetBinContent(20,2.686022);
   h_deltaphi_4__155->SetBinError(1,0.01513702);
   h_deltaphi_4__155->SetBinError(2,0.01451239);
   h_deltaphi_4__155->SetBinError(3,0.01387045);
   h_deltaphi_4__155->SetBinError(4,0.01369482);
   h_deltaphi_4__155->SetBinError(5,0.01332691);
   h_deltaphi_4__155->SetBinError(6,0.01332692);
   h_deltaphi_4__155->SetBinError(7,0.01369482);
   h_deltaphi_4__155->SetBinError(8,0.01387045);
   h_deltaphi_4__155->SetBinError(9,0.01451239);
   h_deltaphi_4__155->SetBinError(10,0.01513702);
   h_deltaphi_4__155->SetBinError(11,0.01706714);
   h_deltaphi_4__155->SetBinError(12,0.02017081);
   h_deltaphi_4__155->SetBinError(13,0.02467822);
   h_deltaphi_4__155->SetBinError(14,0.03127265);
   h_deltaphi_4__155->SetBinError(15,0.03513445);
   h_deltaphi_4__155->SetBinError(16,0.03513445);
   h_deltaphi_4__155->SetBinError(17,0.03127265);
   h_deltaphi_4__155->SetBinError(18,0.02467822);
   h_deltaphi_4__155->SetBinError(19,0.02017081);
   h_deltaphi_4__155->SetBinError(20,0.01706714);
   h_deltaphi_4__155->SetEntries(710214.7);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("h_deltaphi_4");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 710215 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  2.378");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.548");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   h_deltaphi_4__155->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h_deltaphi_4__155);

   ci = TColor::GetColor("#000099");
   h_deltaphi_4__155->SetLineColor(ci);
   h_deltaphi_4__155->GetXaxis()->SetTitle("#Delta#phi");
   h_deltaphi_4__155->GetXaxis()->SetLabelFont(42);
   h_deltaphi_4__155->GetXaxis()->SetLabelSize(0.035);
   h_deltaphi_4__155->GetXaxis()->SetTitleSize(0.035);
   h_deltaphi_4__155->GetXaxis()->SetTitleOffset(0);
   h_deltaphi_4__155->GetXaxis()->SetTitleFont(42);
   h_deltaphi_4__155->GetYaxis()->SetTitle("Y(#Delta#phi)");
   h_deltaphi_4__155->GetYaxis()->SetLabelFont(42);
   h_deltaphi_4__155->GetYaxis()->SetLabelSize(0.035);
   h_deltaphi_4__155->GetYaxis()->SetTitleSize(0.035);
   h_deltaphi_4__155->GetYaxis()->SetTitleOffset(0);
   h_deltaphi_4__155->GetYaxis()->SetTitleFont(42);
   h_deltaphi_4__155->GetZaxis()->SetLabelFont(42);
   h_deltaphi_4__155->GetZaxis()->SetLabelSize(0.035);
   h_deltaphi_4__155->GetZaxis()->SetTitleSize(0.035);
   h_deltaphi_4__155->GetZaxis()->SetTitleFont(42);
   h_deltaphi_4__155->Draw("");
   
   pt = new TPaveText(0.15,0.9341304,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("#Delta#phi, #Delta#eta (2.400000, 10.000000), Multipliplicity (20, 30)");
   pt->Draw();
   c2_3->Modified();
   c2->cd();
  
// ------------>Primitives in pad: c2_4
   TPad *c2_4 = new TPad("c2_4", "c2_4",0.51,0.01,0.99,0.49);
   c2_4->Draw();
   c2_4->cd();
   c2_4->Range(-2.356195,0.06034634,5.497787,12.8528);
   c2_4->SetFillColor(0);
   c2_4->SetBorderMode(0);
   c2_4->SetBorderSize(2);
   c2_4->SetFrameBorderMode(0);
   c2_4->SetFrameBorderMode(0);
   
   TH1D *h_deltaphi_6__156 = new TH1D("h_deltaphi_6__156","#Delta#phi, #Delta#eta (2.600000, 10.000000), Multipliplicity (20, 30)",20,-1.570796,4.712389);
   h_deltaphi_6__156->SetBinContent(1,2.20955);
   h_deltaphi_6__156->SetBinContent(2,1.994651);
   h_deltaphi_6__156->SetBinContent(3,1.87198);
   h_deltaphi_6__156->SetBinContent(4,1.839527);
   h_deltaphi_6__156->SetBinContent(5,1.817044);
   h_deltaphi_6__156->SetBinContent(6,1.817064);
   h_deltaphi_6__156->SetBinContent(7,1.839527);
   h_deltaphi_6__156->SetBinContent(8,1.87198);
   h_deltaphi_6__156->SetBinContent(9,1.994651);
   h_deltaphi_6__156->SetBinContent(10,2.20955);
   h_deltaphi_6__156->SetBinContent(11,2.686022);
   h_deltaphi_6__156->SetBinContent(12,3.573756);
   h_deltaphi_6__156->SetBinContent(13,5.137751);
   h_deltaphi_6__156->SetBinContent(14,7.868194);
   h_deltaphi_6__156->SetBinContent(15,11.05109);
   h_deltaphi_6__156->SetBinContent(16,11.05109);
   h_deltaphi_6__156->SetBinContent(17,7.868194);
   h_deltaphi_6__156->SetBinContent(18,5.137751);
   h_deltaphi_6__156->SetBinContent(19,3.573756);
   h_deltaphi_6__156->SetBinContent(20,2.686022);
   h_deltaphi_6__156->SetBinError(1,0.01513702);
   h_deltaphi_6__156->SetBinError(2,0.01451239);
   h_deltaphi_6__156->SetBinError(3,0.01387045);
   h_deltaphi_6__156->SetBinError(4,0.01369482);
   h_deltaphi_6__156->SetBinError(5,0.01332691);
   h_deltaphi_6__156->SetBinError(6,0.01332692);
   h_deltaphi_6__156->SetBinError(7,0.01369482);
   h_deltaphi_6__156->SetBinError(8,0.01387045);
   h_deltaphi_6__156->SetBinError(9,0.01451239);
   h_deltaphi_6__156->SetBinError(10,0.01513702);
   h_deltaphi_6__156->SetBinError(11,0.01706714);
   h_deltaphi_6__156->SetBinError(12,0.02017081);
   h_deltaphi_6__156->SetBinError(13,0.02467822);
   h_deltaphi_6__156->SetBinError(14,0.03127265);
   h_deltaphi_6__156->SetBinError(15,0.03513445);
   h_deltaphi_6__156->SetBinError(16,0.03513445);
   h_deltaphi_6__156->SetBinError(17,0.03127265);
   h_deltaphi_6__156->SetBinError(18,0.02467822);
   h_deltaphi_6__156->SetBinError(19,0.02017081);
   h_deltaphi_6__156->SetBinError(20,0.01706714);
   h_deltaphi_6__156->SetEntries(710214.7);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("h_deltaphi_6");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 710215 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  2.378");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.548");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   h_deltaphi_6__156->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h_deltaphi_6__156);

   ci = TColor::GetColor("#000099");
   h_deltaphi_6__156->SetLineColor(ci);
   h_deltaphi_6__156->GetXaxis()->SetTitle("#Delta#phi");
   h_deltaphi_6__156->GetXaxis()->SetLabelFont(42);
   h_deltaphi_6__156->GetXaxis()->SetLabelSize(0.035);
   h_deltaphi_6__156->GetXaxis()->SetTitleSize(0.035);
   h_deltaphi_6__156->GetXaxis()->SetTitleOffset(0);
   h_deltaphi_6__156->GetXaxis()->SetTitleFont(42);
   h_deltaphi_6__156->GetYaxis()->SetTitle("Y(#Delta#phi)");
   h_deltaphi_6__156->GetYaxis()->SetLabelFont(42);
   h_deltaphi_6__156->GetYaxis()->SetLabelSize(0.035);
   h_deltaphi_6__156->GetYaxis()->SetTitleSize(0.035);
   h_deltaphi_6__156->GetYaxis()->SetTitleOffset(0);
   h_deltaphi_6__156->GetYaxis()->SetTitleFont(42);
   h_deltaphi_6__156->GetZaxis()->SetLabelFont(42);
   h_deltaphi_6__156->GetZaxis()->SetLabelSize(0.035);
   h_deltaphi_6__156->GetZaxis()->SetTitleSize(0.035);
   h_deltaphi_6__156->GetZaxis()->SetTitleFont(42);
   h_deltaphi_6__156->Draw("");
   
   pt = new TPaveText(0.15,0.9341304,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("#Delta#phi, #Delta#eta (2.600000, 10.000000), Multipliplicity (20, 30)");
   pt->Draw();
   c2_4->Modified();
   c2->cd();
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
