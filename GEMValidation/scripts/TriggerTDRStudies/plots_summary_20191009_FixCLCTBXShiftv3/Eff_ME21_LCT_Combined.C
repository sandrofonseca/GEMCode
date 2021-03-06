void Eff_ME21_LCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 10 20:23:21 2019) by ROOT version 6.14/09
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
   
   TH1F *base__75 = new TH1F("base__75","",25,1.6,2.4);
   base__75->SetMinimum(0.5);
   base__75->SetMaximum(1.025);
   base__75->SetLineStyle(0);
   base__75->SetMarkerStyle(20);
   base__75->GetXaxis()->SetTitle("True muon |#eta|");
   base__75->GetXaxis()->SetLabelFont(42);
   base__75->GetXaxis()->SetLabelOffset(0.007);
   base__75->GetXaxis()->SetLabelSize(0.05);
   base__75->GetXaxis()->SetTitleSize(0.06);
   base__75->GetXaxis()->SetTitleOffset(0.9);
   base__75->GetXaxis()->SetTitleFont(42);
   base__75->GetYaxis()->SetTitle("Efficiency");
   base__75->GetYaxis()->SetLabelFont(42);
   base__75->GetYaxis()->SetLabelOffset(0.007);
   base__75->GetYaxis()->SetLabelSize(0.05);
   base__75->GetYaxis()->SetTitleSize(0.06);
   base__75->GetYaxis()->SetTitleOffset(0.9);
   base__75->GetYaxis()->SetTitleFont(42);
   base__75->GetZaxis()->SetLabelFont(42);
   base__75->GetZaxis()->SetLabelOffset(0.007);
   base__75->GetZaxis()->SetLabelSize(0.05);
   base__75->GetZaxis()->SetTitleSize(0.06);
   base__75->GetZaxis()->SetTitleFont(42);
   base__75->Draw("");
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
   
   TEfficiency * den_clone277 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone277->SetConfidenceLevel(0.6826895);
   den_clone277->SetBetaAlpha(1);
   den_clone277->SetBetaBeta(1);
   den_clone277->SetWeight(1);
   den_clone277->SetStatisticOption(0);
   den_clone277->SetPosteriorMode(0);
   den_clone277->SetShortestInterval(0);
   den_clone277->SetTotalEvents(0,0);
   den_clone277->SetPassedEvents(0,0);
   den_clone277->SetTotalEvents(1,735);
   den_clone277->SetPassedEvents(1,591);
   den_clone277->SetTotalEvents(2,1988);
   den_clone277->SetPassedEvents(2,1850);
   den_clone277->SetTotalEvents(3,2149);
   den_clone277->SetPassedEvents(3,2127);
   den_clone277->SetTotalEvents(4,2366);
   den_clone277->SetPassedEvents(4,2344);
   den_clone277->SetTotalEvents(5,2041);
   den_clone277->SetPassedEvents(5,2009);
   den_clone277->SetTotalEvents(6,2277);
   den_clone277->SetPassedEvents(6,2174);
   den_clone277->SetTotalEvents(7,2246);
   den_clone277->SetPassedEvents(7,1812);
   den_clone277->SetTotalEvents(8,2210);
   den_clone277->SetPassedEvents(8,1935);
   den_clone277->SetTotalEvents(9,2202);
   den_clone277->SetPassedEvents(9,2175);
   den_clone277->SetTotalEvents(10,2144);
   den_clone277->SetPassedEvents(10,2110);
   den_clone277->SetTotalEvents(11,2307);
   den_clone277->SetPassedEvents(11,2259);
   den_clone277->SetTotalEvents(12,2235);
   den_clone277->SetPassedEvents(12,2194);
   den_clone277->SetTotalEvents(13,2241);
   den_clone277->SetPassedEvents(13,2190);
   den_clone277->SetTotalEvents(14,2069);
   den_clone277->SetPassedEvents(14,1679);
   den_clone277->SetTotalEvents(15,1901);
   den_clone277->SetPassedEvents(15,1505);
   den_clone277->SetTotalEvents(16,2116);
   den_clone277->SetPassedEvents(16,2031);
   den_clone277->SetTotalEvents(17,2218);
   den_clone277->SetPassedEvents(17,2162);
   den_clone277->SetTotalEvents(18,2288);
   den_clone277->SetPassedEvents(18,2223);
   den_clone277->SetTotalEvents(19,2198);
   den_clone277->SetPassedEvents(19,2125);
   den_clone277->SetTotalEvents(20,2322);
   den_clone277->SetPassedEvents(20,2247);
   den_clone277->SetTotalEvents(21,2256);
   den_clone277->SetPassedEvents(21,2168);
   den_clone277->SetTotalEvents(22,2163);
   den_clone277->SetPassedEvents(22,2046);
   den_clone277->SetTotalEvents(23,2314);
   den_clone277->SetPassedEvents(23,2189);
   den_clone277->SetTotalEvents(24,2192);
   den_clone277->SetPassedEvents(24,2084);
   den_clone277->SetTotalEvents(25,2217);
   den_clone277->SetPassedEvents(25,2063);
   den_clone277->SetTotalEvents(26,0);
   den_clone277->SetPassedEvents(26,0);
   den_clone277->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone277->SetLineColor(ci);
   den_clone277->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone277->SetMarkerColor(ci);
   den_clone277->SetMarkerStyle(22);
   den_clone277->Draw("same samep");
   
   TEfficiency * den_clone278 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone278->SetConfidenceLevel(0.6826895);
   den_clone278->SetBetaAlpha(1);
   den_clone278->SetBetaBeta(1);
   den_clone278->SetWeight(1);
   den_clone278->SetStatisticOption(0);
   den_clone278->SetPosteriorMode(0);
   den_clone278->SetShortestInterval(0);
   den_clone278->SetTotalEvents(0,0);
   den_clone278->SetPassedEvents(0,0);
   den_clone278->SetTotalEvents(1,815);
   den_clone278->SetPassedEvents(1,624);
   den_clone278->SetTotalEvents(2,1938);
   den_clone278->SetPassedEvents(2,1716);
   den_clone278->SetTotalEvents(3,2262);
   den_clone278->SetPassedEvents(3,2125);
   den_clone278->SetTotalEvents(4,2057);
   den_clone278->SetPassedEvents(4,1918);
   den_clone278->SetTotalEvents(5,2257);
   den_clone278->SetPassedEvents(5,2095);
   den_clone278->SetTotalEvents(6,2038);
   den_clone278->SetPassedEvents(6,1833);
   den_clone278->SetTotalEvents(7,2180);
   den_clone278->SetPassedEvents(7,1692);
   den_clone278->SetTotalEvents(8,2318);
   den_clone278->SetPassedEvents(8,1940);
   den_clone278->SetTotalEvents(9,2116);
   den_clone278->SetPassedEvents(9,1980);
   den_clone278->SetTotalEvents(10,2256);
   den_clone278->SetPassedEvents(10,2092);
   den_clone278->SetTotalEvents(11,2269);
   den_clone278->SetPassedEvents(11,2127);
   den_clone278->SetTotalEvents(12,2195);
   den_clone278->SetPassedEvents(12,2035);
   den_clone278->SetTotalEvents(13,2180);
   den_clone278->SetPassedEvents(13,2002);
   den_clone278->SetTotalEvents(14,2109);
   den_clone278->SetPassedEvents(14,1656);
   den_clone278->SetTotalEvents(15,2089);
   den_clone278->SetPassedEvents(15,1594);
   den_clone278->SetTotalEvents(16,2216);
   den_clone278->SetPassedEvents(16,1983);
   den_clone278->SetTotalEvents(17,2214);
   den_clone278->SetPassedEvents(17,2047);
   den_clone278->SetTotalEvents(18,2194);
   den_clone278->SetPassedEvents(18,2040);
   den_clone278->SetTotalEvents(19,2250);
   den_clone278->SetPassedEvents(19,2073);
   den_clone278->SetTotalEvents(20,2188);
   den_clone278->SetPassedEvents(20,2011);
   den_clone278->SetTotalEvents(21,2154);
   den_clone278->SetPassedEvents(21,1948);
   den_clone278->SetTotalEvents(22,2232);
   den_clone278->SetPassedEvents(22,2027);
   den_clone278->SetTotalEvents(23,2234);
   den_clone278->SetPassedEvents(23,2012);
   den_clone278->SetTotalEvents(24,2084);
   den_clone278->SetPassedEvents(24,1869);
   den_clone278->SetTotalEvents(25,2196);
   den_clone278->SetPassedEvents(25,1947);
   den_clone278->SetTotalEvents(26,0);
   den_clone278->SetPassedEvents(26,0);
   den_clone278->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone278->SetLineColor(ci);
   den_clone278->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone278->SetMarkerColor(ci);
   den_clone278->SetMarkerStyle(21);
   den_clone278->Draw("same samep");
   
   TEfficiency * den_clone279 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone279->SetConfidenceLevel(0.6826895);
   den_clone279->SetBetaAlpha(1);
   den_clone279->SetBetaBeta(1);
   den_clone279->SetWeight(1);
   den_clone279->SetStatisticOption(0);
   den_clone279->SetPosteriorMode(0);
   den_clone279->SetShortestInterval(0);
   den_clone279->SetTotalEvents(0,0);
   den_clone279->SetPassedEvents(0,0);
   den_clone279->SetTotalEvents(1,815);
   den_clone279->SetPassedEvents(1,603);
   den_clone279->SetTotalEvents(2,1938);
   den_clone279->SetPassedEvents(2,1682);
   den_clone279->SetTotalEvents(3,2262);
   den_clone279->SetPassedEvents(3,2067);
   den_clone279->SetTotalEvents(4,2057);
   den_clone279->SetPassedEvents(4,1901);
   den_clone279->SetTotalEvents(5,2257);
   den_clone279->SetPassedEvents(5,2064);
   den_clone279->SetTotalEvents(6,2038);
   den_clone279->SetPassedEvents(6,1797);
   den_clone279->SetTotalEvents(7,2180);
   den_clone279->SetPassedEvents(7,1594);
   den_clone279->SetTotalEvents(8,2318);
   den_clone279->SetPassedEvents(8,1844);
   den_clone279->SetTotalEvents(9,2116);
   den_clone279->SetPassedEvents(9,1959);
   den_clone279->SetTotalEvents(10,2256);
   den_clone279->SetPassedEvents(10,2076);
   den_clone279->SetTotalEvents(11,2269);
   den_clone279->SetPassedEvents(11,2073);
   den_clone279->SetTotalEvents(12,2195);
   den_clone279->SetPassedEvents(12,1975);
   den_clone279->SetTotalEvents(13,2180);
   den_clone279->SetPassedEvents(13,1963);
   den_clone279->SetTotalEvents(14,2109);
   den_clone279->SetPassedEvents(14,1568);
   den_clone279->SetTotalEvents(15,2089);
   den_clone279->SetPassedEvents(15,1460);
   den_clone279->SetTotalEvents(16,2216);
   den_clone279->SetPassedEvents(16,1867);
   den_clone279->SetTotalEvents(17,2214);
   den_clone279->SetPassedEvents(17,1908);
   den_clone279->SetTotalEvents(18,2194);
   den_clone279->SetPassedEvents(18,1887);
   den_clone279->SetTotalEvents(19,2250);
   den_clone279->SetPassedEvents(19,1955);
   den_clone279->SetTotalEvents(20,2188);
   den_clone279->SetPassedEvents(20,1855);
   den_clone279->SetTotalEvents(21,2154);
   den_clone279->SetPassedEvents(21,1805);
   den_clone279->SetTotalEvents(22,2232);
   den_clone279->SetPassedEvents(22,1862);
   den_clone279->SetTotalEvents(23,2234);
   den_clone279->SetPassedEvents(23,1853);
   den_clone279->SetTotalEvents(24,2084);
   den_clone279->SetPassedEvents(24,1714);
   den_clone279->SetTotalEvents(25,2196);
   den_clone279->SetPassedEvents(25,1750);
   den_clone279->SetTotalEvents(26,0);
   den_clone279->SetPassedEvents(26,0);
   den_clone279->SetFillColor(19);
   den_clone279->SetLineWidth(2);
   den_clone279->SetMarkerStyle(23);
   den_clone279->Draw("same samep");
   
   TEfficiency * den_clone280 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone280->SetConfidenceLevel(0.6826895);
   den_clone280->SetBetaAlpha(1);
   den_clone280->SetBetaBeta(1);
   den_clone280->SetWeight(1);
   den_clone280->SetStatisticOption(0);
   den_clone280->SetPosteriorMode(0);
   den_clone280->SetShortestInterval(0);
   den_clone280->SetTotalEvents(0,0);
   den_clone280->SetPassedEvents(0,0);
   den_clone280->SetTotalEvents(1,249);
   den_clone280->SetPassedEvents(1,217);
   den_clone280->SetTotalEvents(2,657);
   den_clone280->SetPassedEvents(2,618);
   den_clone280->SetTotalEvents(3,852);
   den_clone280->SetPassedEvents(3,821);
   den_clone280->SetTotalEvents(4,777);
   den_clone280->SetPassedEvents(4,750);
   den_clone280->SetTotalEvents(5,791);
   den_clone280->SetPassedEvents(5,772);
   den_clone280->SetTotalEvents(6,768);
   den_clone280->SetPassedEvents(6,703);
   den_clone280->SetTotalEvents(7,773);
   den_clone280->SetPassedEvents(7,644);
   den_clone280->SetTotalEvents(8,778);
   den_clone280->SetPassedEvents(8,695);
   den_clone280->SetTotalEvents(9,761);
   den_clone280->SetPassedEvents(9,726);
   den_clone280->SetTotalEvents(10,760);
   den_clone280->SetPassedEvents(10,718);
   den_clone280->SetTotalEvents(11,774);
   den_clone280->SetPassedEvents(11,739);
   den_clone280->SetTotalEvents(12,783);
   den_clone280->SetPassedEvents(12,744);
   den_clone280->SetTotalEvents(13,792);
   den_clone280->SetPassedEvents(13,758);
   den_clone280->SetTotalEvents(14,631);
   den_clone280->SetPassedEvents(14,551);
   den_clone280->SetTotalEvents(15,608);
   den_clone280->SetPassedEvents(15,542);
   den_clone280->SetTotalEvents(16,779);
   den_clone280->SetPassedEvents(16,729);
   den_clone280->SetTotalEvents(17,787);
   den_clone280->SetPassedEvents(17,739);
   den_clone280->SetTotalEvents(18,768);
   den_clone280->SetPassedEvents(18,719);
   den_clone280->SetTotalEvents(19,816);
   den_clone280->SetPassedEvents(19,770);
   den_clone280->SetTotalEvents(20,795);
   den_clone280->SetPassedEvents(20,738);
   den_clone280->SetTotalEvents(21,752);
   den_clone280->SetPassedEvents(21,697);
   den_clone280->SetTotalEvents(22,863);
   den_clone280->SetPassedEvents(22,810);
   den_clone280->SetTotalEvents(23,740);
   den_clone280->SetPassedEvents(23,688);
   den_clone280->SetTotalEvents(24,856);
   den_clone280->SetPassedEvents(24,786);
   den_clone280->SetTotalEvents(25,730);
   den_clone280->SetPassedEvents(25,672);
   den_clone280->SetTotalEvents(26,0);
   den_clone280->SetPassedEvents(26,0);
   den_clone280->SetFillColor(19);

   ci = TColor::GetColor("#00cc00");
   den_clone280->SetLineColor(ci);
   den_clone280->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   den_clone280->SetMarkerColor(ci);
   den_clone280->SetMarkerStyle(23);
   den_clone280->Draw("same samep");
   
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
   text = new TText(0.17,0.24,"LCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
