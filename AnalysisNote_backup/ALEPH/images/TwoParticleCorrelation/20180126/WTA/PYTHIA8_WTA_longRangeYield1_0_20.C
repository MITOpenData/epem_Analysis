void PYTHIA8_WTA_longRangeYield1_0_20()
{
//=========Macro generated from canvas: c2/dphi
//=========  (Thu Feb 15 23:10:16 2018) by ROOT version 6.13/01
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
   c2_1->Range(-2.356195,0.2312262,5.497787,0.3120364);
   c2_1->SetFillColor(0);
   c2_1->SetBorderMode(0);
   c2_1->SetBorderSize(2);
   c2_1->SetFrameBorderMode(0);
   c2_1->SetFrameBorderMode(0);
   
   TH1D *h_deltaphi_0__451 = new TH1D("h_deltaphi_0__451","#Delta#phi, #Delta#eta (2.000000, 10.000000), Multipliplicity (0, 20)",20,-1.570796,4.712389);
   h_deltaphi_0__451->SetBinContent(1,0.2442336);
   h_deltaphi_0__451->SetBinContent(2,0.2423398);
   h_deltaphi_0__451->SetBinContent(3,0.2430689);
   h_deltaphi_0__451->SetBinContent(4,0.245032);
   h_deltaphi_0__451->SetBinContent(5,0.2465721);
   h_deltaphi_0__451->SetBinContent(6,0.2465829);
   h_deltaphi_0__451->SetBinContent(7,0.245032);
   h_deltaphi_0__451->SetBinContent(8,0.2430689);
   h_deltaphi_0__451->SetBinContent(9,0.2423398);
   h_deltaphi_0__451->SetBinContent(10,0.2442336);
   h_deltaphi_0__451->SetBinContent(11,0.24994);
   h_deltaphi_0__451->SetBinContent(12,0.2593654);
   h_deltaphi_0__451->SetBinContent(13,0.272981);
   h_deltaphi_0__451->SetBinContent(14,0.2889084);
   h_deltaphi_0__451->SetBinContent(15,0.3007709);
   h_deltaphi_0__451->SetBinContent(16,0.3007709);
   h_deltaphi_0__451->SetBinContent(17,0.2889084);
   h_deltaphi_0__451->SetBinContent(18,0.272981);
   h_deltaphi_0__451->SetBinContent(19,0.2593654);
   h_deltaphi_0__451->SetBinContent(20,0.24994);
   h_deltaphi_0__451->SetBinError(1,0.000100104);
   h_deltaphi_0__451->SetBinError(2,0.0001006522);
   h_deltaphi_0__451->SetBinError(3,0.0001019157);
   h_deltaphi_0__451->SetBinError(4,0.0001029444);
   h_deltaphi_0__451->SetBinError(5,0.0001037418);
   h_deltaphi_0__451->SetBinError(6,0.0001037572);
   h_deltaphi_0__451->SetBinError(7,0.0001029444);
   h_deltaphi_0__451->SetBinError(8,0.0001019157);
   h_deltaphi_0__451->SetBinError(9,0.0001006522);
   h_deltaphi_0__451->SetBinError(10,0.000100104);
   h_deltaphi_0__451->SetBinError(11,0.0001001669);
   h_deltaphi_0__451->SetBinError(12,0.0001009247);
   h_deltaphi_0__451->SetBinError(13,0.0001024279);
   h_deltaphi_0__451->SetBinError(14,0.000104501);
   h_deltaphi_0__451->SetBinError(15,0.000106056);
   h_deltaphi_0__451->SetBinError(16,0.000106056);
   h_deltaphi_0__451->SetBinError(17,0.000104501);
   h_deltaphi_0__451->SetBinError(18,0.0001024279);
   h_deltaphi_0__451->SetBinError(19,0.0001009247);
   h_deltaphi_0__451->SetBinError(20,0.0001001669);
   h_deltaphi_0__451->SetEntries(1.283612e+08);
   h_deltaphi_0__451->SetStats(0);
   
   TF1 *f1169 = new TF1("f1","[0]*(1+2*([1]*cos(1*x)+[2]*cos(2*x)+[3]*cos(3*x)+[4]*cos(4*x)+[5]*cos(5*x)+[6]*cos(6*x)))",-1.570796,4.712389, TF1::EAddToList::kNo);
   f1169->SetFillColor(19);
   f1169->SetFillStyle(0);
   f1169->SetLineColor(2);
   f1169->SetLineWidth(2);
   f1169->SetChisquare(1.279584);
   f1169->SetNDF(13);
   f1169->GetXaxis()->SetLabelFont(42);
   f1169->GetXaxis()->SetLabelSize(0.035);
   f1169->GetXaxis()->SetTitleSize(0.035);
   f1169->GetXaxis()->SetTitleFont(42);
   f1169->GetYaxis()->SetLabelFont(42);
   f1169->GetYaxis()->SetLabelSize(0.035);
   f1169->GetYaxis()->SetTitleSize(0.035);
   f1169->GetYaxis()->SetTitleOffset(0);
   f1169->GetYaxis()->SetTitleFont(42);
   f1169->SetParameter(0,0.2593217);
   f1169->SetParError(0,2.288875e-05);
   f1169->SetParLimits(0,0,0);
   f1169->SetParameter(1,-0.04719751);
   f1169->SetParError(1,6.326131e-05);
   f1169->SetParLimits(1,0,0);
   f1169->SetParameter(2,0.02680825);
   f1169->SetParError(2,6.244222e-05);
   f1169->SetParLimits(2,0,0);
   f1169->SetParameter(3,-0.00562725);
   f1169->SetParError(3,6.241386e-05);
   f1169->SetParLimits(3,0,0);
   f1169->SetParameter(4,0.002516872);
   f1169->SetParError(4,6.242084e-05);
   f1169->SetParLimits(4,0,0);
   f1169->SetParameter(5,-0.0008552147);
   f1169->SetParError(5,6.239322e-05);
   f1169->SetParLimits(5,0,0);
   f1169->SetParameter(6,0.0002300004);
   f1169->SetParError(6,6.238136e-05);
   f1169->SetParLimits(6,0,0);
   f1169->SetParent(h_deltaphi_0__451);
   h_deltaphi_0__451->GetListOfFunctions()->Add(f1169);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_deltaphi_0__451->SetLineColor(ci);
   h_deltaphi_0__451->GetXaxis()->SetTitle("#Delta#phi");
   h_deltaphi_0__451->GetXaxis()->SetLabelFont(42);
   h_deltaphi_0__451->GetXaxis()->SetLabelSize(0.035);
   h_deltaphi_0__451->GetXaxis()->SetTitleSize(0.035);
   h_deltaphi_0__451->GetXaxis()->SetTitleOffset(0);
   h_deltaphi_0__451->GetXaxis()->SetTitleFont(42);
   h_deltaphi_0__451->GetYaxis()->SetTitle("Y(#Delta#phi)");
   h_deltaphi_0__451->GetYaxis()->SetLabelFont(42);
   h_deltaphi_0__451->GetYaxis()->SetLabelSize(0.035);
   h_deltaphi_0__451->GetYaxis()->SetTitleSize(0.035);
   h_deltaphi_0__451->GetYaxis()->SetTitleOffset(0);
   h_deltaphi_0__451->GetYaxis()->SetTitleFont(42);
   h_deltaphi_0__451->GetZaxis()->SetLabelFont(42);
   h_deltaphi_0__451->GetZaxis()->SetLabelSize(0.035);
   h_deltaphi_0__451->GetZaxis()->SetTitleSize(0.035);
   h_deltaphi_0__451->GetZaxis()->SetTitleFont(42);
   h_deltaphi_0__451->Draw("");
   
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
   c2_2->Range(-2.356195,0.2312262,5.497787,0.3120364);
   c2_2->SetFillColor(0);
   c2_2->SetBorderMode(0);
   c2_2->SetBorderSize(2);
   c2_2->SetFrameBorderMode(0);
   c2_2->SetFrameBorderMode(0);
   
   TH1D *h_deltaphi_2__452 = new TH1D("h_deltaphi_2__452","#Delta#phi, #Delta#eta (2.200000, 10.000000), Multipliplicity (0, 20)",20,-1.570796,4.712389);
   h_deltaphi_2__452->SetBinContent(1,0.2442336);
   h_deltaphi_2__452->SetBinContent(2,0.2423398);
   h_deltaphi_2__452->SetBinContent(3,0.2430689);
   h_deltaphi_2__452->SetBinContent(4,0.245032);
   h_deltaphi_2__452->SetBinContent(5,0.2465721);
   h_deltaphi_2__452->SetBinContent(6,0.2465829);
   h_deltaphi_2__452->SetBinContent(7,0.245032);
   h_deltaphi_2__452->SetBinContent(8,0.2430689);
   h_deltaphi_2__452->SetBinContent(9,0.2423398);
   h_deltaphi_2__452->SetBinContent(10,0.2442336);
   h_deltaphi_2__452->SetBinContent(11,0.24994);
   h_deltaphi_2__452->SetBinContent(12,0.2593654);
   h_deltaphi_2__452->SetBinContent(13,0.272981);
   h_deltaphi_2__452->SetBinContent(14,0.2889084);
   h_deltaphi_2__452->SetBinContent(15,0.3007709);
   h_deltaphi_2__452->SetBinContent(16,0.3007709);
   h_deltaphi_2__452->SetBinContent(17,0.2889084);
   h_deltaphi_2__452->SetBinContent(18,0.272981);
   h_deltaphi_2__452->SetBinContent(19,0.2593654);
   h_deltaphi_2__452->SetBinContent(20,0.24994);
   h_deltaphi_2__452->SetBinError(1,0.000100104);
   h_deltaphi_2__452->SetBinError(2,0.0001006522);
   h_deltaphi_2__452->SetBinError(3,0.0001019157);
   h_deltaphi_2__452->SetBinError(4,0.0001029444);
   h_deltaphi_2__452->SetBinError(5,0.0001037418);
   h_deltaphi_2__452->SetBinError(6,0.0001037572);
   h_deltaphi_2__452->SetBinError(7,0.0001029444);
   h_deltaphi_2__452->SetBinError(8,0.0001019157);
   h_deltaphi_2__452->SetBinError(9,0.0001006522);
   h_deltaphi_2__452->SetBinError(10,0.000100104);
   h_deltaphi_2__452->SetBinError(11,0.0001001669);
   h_deltaphi_2__452->SetBinError(12,0.0001009247);
   h_deltaphi_2__452->SetBinError(13,0.0001024279);
   h_deltaphi_2__452->SetBinError(14,0.000104501);
   h_deltaphi_2__452->SetBinError(15,0.000106056);
   h_deltaphi_2__452->SetBinError(16,0.000106056);
   h_deltaphi_2__452->SetBinError(17,0.000104501);
   h_deltaphi_2__452->SetBinError(18,0.0001024279);
   h_deltaphi_2__452->SetBinError(19,0.0001009247);
   h_deltaphi_2__452->SetBinError(20,0.0001001669);
   h_deltaphi_2__452->SetEntries(1.283612e+08);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("h_deltaphi_2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries =   1.283612e+08");
   ptstats_LaTex = ptstats->AddText("Mean  =  1.662");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.802");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   h_deltaphi_2__452->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h_deltaphi_2__452);

   ci = TColor::GetColor("#000099");
   h_deltaphi_2__452->SetLineColor(ci);
   h_deltaphi_2__452->GetXaxis()->SetTitle("#Delta#phi");
   h_deltaphi_2__452->GetXaxis()->SetLabelFont(42);
   h_deltaphi_2__452->GetXaxis()->SetLabelSize(0.035);
   h_deltaphi_2__452->GetXaxis()->SetTitleSize(0.035);
   h_deltaphi_2__452->GetXaxis()->SetTitleOffset(0);
   h_deltaphi_2__452->GetXaxis()->SetTitleFont(42);
   h_deltaphi_2__452->GetYaxis()->SetTitle("Y(#Delta#phi)");
   h_deltaphi_2__452->GetYaxis()->SetLabelFont(42);
   h_deltaphi_2__452->GetYaxis()->SetLabelSize(0.035);
   h_deltaphi_2__452->GetYaxis()->SetTitleSize(0.035);
   h_deltaphi_2__452->GetYaxis()->SetTitleOffset(0);
   h_deltaphi_2__452->GetYaxis()->SetTitleFont(42);
   h_deltaphi_2__452->GetZaxis()->SetLabelFont(42);
   h_deltaphi_2__452->GetZaxis()->SetLabelSize(0.035);
   h_deltaphi_2__452->GetZaxis()->SetTitleSize(0.035);
   h_deltaphi_2__452->GetZaxis()->SetTitleFont(42);
   h_deltaphi_2__452->Draw("");
   
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
   c2_3->Range(-2.356195,0.2391577,5.497787,0.2877499);
   c2_3->SetFillColor(0);
   c2_3->SetBorderMode(0);
   c2_3->SetBorderSize(2);
   c2_3->SetFrameBorderMode(0);
   c2_3->SetFrameBorderMode(0);
   
   TH1D *h_deltaphi_4__453 = new TH1D("h_deltaphi_4__453","#Delta#phi, #Delta#eta (2.400000, 10.000000), Multipliplicity (0, 20)",20,-1.570796,4.712389);
   h_deltaphi_4__453->SetBinContent(1,0.2461826);
   h_deltaphi_4__453->SetBinContent(2,0.2458926);
   h_deltaphi_4__453->SetBinContent(3,0.2478067);
   h_deltaphi_4__453->SetBinContent(4,0.2505544);
   h_deltaphi_4__453->SetBinContent(5,0.2524319);
   h_deltaphi_4__453->SetBinContent(6,0.2524442);
   h_deltaphi_4__453->SetBinContent(7,0.2505544);
   h_deltaphi_4__453->SetBinContent(8,0.2478067);
   h_deltaphi_4__453->SetBinContent(9,0.2458926);
   h_deltaphi_4__453->SetBinContent(10,0.2461826);
   h_deltaphi_4__453->SetBinContent(11,0.2495929);
   h_deltaphi_4__453->SetBinContent(12,0.2555726);
   h_deltaphi_4__453->SetBinContent(13,0.2643165);
   h_deltaphi_4__453->SetBinContent(14,0.2742014);
   h_deltaphi_4__453->SetBinContent(15,0.2809241);
   h_deltaphi_4__453->SetBinContent(16,0.2809241);
   h_deltaphi_4__453->SetBinContent(17,0.2742014);
   h_deltaphi_4__453->SetBinContent(18,0.2643165);
   h_deltaphi_4__453->SetBinContent(19,0.2555726);
   h_deltaphi_4__453->SetBinContent(20,0.2495929);
   h_deltaphi_4__453->SetBinError(1,0.0001118831);
   h_deltaphi_4__453->SetBinError(2,0.000112713);
   h_deltaphi_4__453->SetBinError(3,0.0001142894);
   h_deltaphi_4__453->SetBinError(4,0.0001155376);
   h_deltaphi_4__453->SetBinError(5,0.0001164758);
   h_deltaphi_4__453->SetBinError(6,0.0001164937);
   h_deltaphi_4__453->SetBinError(7,0.0001155376);
   h_deltaphi_4__453->SetBinError(8,0.0001142894);
   h_deltaphi_4__453->SetBinError(9,0.000112713);
   h_deltaphi_4__453->SetBinError(10,0.0001118831);
   h_deltaphi_4__453->SetBinError(11,0.0001116391);
   h_deltaphi_4__453->SetBinError(12,0.000112014);
   h_deltaphi_4__453->SetBinError(13,0.0001130075);
   h_deltaphi_4__453->SetBinError(14,0.0001144565);
   h_deltaphi_4__453->SetBinError(15,0.0001154248);
   h_deltaphi_4__453->SetBinError(16,0.0001154248);
   h_deltaphi_4__453->SetBinError(17,0.0001144565);
   h_deltaphi_4__453->SetBinError(18,0.0001130075);
   h_deltaphi_4__453->SetBinError(19,0.000112014);
   h_deltaphi_4__453->SetBinError(20,0.0001116391);
   h_deltaphi_4__453->SetEntries(1.018803e+08);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("h_deltaphi_4");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries =   1.018803e+08");
   ptstats_LaTex = ptstats->AddText("Mean  =  1.621");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.806");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   h_deltaphi_4__453->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h_deltaphi_4__453);

   ci = TColor::GetColor("#000099");
   h_deltaphi_4__453->SetLineColor(ci);
   h_deltaphi_4__453->GetXaxis()->SetTitle("#Delta#phi");
   h_deltaphi_4__453->GetXaxis()->SetLabelFont(42);
   h_deltaphi_4__453->GetXaxis()->SetLabelSize(0.035);
   h_deltaphi_4__453->GetXaxis()->SetTitleSize(0.035);
   h_deltaphi_4__453->GetXaxis()->SetTitleOffset(0);
   h_deltaphi_4__453->GetXaxis()->SetTitleFont(42);
   h_deltaphi_4__453->GetYaxis()->SetTitle("Y(#Delta#phi)");
   h_deltaphi_4__453->GetYaxis()->SetLabelFont(42);
   h_deltaphi_4__453->GetYaxis()->SetLabelSize(0.035);
   h_deltaphi_4__453->GetYaxis()->SetTitleSize(0.035);
   h_deltaphi_4__453->GetYaxis()->SetTitleOffset(0);
   h_deltaphi_4__453->GetYaxis()->SetTitleFont(42);
   h_deltaphi_4__453->GetZaxis()->SetLabelFont(42);
   h_deltaphi_4__453->GetZaxis()->SetLabelSize(0.035);
   h_deltaphi_4__453->GetZaxis()->SetTitleSize(0.035);
   h_deltaphi_4__453->GetZaxis()->SetTitleFont(42);
   h_deltaphi_4__453->Draw("");
   
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
   c2_4->Range(-2.356195,0.2391577,5.497787,0.2877499);
   c2_4->SetFillColor(0);
   c2_4->SetBorderMode(0);
   c2_4->SetBorderSize(2);
   c2_4->SetFrameBorderMode(0);
   c2_4->SetFrameBorderMode(0);
   
   TH1D *h_deltaphi_6__454 = new TH1D("h_deltaphi_6__454","#Delta#phi, #Delta#eta (2.600000, 10.000000), Multipliplicity (0, 20)",20,-1.570796,4.712389);
   h_deltaphi_6__454->SetBinContent(1,0.2461826);
   h_deltaphi_6__454->SetBinContent(2,0.2458926);
   h_deltaphi_6__454->SetBinContent(3,0.2478067);
   h_deltaphi_6__454->SetBinContent(4,0.2505544);
   h_deltaphi_6__454->SetBinContent(5,0.2524319);
   h_deltaphi_6__454->SetBinContent(6,0.2524442);
   h_deltaphi_6__454->SetBinContent(7,0.2505544);
   h_deltaphi_6__454->SetBinContent(8,0.2478067);
   h_deltaphi_6__454->SetBinContent(9,0.2458926);
   h_deltaphi_6__454->SetBinContent(10,0.2461826);
   h_deltaphi_6__454->SetBinContent(11,0.2495929);
   h_deltaphi_6__454->SetBinContent(12,0.2555726);
   h_deltaphi_6__454->SetBinContent(13,0.2643165);
   h_deltaphi_6__454->SetBinContent(14,0.2742014);
   h_deltaphi_6__454->SetBinContent(15,0.2809241);
   h_deltaphi_6__454->SetBinContent(16,0.2809241);
   h_deltaphi_6__454->SetBinContent(17,0.2742014);
   h_deltaphi_6__454->SetBinContent(18,0.2643165);
   h_deltaphi_6__454->SetBinContent(19,0.2555726);
   h_deltaphi_6__454->SetBinContent(20,0.2495929);
   h_deltaphi_6__454->SetBinError(1,0.0001118831);
   h_deltaphi_6__454->SetBinError(2,0.000112713);
   h_deltaphi_6__454->SetBinError(3,0.0001142894);
   h_deltaphi_6__454->SetBinError(4,0.0001155376);
   h_deltaphi_6__454->SetBinError(5,0.0001164758);
   h_deltaphi_6__454->SetBinError(6,0.0001164937);
   h_deltaphi_6__454->SetBinError(7,0.0001155376);
   h_deltaphi_6__454->SetBinError(8,0.0001142894);
   h_deltaphi_6__454->SetBinError(9,0.000112713);
   h_deltaphi_6__454->SetBinError(10,0.0001118831);
   h_deltaphi_6__454->SetBinError(11,0.0001116391);
   h_deltaphi_6__454->SetBinError(12,0.000112014);
   h_deltaphi_6__454->SetBinError(13,0.0001130075);
   h_deltaphi_6__454->SetBinError(14,0.0001144565);
   h_deltaphi_6__454->SetBinError(15,0.0001154248);
   h_deltaphi_6__454->SetBinError(16,0.0001154248);
   h_deltaphi_6__454->SetBinError(17,0.0001144565);
   h_deltaphi_6__454->SetBinError(18,0.0001130075);
   h_deltaphi_6__454->SetBinError(19,0.000112014);
   h_deltaphi_6__454->SetBinError(20,0.0001116391);
   h_deltaphi_6__454->SetEntries(1.018803e+08);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("h_deltaphi_6");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries =   1.018803e+08");
   ptstats_LaTex = ptstats->AddText("Mean  =  1.621");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.806");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   h_deltaphi_6__454->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h_deltaphi_6__454);

   ci = TColor::GetColor("#000099");
   h_deltaphi_6__454->SetLineColor(ci);
   h_deltaphi_6__454->GetXaxis()->SetTitle("#Delta#phi");
   h_deltaphi_6__454->GetXaxis()->SetLabelFont(42);
   h_deltaphi_6__454->GetXaxis()->SetLabelSize(0.035);
   h_deltaphi_6__454->GetXaxis()->SetTitleSize(0.035);
   h_deltaphi_6__454->GetXaxis()->SetTitleOffset(0);
   h_deltaphi_6__454->GetXaxis()->SetTitleFont(42);
   h_deltaphi_6__454->GetYaxis()->SetTitle("Y(#Delta#phi)");
   h_deltaphi_6__454->GetYaxis()->SetLabelFont(42);
   h_deltaphi_6__454->GetYaxis()->SetLabelSize(0.035);
   h_deltaphi_6__454->GetYaxis()->SetTitleSize(0.035);
   h_deltaphi_6__454->GetYaxis()->SetTitleOffset(0);
   h_deltaphi_6__454->GetYaxis()->SetTitleFont(42);
   h_deltaphi_6__454->GetZaxis()->SetLabelFont(42);
   h_deltaphi_6__454->GetZaxis()->SetLabelSize(0.035);
   h_deltaphi_6__454->GetZaxis()->SetTitleSize(0.035);
   h_deltaphi_6__454->GetZaxis()->SetTitleFont(42);
   h_deltaphi_6__454->Draw("");
   
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
