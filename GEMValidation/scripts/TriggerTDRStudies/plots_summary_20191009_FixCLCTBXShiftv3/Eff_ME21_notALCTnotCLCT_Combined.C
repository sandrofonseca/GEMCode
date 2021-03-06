void Eff_ME21_notALCTnotCLCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 10 20:23:25 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.485714,0.42125,2.438095,1.0775);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.04);
   c->SetTopMargin(0.08);
   c->SetBottomMargin(0.12);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   
   TH1F *base__82 = new TH1F("base__82","",25,1.6,2.4);
   base__82->SetMinimum(0.5);
   base__82->SetMaximum(1.025);
   base__82->SetLineStyle(0);
   base__82->SetMarkerStyle(20);
   base__82->GetXaxis()->SetTitle("True muon |#eta|");
   base__82->GetXaxis()->SetLabelFont(42);
   base__82->GetXaxis()->SetLabelOffset(0.007);
   base__82->GetXaxis()->SetLabelSize(0.05);
   base__82->GetXaxis()->SetTitleSize(0.06);
   base__82->GetXaxis()->SetTitleOffset(0.9);
   base__82->GetXaxis()->SetTitleFont(42);
   base__82->GetYaxis()->SetTitle("Efficiency");
   base__82->GetYaxis()->SetLabelFont(42);
   base__82->GetYaxis()->SetLabelOffset(0.007);
   base__82->GetYaxis()->SetLabelSize(0.05);
   base__82->GetYaxis()->SetTitleSize(0.06);
   base__82->GetYaxis()->SetTitleOffset(0.9);
   base__82->GetYaxis()->SetTitleFont(42);
   base__82->GetZaxis()->SetLabelFont(42);
   base__82->GetZaxis()->SetLabelOffset(0.007);
   base__82->GetZaxis()->SetLabelSize(0.05);
   base__82->GetZaxis()->SetTitleSize(0.06);
   base__82->GetZaxis()->SetTitleFont(42);
   base__82->Draw("");
   TLatex *   tex = new TLatex(0.96,0.936,"14 TeV");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.12,0.936,"CMS");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2208,0.936,"Phase-2 Simulation");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TEfficiency * den_clone301 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone301->SetConfidenceLevel(0.6826895);
   den_clone301->SetBetaAlpha(1);
   den_clone301->SetBetaBeta(1);
   den_clone301->SetWeight(1);
   den_clone301->SetStatisticOption(0);
   den_clone301->SetPosteriorMode(0);
   den_clone301->SetShortestInterval(0);
   den_clone301->SetTotalEvents(0,0);
   den_clone301->SetPassedEvents(0,0);
   den_clone301->SetTotalEvents(1,735);
   den_clone301->SetPassedEvents(1,81);
   den_clone301->SetTotalEvents(2,1988);
   den_clone301->SetPassedEvents(2,68);
   den_clone301->SetTotalEvents(3,2149);
   den_clone301->SetPassedEvents(3,3);
   den_clone301->SetTotalEvents(4,2366);
   den_clone301->SetPassedEvents(4,5);
   den_clone301->SetTotalEvents(5,2041);
   den_clone301->SetPassedEvents(5,7);
   den_clone301->SetTotalEvents(6,2277);
   den_clone301->SetPassedEvents(6,36);
   den_clone301->SetTotalEvents(7,2246);
   den_clone301->SetPassedEvents(7,196);
   den_clone301->SetTotalEvents(8,2210);
   den_clone301->SetPassedEvents(8,150);
   den_clone301->SetTotalEvents(9,2202);
   den_clone301->SetPassedEvents(9,4);
   den_clone301->SetTotalEvents(10,2144);
   den_clone301->SetPassedEvents(10,2);
   den_clone301->SetTotalEvents(11,2307);
   den_clone301->SetPassedEvents(11,5);
   den_clone301->SetTotalEvents(12,2235);
   den_clone301->SetPassedEvents(12,5);
   den_clone301->SetTotalEvents(13,2241);
   den_clone301->SetPassedEvents(13,6);
   den_clone301->SetTotalEvents(14,2069);
   den_clone301->SetPassedEvents(14,270);
   den_clone301->SetTotalEvents(15,1901);
   den_clone301->SetPassedEvents(15,254);
   den_clone301->SetTotalEvents(16,2116);
   den_clone301->SetPassedEvents(16,19);
   den_clone301->SetTotalEvents(17,2218);
   den_clone301->SetPassedEvents(17,3);
   den_clone301->SetTotalEvents(18,2288);
   den_clone301->SetPassedEvents(18,2);
   den_clone301->SetTotalEvents(19,2198);
   den_clone301->SetPassedEvents(19,1);
   den_clone301->SetTotalEvents(20,2322);
   den_clone301->SetPassedEvents(20,1);
   den_clone301->SetTotalEvents(21,2256);
   den_clone301->SetPassedEvents(21,9);
   den_clone301->SetTotalEvents(22,2163);
   den_clone301->SetPassedEvents(22,4);
   den_clone301->SetTotalEvents(23,2314);
   den_clone301->SetPassedEvents(23,4);
   den_clone301->SetTotalEvents(24,2192);
   den_clone301->SetPassedEvents(24,6);
   den_clone301->SetTotalEvents(25,2217);
   den_clone301->SetPassedEvents(25,8);
   den_clone301->SetTotalEvents(26,0);
   den_clone301->SetPassedEvents(26,0);
   den_clone301->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone301->SetLineColor(ci);
   den_clone301->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone301->SetMarkerColor(ci);
   den_clone301->SetMarkerStyle(22);
   den_clone301->Draw("same samep");
   
   TEfficiency * den_clone302 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone302->SetConfidenceLevel(0.6826895);
   den_clone302->SetBetaAlpha(1);
   den_clone302->SetBetaBeta(1);
   den_clone302->SetWeight(1);
   den_clone302->SetStatisticOption(0);
   den_clone302->SetPosteriorMode(0);
   den_clone302->SetShortestInterval(0);
   den_clone302->SetTotalEvents(0,0);
   den_clone302->SetPassedEvents(0,0);
   den_clone302->SetTotalEvents(1,815);
   den_clone302->SetPassedEvents(1,91);
   den_clone302->SetTotalEvents(2,1938);
   den_clone302->SetPassedEvents(2,72);
   den_clone302->SetTotalEvents(3,2262);
   den_clone302->SetPassedEvents(3,5);
   den_clone302->SetTotalEvents(4,2057);
   den_clone302->SetPassedEvents(4,7);
   den_clone302->SetTotalEvents(5,2257);
   den_clone302->SetPassedEvents(5,6);
   den_clone302->SetTotalEvents(6,2038);
   den_clone302->SetPassedEvents(6,44);
   den_clone302->SetTotalEvents(7,2180);
   den_clone302->SetPassedEvents(7,199);
   den_clone302->SetTotalEvents(8,2318);
   den_clone302->SetPassedEvents(8,148);
   den_clone302->SetTotalEvents(9,2116);
   den_clone302->SetPassedEvents(9,0);
   den_clone302->SetTotalEvents(10,2256);
   den_clone302->SetPassedEvents(10,4);
   den_clone302->SetTotalEvents(11,2269);
   den_clone302->SetPassedEvents(11,3);
   den_clone302->SetTotalEvents(12,2195);
   den_clone302->SetPassedEvents(12,4);
   den_clone302->SetTotalEvents(13,2180);
   den_clone302->SetPassedEvents(13,14);
   den_clone302->SetTotalEvents(14,2109);
   den_clone302->SetPassedEvents(14,238);
   den_clone302->SetTotalEvents(15,2089);
   den_clone302->SetPassedEvents(15,255);
   den_clone302->SetTotalEvents(16,2216);
   den_clone302->SetPassedEvents(16,34);
   den_clone302->SetTotalEvents(17,2214);
   den_clone302->SetPassedEvents(17,6);
   den_clone302->SetTotalEvents(18,2194);
   den_clone302->SetPassedEvents(18,4);
   den_clone302->SetTotalEvents(19,2250);
   den_clone302->SetPassedEvents(19,8);
   den_clone302->SetTotalEvents(20,2188);
   den_clone302->SetPassedEvents(20,5);
   den_clone302->SetTotalEvents(21,2154);
   den_clone302->SetPassedEvents(21,14);
   den_clone302->SetTotalEvents(22,2232);
   den_clone302->SetPassedEvents(22,15);
   den_clone302->SetTotalEvents(23,2234);
   den_clone302->SetPassedEvents(23,9);
   den_clone302->SetTotalEvents(24,2084);
   den_clone302->SetPassedEvents(24,10);
   den_clone302->SetTotalEvents(25,2196);
   den_clone302->SetPassedEvents(25,10);
   den_clone302->SetTotalEvents(26,0);
   den_clone302->SetPassedEvents(26,0);
   den_clone302->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone302->SetLineColor(ci);
   den_clone302->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone302->SetMarkerColor(ci);
   den_clone302->SetMarkerStyle(21);
   den_clone302->Draw("same samep");
   
   TEfficiency * den_clone303 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone303->SetConfidenceLevel(0.6826895);
   den_clone303->SetBetaAlpha(1);
   den_clone303->SetBetaBeta(1);
   den_clone303->SetWeight(1);
   den_clone303->SetStatisticOption(0);
   den_clone303->SetPosteriorMode(0);
   den_clone303->SetShortestInterval(0);
   den_clone303->SetTotalEvents(0,0);
   den_clone303->SetPassedEvents(0,0);
   den_clone303->SetTotalEvents(1,815);
   den_clone303->SetPassedEvents(1,90);
   den_clone303->SetTotalEvents(2,1938);
   den_clone303->SetPassedEvents(2,71);
   den_clone303->SetTotalEvents(3,2262);
   den_clone303->SetPassedEvents(3,3);
   den_clone303->SetTotalEvents(4,2057);
   den_clone303->SetPassedEvents(4,6);
   den_clone303->SetTotalEvents(5,2257);
   den_clone303->SetPassedEvents(5,6);
   den_clone303->SetTotalEvents(6,2038);
   den_clone303->SetPassedEvents(6,58);
   den_clone303->SetTotalEvents(7,2180);
   den_clone303->SetPassedEvents(7,291);
   den_clone303->SetTotalEvents(8,2318);
   den_clone303->SetPassedEvents(8,200);
   den_clone303->SetTotalEvents(9,2116);
   den_clone303->SetPassedEvents(9,0);
   den_clone303->SetTotalEvents(10,2256);
   den_clone303->SetPassedEvents(10,1);
   den_clone303->SetTotalEvents(11,2269);
   den_clone303->SetPassedEvents(11,0);
   den_clone303->SetTotalEvents(12,2195);
   den_clone303->SetPassedEvents(12,2);
   den_clone303->SetTotalEvents(13,2180);
   den_clone303->SetPassedEvents(13,11);
   den_clone303->SetTotalEvents(14,2109);
   den_clone303->SetPassedEvents(14,288);
   den_clone303->SetTotalEvents(15,2089);
   den_clone303->SetPassedEvents(15,325);
   den_clone303->SetTotalEvents(16,2216);
   den_clone303->SetPassedEvents(16,36);
   den_clone303->SetTotalEvents(17,2214);
   den_clone303->SetPassedEvents(17,2);
   den_clone303->SetTotalEvents(18,2194);
   den_clone303->SetPassedEvents(18,1);
   den_clone303->SetTotalEvents(19,2250);
   den_clone303->SetPassedEvents(19,5);
   den_clone303->SetTotalEvents(20,2188);
   den_clone303->SetPassedEvents(20,3);
   den_clone303->SetTotalEvents(21,2154);
   den_clone303->SetPassedEvents(21,1);
   den_clone303->SetTotalEvents(22,2232);
   den_clone303->SetPassedEvents(22,3);
   den_clone303->SetTotalEvents(23,2234);
   den_clone303->SetPassedEvents(23,1);
   den_clone303->SetTotalEvents(24,2084);
   den_clone303->SetPassedEvents(24,2);
   den_clone303->SetTotalEvents(25,2196);
   den_clone303->SetPassedEvents(25,7);
   den_clone303->SetTotalEvents(26,0);
   den_clone303->SetPassedEvents(26,0);
   den_clone303->SetFillColor(19);
   den_clone303->SetLineWidth(2);
   den_clone303->SetMarkerStyle(23);
   den_clone303->Draw("same samep");
   
   TEfficiency * den_clone304 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone304->SetConfidenceLevel(0.6826895);
   den_clone304->SetBetaAlpha(1);
   den_clone304->SetBetaBeta(1);
   den_clone304->SetWeight(1);
   den_clone304->SetStatisticOption(0);
   den_clone304->SetPosteriorMode(0);
   den_clone304->SetShortestInterval(0);
   den_clone304->SetTotalEvents(0,0);
   den_clone304->SetPassedEvents(0,0);
   den_clone304->SetTotalEvents(1,249);
   den_clone304->SetPassedEvents(1,0);
   den_clone304->SetTotalEvents(2,657);
   den_clone304->SetPassedEvents(2,0);
   den_clone304->SetTotalEvents(3,852);
   den_clone304->SetPassedEvents(3,4);
   den_clone304->SetTotalEvents(4,777);
   den_clone304->SetPassedEvents(4,1);
   den_clone304->SetTotalEvents(5,791);
   den_clone304->SetPassedEvents(5,1);
   den_clone304->SetTotalEvents(6,768);
   den_clone304->SetPassedEvents(6,12);
   den_clone304->SetTotalEvents(7,773);
   den_clone304->SetPassedEvents(7,43);
   den_clone304->SetTotalEvents(8,778);
   den_clone304->SetPassedEvents(8,24);
   den_clone304->SetTotalEvents(9,761);
   den_clone304->SetPassedEvents(9,0);
   den_clone304->SetTotalEvents(10,760);
   den_clone304->SetPassedEvents(10,1);
   den_clone304->SetTotalEvents(11,774);
   den_clone304->SetPassedEvents(11,1);
   den_clone304->SetTotalEvents(12,783);
   den_clone304->SetPassedEvents(12,3);
   den_clone304->SetTotalEvents(13,792);
   den_clone304->SetPassedEvents(13,1);
   den_clone304->SetTotalEvents(14,631);
   den_clone304->SetPassedEvents(14,20);
   den_clone304->SetTotalEvents(15,608);
   den_clone304->SetPassedEvents(15,14);
   den_clone304->SetTotalEvents(16,779);
   den_clone304->SetPassedEvents(16,2);
   den_clone304->SetTotalEvents(17,787);
   den_clone304->SetPassedEvents(17,2);
   den_clone304->SetTotalEvents(18,768);
   den_clone304->SetPassedEvents(18,1);
   den_clone304->SetTotalEvents(19,816);
   den_clone304->SetPassedEvents(19,3);
   den_clone304->SetTotalEvents(20,795);
   den_clone304->SetPassedEvents(20,0);
   den_clone304->SetTotalEvents(21,752);
   den_clone304->SetPassedEvents(21,1);
   den_clone304->SetTotalEvents(22,863);
   den_clone304->SetPassedEvents(22,1);
   den_clone304->SetTotalEvents(23,740);
   den_clone304->SetPassedEvents(23,2);
   den_clone304->SetTotalEvents(24,856);
   den_clone304->SetPassedEvents(24,1);
   den_clone304->SetTotalEvents(25,730);
   den_clone304->SetPassedEvents(25,0);
   den_clone304->SetTotalEvents(26,0);
   den_clone304->SetPassedEvents(26,0);
   den_clone304->SetFillColor(19);

   ci = TColor::GetColor("#00cc00");
   den_clone304->SetLineColor(ci);
   den_clone304->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   den_clone304->SetMarkerColor(ci);
   den_clone304->SetMarkerStyle(23);
   den_clone304->Draw("same samep");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("den_clone","PU0 CSC Run-2","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("den_clone","PU200 CSC Run-2","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("den_clone","PU200 CSC Phase-2","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("den_clone","PU300 CSC Phase-2","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TText *text = new TText(0.17,0.17,"ME2/1");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"notALCTnotCLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
