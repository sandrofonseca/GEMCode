void Eff_ME21_LCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  8 12:39:42 2019) by ROOT version 6.14/09
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
   
   TH1F *base__30 = new TH1F("base__30","",25,1.6,2.4);
   base__30->SetMinimum(0.5);
   base__30->SetMaximum(1.025);
   base__30->SetLineStyle(0);
   base__30->SetMarkerStyle(20);
   base__30->GetXaxis()->SetTitle("True muon |#eta|");
   base__30->GetXaxis()->SetLabelFont(42);
   base__30->GetXaxis()->SetLabelOffset(0.007);
   base__30->GetXaxis()->SetLabelSize(0.05);
   base__30->GetXaxis()->SetTitleSize(0.06);
   base__30->GetXaxis()->SetTitleOffset(0.9);
   base__30->GetXaxis()->SetTitleFont(42);
   base__30->GetYaxis()->SetTitle("Efficiency");
   base__30->GetYaxis()->SetLabelFont(42);
   base__30->GetYaxis()->SetLabelOffset(0.007);
   base__30->GetYaxis()->SetLabelSize(0.05);
   base__30->GetYaxis()->SetTitleSize(0.06);
   base__30->GetYaxis()->SetTitleOffset(0.9);
   base__30->GetYaxis()->SetTitleFont(42);
   base__30->GetZaxis()->SetLabelFont(42);
   base__30->GetZaxis()->SetLabelOffset(0.007);
   base__30->GetZaxis()->SetLabelSize(0.05);
   base__30->GetZaxis()->SetTitleSize(0.06);
   base__30->GetZaxis()->SetTitleFont(42);
   base__30->Draw("");
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
      tex = new TLatex(0.2208,0.936,"Simulation Preliminary");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TEfficiency * den_clone112 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone112->SetConfidenceLevel(0.6826895);
   den_clone112->SetBetaAlpha(1);
   den_clone112->SetBetaBeta(1);
   den_clone112->SetWeight(1);
   den_clone112->SetStatisticOption(0);
   den_clone112->SetPosteriorMode(0);
   den_clone112->SetShortestInterval(0);
   den_clone112->SetTotalEvents(0,0);
   den_clone112->SetPassedEvents(0,0);
   den_clone112->SetTotalEvents(1,735);
   den_clone112->SetPassedEvents(1,591);
   den_clone112->SetTotalEvents(2,1988);
   den_clone112->SetPassedEvents(2,1850);
   den_clone112->SetTotalEvents(3,2149);
   den_clone112->SetPassedEvents(3,2127);
   den_clone112->SetTotalEvents(4,2366);
   den_clone112->SetPassedEvents(4,2344);
   den_clone112->SetTotalEvents(5,2041);
   den_clone112->SetPassedEvents(5,2009);
   den_clone112->SetTotalEvents(6,2277);
   den_clone112->SetPassedEvents(6,2174);
   den_clone112->SetTotalEvents(7,2246);
   den_clone112->SetPassedEvents(7,1812);
   den_clone112->SetTotalEvents(8,2210);
   den_clone112->SetPassedEvents(8,1935);
   den_clone112->SetTotalEvents(9,2202);
   den_clone112->SetPassedEvents(9,2175);
   den_clone112->SetTotalEvents(10,2144);
   den_clone112->SetPassedEvents(10,2110);
   den_clone112->SetTotalEvents(11,2307);
   den_clone112->SetPassedEvents(11,2259);
   den_clone112->SetTotalEvents(12,2235);
   den_clone112->SetPassedEvents(12,2194);
   den_clone112->SetTotalEvents(13,2241);
   den_clone112->SetPassedEvents(13,2190);
   den_clone112->SetTotalEvents(14,2069);
   den_clone112->SetPassedEvents(14,1679);
   den_clone112->SetTotalEvents(15,1901);
   den_clone112->SetPassedEvents(15,1505);
   den_clone112->SetTotalEvents(16,2116);
   den_clone112->SetPassedEvents(16,2031);
   den_clone112->SetTotalEvents(17,2218);
   den_clone112->SetPassedEvents(17,2162);
   den_clone112->SetTotalEvents(18,2288);
   den_clone112->SetPassedEvents(18,2223);
   den_clone112->SetTotalEvents(19,2198);
   den_clone112->SetPassedEvents(19,2125);
   den_clone112->SetTotalEvents(20,2322);
   den_clone112->SetPassedEvents(20,2247);
   den_clone112->SetTotalEvents(21,2256);
   den_clone112->SetPassedEvents(21,2168);
   den_clone112->SetTotalEvents(22,2163);
   den_clone112->SetPassedEvents(22,2046);
   den_clone112->SetTotalEvents(23,2314);
   den_clone112->SetPassedEvents(23,2189);
   den_clone112->SetTotalEvents(24,2192);
   den_clone112->SetPassedEvents(24,2084);
   den_clone112->SetTotalEvents(25,2217);
   den_clone112->SetPassedEvents(25,2063);
   den_clone112->SetTotalEvents(26,0);
   den_clone112->SetPassedEvents(26,0);
   den_clone112->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone112->SetLineColor(ci);
   den_clone112->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone112->SetMarkerColor(ci);
   den_clone112->SetMarkerStyle(22);
   den_clone112->Draw("same samep");
   
   TEfficiency * den_clone113 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone113->SetConfidenceLevel(0.6826895);
   den_clone113->SetBetaAlpha(1);
   den_clone113->SetBetaBeta(1);
   den_clone113->SetWeight(1);
   den_clone113->SetStatisticOption(0);
   den_clone113->SetPosteriorMode(0);
   den_clone113->SetShortestInterval(0);
   den_clone113->SetTotalEvents(0,0);
   den_clone113->SetPassedEvents(0,0);
   den_clone113->SetTotalEvents(1,815);
   den_clone113->SetPassedEvents(1,624);
   den_clone113->SetTotalEvents(2,1938);
   den_clone113->SetPassedEvents(2,1716);
   den_clone113->SetTotalEvents(3,2262);
   den_clone113->SetPassedEvents(3,2125);
   den_clone113->SetTotalEvents(4,2057);
   den_clone113->SetPassedEvents(4,1918);
   den_clone113->SetTotalEvents(5,2257);
   den_clone113->SetPassedEvents(5,2095);
   den_clone113->SetTotalEvents(6,2038);
   den_clone113->SetPassedEvents(6,1833);
   den_clone113->SetTotalEvents(7,2180);
   den_clone113->SetPassedEvents(7,1692);
   den_clone113->SetTotalEvents(8,2318);
   den_clone113->SetPassedEvents(8,1940);
   den_clone113->SetTotalEvents(9,2116);
   den_clone113->SetPassedEvents(9,1980);
   den_clone113->SetTotalEvents(10,2256);
   den_clone113->SetPassedEvents(10,2092);
   den_clone113->SetTotalEvents(11,2269);
   den_clone113->SetPassedEvents(11,2127);
   den_clone113->SetTotalEvents(12,2195);
   den_clone113->SetPassedEvents(12,2035);
   den_clone113->SetTotalEvents(13,2180);
   den_clone113->SetPassedEvents(13,2002);
   den_clone113->SetTotalEvents(14,2109);
   den_clone113->SetPassedEvents(14,1656);
   den_clone113->SetTotalEvents(15,2089);
   den_clone113->SetPassedEvents(15,1594);
   den_clone113->SetTotalEvents(16,2216);
   den_clone113->SetPassedEvents(16,1983);
   den_clone113->SetTotalEvents(17,2214);
   den_clone113->SetPassedEvents(17,2047);
   den_clone113->SetTotalEvents(18,2194);
   den_clone113->SetPassedEvents(18,2040);
   den_clone113->SetTotalEvents(19,2250);
   den_clone113->SetPassedEvents(19,2073);
   den_clone113->SetTotalEvents(20,2188);
   den_clone113->SetPassedEvents(20,2011);
   den_clone113->SetTotalEvents(21,2154);
   den_clone113->SetPassedEvents(21,1948);
   den_clone113->SetTotalEvents(22,2232);
   den_clone113->SetPassedEvents(22,2027);
   den_clone113->SetTotalEvents(23,2234);
   den_clone113->SetPassedEvents(23,2012);
   den_clone113->SetTotalEvents(24,2084);
   den_clone113->SetPassedEvents(24,1869);
   den_clone113->SetTotalEvents(25,2196);
   den_clone113->SetPassedEvents(25,1947);
   den_clone113->SetTotalEvents(26,0);
   den_clone113->SetPassedEvents(26,0);
   den_clone113->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone113->SetLineColor(ci);
   den_clone113->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone113->SetMarkerColor(ci);
   den_clone113->SetMarkerStyle(21);
   den_clone113->Draw("same samep");
   
   TEfficiency * den_clone114 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone114->SetConfidenceLevel(0.6826895);
   den_clone114->SetBetaAlpha(1);
   den_clone114->SetBetaBeta(1);
   den_clone114->SetWeight(1);
   den_clone114->SetStatisticOption(0);
   den_clone114->SetPosteriorMode(0);
   den_clone114->SetShortestInterval(0);
   den_clone114->SetTotalEvents(0,0);
   den_clone114->SetPassedEvents(0,0);
   den_clone114->SetTotalEvents(1,815);
   den_clone114->SetPassedEvents(1,650);
   den_clone114->SetTotalEvents(2,1938);
   den_clone114->SetPassedEvents(2,1781);
   den_clone114->SetTotalEvents(3,2262);
   den_clone114->SetPassedEvents(3,2200);
   den_clone114->SetTotalEvents(4,2057);
   den_clone114->SetPassedEvents(4,1992);
   den_clone114->SetTotalEvents(5,2257);
   den_clone114->SetPassedEvents(5,2171);
   den_clone114->SetTotalEvents(6,2038);
   den_clone114->SetPassedEvents(6,1887);
   den_clone114->SetTotalEvents(7,2180);
   den_clone114->SetPassedEvents(7,1681);
   den_clone114->SetTotalEvents(8,2318);
   den_clone114->SetPassedEvents(8,1980);
   den_clone114->SetTotalEvents(9,2116);
   den_clone114->SetPassedEvents(9,2049);
   den_clone114->SetTotalEvents(10,2256);
   den_clone114->SetPassedEvents(10,2186);
   den_clone114->SetTotalEvents(11,2269);
   den_clone114->SetPassedEvents(11,2208);
   den_clone114->SetTotalEvents(12,2195);
   den_clone114->SetPassedEvents(12,2105);
   den_clone114->SetTotalEvents(13,2180);
   den_clone114->SetPassedEvents(13,2080);
   den_clone114->SetTotalEvents(14,2109);
   den_clone114->SetPassedEvents(14,1690);
   den_clone114->SetTotalEvents(15,2089);
   den_clone114->SetPassedEvents(15,1631);
   den_clone114->SetTotalEvents(16,2216);
   den_clone114->SetPassedEvents(16,2063);
   den_clone114->SetTotalEvents(17,2214);
   den_clone114->SetPassedEvents(17,2107);
   den_clone114->SetTotalEvents(18,2194);
   den_clone114->SetPassedEvents(18,2104);
   den_clone114->SetTotalEvents(19,2250);
   den_clone114->SetPassedEvents(19,2153);
   den_clone114->SetTotalEvents(20,2188);
   den_clone114->SetPassedEvents(20,2076);
   den_clone114->SetTotalEvents(21,2154);
   den_clone114->SetPassedEvents(21,2021);
   den_clone114->SetTotalEvents(22,2232);
   den_clone114->SetPassedEvents(22,2101);
   den_clone114->SetTotalEvents(23,2234);
   den_clone114->SetPassedEvents(23,2078);
   den_clone114->SetTotalEvents(24,2084);
   den_clone114->SetPassedEvents(24,1953);
   den_clone114->SetTotalEvents(25,2196);
   den_clone114->SetPassedEvents(25,2015);
   den_clone114->SetTotalEvents(26,0);
   den_clone114->SetPassedEvents(26,0);
   den_clone114->SetFillColor(19);
   den_clone114->SetLineWidth(2);
   den_clone114->SetMarkerStyle(23);
   den_clone114->Draw("same samep");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("den_clone","PU0      CSC Run-2","pl");
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
   leg->Draw();
   TText *text = new TText(0.17,0.17,"ME2/1");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"LCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
