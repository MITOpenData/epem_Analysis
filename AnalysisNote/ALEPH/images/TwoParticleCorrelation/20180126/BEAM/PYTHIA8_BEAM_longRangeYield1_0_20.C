void PYTHIA8_BEAM_longRangeYield1_0_20()
{
//=========Macro generated from canvas: c2/dphi
//=========  (Thu Feb 15 23:05:02 2018) by ROOT version 6.13/01
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
   c2_1->Range(-2.356195,-0.5682788,5.497787,5.938931);
   c2_1->SetFillColor(0);
   c2_1->SetBorderMode(0);
   c2_1->SetBorderSize(2);
   c2_1->SetFrameBorderMode(0);
   c2_1->SetFrameBorderMode(0);
   
   TH1D *h_deltaphi_0__199 = new TH1D("h_deltaphi_0__199","#Delta#phi, #Delta#eta (2.000000, 10.000000), Multipliplicity (0, 20)",20,-1.570796,4.712389);
   h_deltaphi_0__199->SetBinContent(1,0.4073026);
   h_deltaphi_0__199->SetBinContent(2,0.3485866);
   h_deltaphi_0__199->SetBinContent(3,0.3232834);
   h_deltaphi_0__199->SetBinContent(4,0.318799);
   h_deltaphi_0__199->SetBinContent(5,0.3217591);
   h_deltaphi_0__199->SetBinContent(6,0.321759);
   h_deltaphi_0__199->SetBinContent(7,0.318799);
   h_deltaphi_0__199->SetBinContent(8,0.3232834);
   h_deltaphi_0__199->SetBinContent(9,0.3485866);
   h_deltaphi_0__199->SetBinContent(10,0.4073026);
   h_deltaphi_0__199->SetBinContent(11,0.5278151);
   h_deltaphi_0__199->SetBinContent(12,0.7726189);
   h_deltaphi_0__199->SetBinContent(13,1.293418);
   h_deltaphi_0__199->SetBinContent(14,2.482303);
   h_deltaphi_0__199->SetBinContent(15,5.037088);
   h_deltaphi_0__199->SetBinContent(16,5.037088);
   h_deltaphi_0__199->SetBinContent(17,2.482303);
   h_deltaphi_0__199->SetBinContent(18,1.293418);
   h_deltaphi_0__199->SetBinContent(19,0.7726189);
   h_deltaphi_0__199->SetBinContent(20,0.5278151);
   h_deltaphi_0__199->SetBinError(1,0.0003700739);
   h_deltaphi_0__199->SetBinError(2,0.0003169583);
   h_deltaphi_0__199->SetBinError(3,0.0002849123);
   h_deltaphi_0__199->SetBinError(4,0.0002675443);
   h_deltaphi_0__199->SetBinError(5,0.0002614599);
   h_deltaphi_0__199->SetBinError(6,0.0002614599);
   h_deltaphi_0__199->SetBinError(7,0.0002675443);
   h_deltaphi_0__199->SetBinError(8,0.0002849123);
   h_deltaphi_0__199->SetBinError(9,0.0003169583);
   h_deltaphi_0__199->SetBinError(10,0.0003700739);
   h_deltaphi_0__199->SetBinError(11,0.0004638258);
   h_deltaphi_0__199->SetBinError(12,0.0006381819);
   h_deltaphi_0__199->SetBinError(13,0.0009950604);
   h_deltaphi_0__199->SetBinError(14,0.001767108);
   h_deltaphi_0__199->SetBinError(15,0.003228144);
   h_deltaphi_0__199->SetBinError(16,0.003228144);
   h_deltaphi_0__199->SetBinError(17,0.001767108);
   h_deltaphi_0__199->SetBinError(18,0.0009950604);
   h_deltaphi_0__199->SetBinError(19,0.0006381819);
   h_deltaphi_0__199->SetBinError(20,0.0004638258);
   h_deltaphi_0__199->SetEntries(1.793432e+07);
   h_deltaphi_0__199->SetStats(0);
   
   TF1 *f173 = new TF1("f1","[0]*(1+2*([1]*cos(1*x)+[2]*cos(2*x)+[3]*cos(3*x)+[4]*cos(4*x)+[5]*cos(5*x)+[6]*cos(6*x)))",-1.570796,4.712389, TF1::EAddToList::kNo);
   f173->SetFillColor(19);
   f173->SetFillStyle(0);
   f173->SetLineColor(2);
   f173->SetLineWidth(2);
   f173->SetChisquare(150161.5);
   f173->SetNDF(13);
   f173->GetXaxis()->SetLabelFont(42);
   f173->GetXaxis()->SetLabelSize(0.035);
   f173->GetXaxis()->SetTitleSize(0.035);
   f173->GetXaxis()->SetTitleFont(42);
   f173->GetYaxis()->SetLabelFont(42);
   f173->GetYaxis()->SetLabelSize(0.035);
   f173->GetYaxis()->SetTitleSize(0.035);
   f173->GetYaxis()->SetTitleOffset(0);
   f173->GetYaxis()->SetTitleFont(42);
   f173->SetParameter(0,1.156909);
   f173->SetParError(0,0.0002709896);
   f173->SetParLimits(0,0,0);
   f173->SetParameter(1,-0.6228865);
   f173->SetParError(1,9.05543e-05);
   f173->SetParLimits(1,0,0);
   f173->SetParameter(2,0.4220173);
   f173->SetParError(2,0.0001200348);
   f173->SetParLimits(2,0,0);
   f173->SetParameter(3,-0.2599645);
   f173->SetParError(3,0.0001338161);
   f173->SetParLimits(3,0,0);
   f173->SetParameter(4,0.1563706);
   f173->SetParError(4,0.0001305954);
   f173->SetParLimits(4,0,0);
   f173->SetParameter(5,-0.08264316);
   f173->SetParError(5,0.0001125119);
   f173->SetParLimits(5,0,0);
   f173->SetParameter(6,0.0324499);
   f173->SetParError(6,7.776901e-05);
   f173->SetParLimits(6,0,0);
   f173->SetParent(h_deltaphi_0__199);
   h_deltaphi_0__199->GetListOfFunctions()->Add(f173);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_deltaphi_0__199->SetLineColor(ci);
   h_deltaphi_0__199->GetXaxis()->SetTitle("#Delta#phi");
   h_deltaphi_0__199->GetXaxis()->SetLabelFont(42);
   h_deltaphi_0__199->GetXaxis()->SetLabelSize(0.035);
   h_deltaphi_0__199->GetXaxis()->SetTitleSize(0.035);
   h_deltaphi_0__199->GetXaxis()->SetTitleOffset(0);
   h_deltaphi_0__199->GetXaxis()->SetTitleFont(42);
   h_deltaphi_0__199->GetYaxis()->SetTitle("Y(#Delta#phi)");
   h_deltaphi_0__199->GetYaxis()->SetLabelFont(42);
   h_deltaphi_0__199->GetYaxis()->SetLabelSize(0.035);
   h_deltaphi_0__199->GetYaxis()->SetTitleSize(0.035);
   h_deltaphi_0__199->GetYaxis()->SetTitleOffset(0);
   h_deltaphi_0__199->GetYaxis()->SetTitleFont(42);
   h_deltaphi_0__199->GetZaxis()->SetLabelFont(42);
   h_deltaphi_0__199->GetZaxis()->SetLabelSize(0.035);
   h_deltaphi_0__199->GetZaxis()->SetTitleSize(0.035);
   h_deltaphi_0__199->GetZaxis()->SetTitleFont(42);
   h_deltaphi_0__199->Draw("");
   
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
   c2_2->Range(-2.356195,-0.5682788,5.497787,5.938931);
   c2_2->SetFillColor(0);
   c2_2->SetBorderMode(0);
   c2_2->SetBorderSize(2);
   c2_2->SetFrameBorderMode(0);
   c2_2->SetFrameBorderMode(0);
   
   TH1D *h_deltaphi_2__200 = new TH1D("h_deltaphi_2__200","#Delta#phi, #Delta#eta (2.200000, 10.000000), Multipliplicity (0, 20)",20,-1.570796,4.712389);
   h_deltaphi_2__200->SetBinContent(1,0.4073026);
   h_deltaphi_2__200->SetBinContent(2,0.3485866);
   h_deltaphi_2__200->SetBinContent(3,0.3232834);
   h_deltaphi_2__200->SetBinContent(4,0.318799);
   h_deltaphi_2__200->SetBinContent(5,0.3217591);
   h_deltaphi_2__200->SetBinContent(6,0.321759);
   h_deltaphi_2__200->SetBinContent(7,0.318799);
   h_deltaphi_2__200->SetBinContent(8,0.3232834);
   h_deltaphi_2__200->SetBinContent(9,0.3485866);
   h_deltaphi_2__200->SetBinContent(10,0.4073026);
   h_deltaphi_2__200->SetBinContent(11,0.5278151);
   h_deltaphi_2__200->SetBinContent(12,0.7726189);
   h_deltaphi_2__200->SetBinContent(13,1.293418);
   h_deltaphi_2__200->SetBinContent(14,2.482303);
   h_deltaphi_2__200->SetBinContent(15,5.037088);
   h_deltaphi_2__200->SetBinContent(16,5.037088);
   h_deltaphi_2__200->SetBinContent(17,2.482303);
   h_deltaphi_2__200->SetBinContent(18,1.293418);
   h_deltaphi_2__200->SetBinContent(19,0.7726189);
   h_deltaphi_2__200->SetBinContent(20,0.5278151);
   h_deltaphi_2__200->SetBinError(1,0.0003700739);
   h_deltaphi_2__200->SetBinError(2,0.0003169583);
   h_deltaphi_2__200->SetBinError(3,0.0002849123);
   h_deltaphi_2__200->SetBinError(4,0.0002675443);
   h_deltaphi_2__200->SetBinError(5,0.0002614599);
   h_deltaphi_2__200->SetBinError(6,0.0002614599);
   h_deltaphi_2__200->SetBinError(7,0.0002675443);
   h_deltaphi_2__200->SetBinError(8,0.0002849123);
   h_deltaphi_2__200->SetBinError(9,0.0003169583);
   h_deltaphi_2__200->SetBinError(10,0.0003700739);
   h_deltaphi_2__200->SetBinError(11,0.0004638258);
   h_deltaphi_2__200->SetBinError(12,0.0006381819);
   h_deltaphi_2__200->SetBinError(13,0.0009950604);
   h_deltaphi_2__200->SetBinError(14,0.001767108);
   h_deltaphi_2__200->SetBinError(15,0.003228144);
   h_deltaphi_2__200->SetBinError(16,0.003228144);
   h_deltaphi_2__200->SetBinError(17,0.001767108);
   h_deltaphi_2__200->SetBinError(18,0.0009950604);
   h_deltaphi_2__200->SetBinError(19,0.0006381819);
   h_deltaphi_2__200->SetBinError(20,0.0004638258);
   h_deltaphi_2__200->SetEntries(1.793432e+07);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("h_deltaphi_2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries =   1.793432e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  2.685");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.283");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   h_deltaphi_2__200->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h_deltaphi_2__200);

   ci = TColor::GetColor("#000099");
   h_deltaphi_2__200->SetLineColor(ci);
   h_deltaphi_2__200->GetXaxis()->SetTitle("#Delta#phi");
   h_deltaphi_2__200->GetXaxis()->SetLabelFont(42);
   h_deltaphi_2__200->GetXaxis()->SetLabelSize(0.035);
   h_deltaphi_2__200->GetXaxis()->SetTitleSize(0.035);
   h_deltaphi_2__200->GetXaxis()->SetTitleOffset(0);
   h_deltaphi_2__200->GetXaxis()->SetTitleFont(42);
   h_deltaphi_2__200->GetYaxis()->SetTitle("Y(#Delta#phi)");
   h_deltaphi_2__200->GetYaxis()->SetLabelFont(42);
   h_deltaphi_2__200->GetYaxis()->SetLabelSize(0.035);
   h_deltaphi_2__200->GetYaxis()->SetTitleSize(0.035);
   h_deltaphi_2__200->GetYaxis()->SetTitleOffset(0);
   h_deltaphi_2__200->GetYaxis()->SetTitleFont(42);
   h_deltaphi_2__200->GetZaxis()->SetLabelFont(42);
   h_deltaphi_2__200->GetZaxis()->SetLabelSize(0.035);
   h_deltaphi_2__200->GetZaxis()->SetTitleSize(0.035);
   h_deltaphi_2__200->GetZaxis()->SetTitleFont(42);
   h_deltaphi_2__200->Draw("");
   
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
   c2_3->Range(-2.356195,-0.6736143,5.497787,6.338339);
   c2_3->SetFillColor(0);
   c2_3->SetBorderMode(0);
   c2_3->SetBorderSize(2);
   c2_3->SetFrameBorderMode(0);
   c2_3->SetFrameBorderMode(0);
   
   TH1D *h_deltaphi_4__201 = new TH1D("h_deltaphi_4__201","#Delta#phi, #Delta#eta (2.400000, 10.000000), Multipliplicity (0, 20)",20,-1.570796,4.712389);
   h_deltaphi_4__201->SetBinContent(1,0.4114488);
   h_deltaphi_4__201->SetBinContent(2,0.3409027);
   h_deltaphi_4__201->SetBinContent(3,0.3039089);
   h_deltaphi_4__201->SetBinContent(4,0.2876164);
   h_deltaphi_4__201->SetBinContent(5,0.2822779);
   h_deltaphi_4__201->SetBinContent(6,0.2822779);
   h_deltaphi_4__201->SetBinContent(7,0.2876164);
   h_deltaphi_4__201->SetBinContent(8,0.3039089);
   h_deltaphi_4__201->SetBinContent(9,0.3409027);
   h_deltaphi_4__201->SetBinContent(10,0.4114488);
   h_deltaphi_4__201->SetBinContent(11,0.5464854);
   h_deltaphi_4__201->SetBinContent(12,0.8148162);
   h_deltaphi_4__201->SetBinContent(13,1.381648);
   h_deltaphi_4__201->SetBinContent(14,2.666431);
   h_deltaphi_4__201->SetBinContent(15,5.366335);
   h_deltaphi_4__201->SetBinContent(16,5.366335);
   h_deltaphi_4__201->SetBinContent(17,2.666431);
   h_deltaphi_4__201->SetBinContent(18,1.381648);
   h_deltaphi_4__201->SetBinContent(19,0.8148162);
   h_deltaphi_4__201->SetBinContent(20,0.5464854);
   h_deltaphi_4__201->SetBinError(1,0.0004213142);
   h_deltaphi_4__201->SetBinError(2,0.000360187);
   h_deltaphi_4__201->SetBinError(3,0.0003229477);
   h_deltaphi_4__201->SetBinError(4,0.0003023355);
   h_deltaphi_4__201->SetBinError(5,0.0002948108);
   h_deltaphi_4__201->SetBinError(6,0.0002948107);
   h_deltaphi_4__201->SetBinError(7,0.0003023355);
   h_deltaphi_4__201->SetBinError(8,0.0003229477);
   h_deltaphi_4__201->SetBinError(9,0.000360187);
   h_deltaphi_4__201->SetBinError(10,0.0004213142);
   h_deltaphi_4__201->SetBinError(11,0.0005287226);
   h_deltaphi_4__201->SetBinError(12,0.0007281291);
   h_deltaphi_4__201->SetBinError(13,0.001136026);
   h_deltaphi_4__201->SetBinError(14,0.002018144);
   h_deltaphi_4__201->SetBinError(15,0.003686605);
   h_deltaphi_4__201->SetBinError(16,0.003686605);
   h_deltaphi_4__201->SetBinError(17,0.002018144);
   h_deltaphi_4__201->SetBinError(18,0.001136026);
   h_deltaphi_4__201->SetBinError(19,0.0007281291);
   h_deltaphi_4__201->SetBinError(20,0.0005287226);
   h_deltaphi_4__201->SetEntries(1.511307e+07);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("h_deltaphi_4");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries =   1.511307e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =   2.73");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.241");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   h_deltaphi_4__201->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h_deltaphi_4__201);

   ci = TColor::GetColor("#000099");
   h_deltaphi_4__201->SetLineColor(ci);
   h_deltaphi_4__201->GetXaxis()->SetTitle("#Delta#phi");
   h_deltaphi_4__201->GetXaxis()->SetLabelFont(42);
   h_deltaphi_4__201->GetXaxis()->SetLabelSize(0.035);
   h_deltaphi_4__201->GetXaxis()->SetTitleSize(0.035);
   h_deltaphi_4__201->GetXaxis()->SetTitleOffset(0);
   h_deltaphi_4__201->GetXaxis()->SetTitleFont(42);
   h_deltaphi_4__201->GetYaxis()->SetTitle("Y(#Delta#phi)");
   h_deltaphi_4__201->GetYaxis()->SetLabelFont(42);
   h_deltaphi_4__201->GetYaxis()->SetLabelSize(0.035);
   h_deltaphi_4__201->GetYaxis()->SetTitleSize(0.035);
   h_deltaphi_4__201->GetYaxis()->SetTitleOffset(0);
   h_deltaphi_4__201->GetYaxis()->SetTitleFont(42);
   h_deltaphi_4__201->GetZaxis()->SetLabelFont(42);
   h_deltaphi_4__201->GetZaxis()->SetLabelSize(0.035);
   h_deltaphi_4__201->GetZaxis()->SetTitleSize(0.035);
   h_deltaphi_4__201->GetZaxis()->SetTitleFont(42);
   h_deltaphi_4__201->Draw("");
   
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
   c2_4->Range(-2.356195,-0.6736143,5.497787,6.338339);
   c2_4->SetFillColor(0);
   c2_4->SetBorderMode(0);
   c2_4->SetBorderSize(2);
   c2_4->SetFrameBorderMode(0);
   c2_4->SetFrameBorderMode(0);
   
   TH1D *h_deltaphi_6__202 = new TH1D("h_deltaphi_6__202","#Delta#phi, #Delta#eta (2.600000, 10.000000), Multipliplicity (0, 20)",20,-1.570796,4.712389);
   h_deltaphi_6__202->SetBinContent(1,0.4114488);
   h_deltaphi_6__202->SetBinContent(2,0.3409027);
   h_deltaphi_6__202->SetBinContent(3,0.3039089);
   h_deltaphi_6__202->SetBinContent(4,0.2876164);
   h_deltaphi_6__202->SetBinContent(5,0.2822779);
   h_deltaphi_6__202->SetBinContent(6,0.2822779);
   h_deltaphi_6__202->SetBinContent(7,0.2876164);
   h_deltaphi_6__202->SetBinContent(8,0.3039089);
   h_deltaphi_6__202->SetBinContent(9,0.3409027);
   h_deltaphi_6__202->SetBinContent(10,0.4114488);
   h_deltaphi_6__202->SetBinContent(11,0.5464854);
   h_deltaphi_6__202->SetBinContent(12,0.8148162);
   h_deltaphi_6__202->SetBinContent(13,1.381648);
   h_deltaphi_6__202->SetBinContent(14,2.666431);
   h_deltaphi_6__202->SetBinContent(15,5.366335);
   h_deltaphi_6__202->SetBinContent(16,5.366335);
   h_deltaphi_6__202->SetBinContent(17,2.666431);
   h_deltaphi_6__202->SetBinContent(18,1.381648);
   h_deltaphi_6__202->SetBinContent(19,0.8148162);
   h_deltaphi_6__202->SetBinContent(20,0.5464854);
   h_deltaphi_6__202->SetBinError(1,0.0004213142);
   h_deltaphi_6__202->SetBinError(2,0.000360187);
   h_deltaphi_6__202->SetBinError(3,0.0003229477);
   h_deltaphi_6__202->SetBinError(4,0.0003023355);
   h_deltaphi_6__202->SetBinError(5,0.0002948108);
   h_deltaphi_6__202->SetBinError(6,0.0002948107);
   h_deltaphi_6__202->SetBinError(7,0.0003023355);
   h_deltaphi_6__202->SetBinError(8,0.0003229477);
   h_deltaphi_6__202->SetBinError(9,0.000360187);
   h_deltaphi_6__202->SetBinError(10,0.0004213142);
   h_deltaphi_6__202->SetBinError(11,0.0005287226);
   h_deltaphi_6__202->SetBinError(12,0.0007281291);
   h_deltaphi_6__202->SetBinError(13,0.001136026);
   h_deltaphi_6__202->SetBinError(14,0.002018144);
   h_deltaphi_6__202->SetBinError(15,0.003686605);
   h_deltaphi_6__202->SetBinError(16,0.003686605);
   h_deltaphi_6__202->SetBinError(17,0.002018144);
   h_deltaphi_6__202->SetBinError(18,0.001136026);
   h_deltaphi_6__202->SetBinError(19,0.0007281291);
   h_deltaphi_6__202->SetBinError(20,0.0005287226);
   h_deltaphi_6__202->SetEntries(1.511307e+07);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("h_deltaphi_6");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries =   1.511307e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =   2.73");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.241");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   h_deltaphi_6__202->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h_deltaphi_6__202);

   ci = TColor::GetColor("#000099");
   h_deltaphi_6__202->SetLineColor(ci);
   h_deltaphi_6__202->GetXaxis()->SetTitle("#Delta#phi");
   h_deltaphi_6__202->GetXaxis()->SetLabelFont(42);
   h_deltaphi_6__202->GetXaxis()->SetLabelSize(0.035);
   h_deltaphi_6__202->GetXaxis()->SetTitleSize(0.035);
   h_deltaphi_6__202->GetXaxis()->SetTitleOffset(0);
   h_deltaphi_6__202->GetXaxis()->SetTitleFont(42);
   h_deltaphi_6__202->GetYaxis()->SetTitle("Y(#Delta#phi)");
   h_deltaphi_6__202->GetYaxis()->SetLabelFont(42);
   h_deltaphi_6__202->GetYaxis()->SetLabelSize(0.035);
   h_deltaphi_6__202->GetYaxis()->SetTitleSize(0.035);
   h_deltaphi_6__202->GetYaxis()->SetTitleOffset(0);
   h_deltaphi_6__202->GetYaxis()->SetTitleFont(42);
   h_deltaphi_6__202->GetZaxis()->SetLabelFont(42);
   h_deltaphi_6__202->GetZaxis()->SetLabelSize(0.035);
   h_deltaphi_6__202->GetZaxis()->SetTitleSize(0.035);
   h_deltaphi_6__202->GetZaxis()->SetTitleFont(42);
   h_deltaphi_6__202->Draw("");
   
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
