void Eff_ME21_CLCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 17 16:27:47 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.485714,-0.15375,2.438095,1.1275);
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
   
   TH1F *base__79 = new TH1F("base__79","",25,1.6,2.4);
   base__79->SetMinimum(0);
   base__79->SetMaximum(1.025);
   base__79->SetLineStyle(0);
   base__79->SetMarkerStyle(20);
   base__79->GetXaxis()->SetTitle("True muon |#eta|");
   base__79->GetXaxis()->SetLabelFont(42);
   base__79->GetXaxis()->SetLabelOffset(0.007);
   base__79->GetXaxis()->SetLabelSize(0.05);
   base__79->GetXaxis()->SetTitleSize(0.06);
   base__79->GetXaxis()->SetTitleOffset(0.9);
   base__79->GetXaxis()->SetTitleFont(42);
   base__79->GetYaxis()->SetTitle("Efficiency");
   base__79->GetYaxis()->SetLabelFont(42);
   base__79->GetYaxis()->SetLabelOffset(0.007);
   base__79->GetYaxis()->SetLabelSize(0.05);
   base__79->GetYaxis()->SetTitleSize(0.06);
   base__79->GetYaxis()->SetTitleOffset(0.9);
   base__79->GetYaxis()->SetTitleFont(42);
   base__79->GetZaxis()->SetLabelFont(42);
   base__79->GetZaxis()->SetLabelOffset(0.007);
   base__79->GetZaxis()->SetLabelSize(0.05);
   base__79->GetZaxis()->SetTitleSize(0.06);
   base__79->GetZaxis()->SetTitleFont(42);
   base__79->Draw("");
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
   
   TEfficiency * den_clone225 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone225->SetConfidenceLevel(0.6826895);
   den_clone225->SetBetaAlpha(1);
   den_clone225->SetBetaBeta(1);
   den_clone225->SetWeight(1);
   den_clone225->SetStatisticOption(0);
   den_clone225->SetPosteriorMode(0);
   den_clone225->SetShortestInterval(0);
   den_clone225->SetTotalEvents(0,0);
   den_clone225->SetPassedEvents(0,0);
   den_clone225->SetTotalEvents(1,735);
   den_clone225->SetPassedEvents(1,573);
   den_clone225->SetTotalEvents(2,1988);
   den_clone225->SetPassedEvents(2,1795);
   den_clone225->SetTotalEvents(3,2149);
   den_clone225->SetPassedEvents(3,2076);
   den_clone225->SetTotalEvents(4,2366);
   den_clone225->SetPassedEvents(4,2283);
   den_clone225->SetTotalEvents(5,2041);
   den_clone225->SetPassedEvents(5,1951);
   den_clone225->SetTotalEvents(6,2277);
   den_clone225->SetPassedEvents(6,2119);
   den_clone225->SetTotalEvents(7,2246);
   den_clone225->SetPassedEvents(7,1740);
   den_clone225->SetTotalEvents(8,2210);
   den_clone225->SetPassedEvents(8,1874);
   den_clone225->SetTotalEvents(9,2202);
   den_clone225->SetPassedEvents(9,2112);
   den_clone225->SetTotalEvents(10,2144);
   den_clone225->SetPassedEvents(10,2052);
   den_clone225->SetTotalEvents(11,2307);
   den_clone225->SetPassedEvents(11,2206);
   den_clone225->SetTotalEvents(12,2235);
   den_clone225->SetPassedEvents(12,2131);
   den_clone225->SetTotalEvents(13,2241);
   den_clone225->SetPassedEvents(13,2125);
   den_clone225->SetTotalEvents(14,2069);
   den_clone225->SetPassedEvents(14,1614);
   den_clone225->SetTotalEvents(15,1901);
   den_clone225->SetPassedEvents(15,1447);
   den_clone225->SetTotalEvents(16,2116);
   den_clone225->SetPassedEvents(16,1976);
   den_clone225->SetTotalEvents(17,2218);
   den_clone225->SetPassedEvents(17,2104);
   den_clone225->SetTotalEvents(18,2288);
   den_clone225->SetPassedEvents(18,2170);
   den_clone225->SetTotalEvents(19,2198);
   den_clone225->SetPassedEvents(19,2072);
   den_clone225->SetTotalEvents(20,2322);
   den_clone225->SetPassedEvents(20,2186);
   den_clone225->SetTotalEvents(21,2256);
   den_clone225->SetPassedEvents(21,2116);
   den_clone225->SetTotalEvents(22,2163);
   den_clone225->SetPassedEvents(22,1992);
   den_clone225->SetTotalEvents(23,2314);
   den_clone225->SetPassedEvents(23,2133);
   den_clone225->SetTotalEvents(24,2192);
   den_clone225->SetPassedEvents(24,2017);
   den_clone225->SetTotalEvents(25,2217);
   den_clone225->SetPassedEvents(25,2015);
   den_clone225->SetTotalEvents(26,0);
   den_clone225->SetPassedEvents(26,0);
   den_clone225->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone225->SetLineColor(ci);
   den_clone225->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone225->SetMarkerColor(ci);
   den_clone225->SetMarkerStyle(22);
   den_clone225->Draw("same samep");
   
   TEfficiency * den_clone226 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone226->SetConfidenceLevel(0.6826895);
   den_clone226->SetBetaAlpha(1);
   den_clone226->SetBetaBeta(1);
   den_clone226->SetWeight(1);
   den_clone226->SetStatisticOption(0);
   den_clone226->SetPosteriorMode(0);
   den_clone226->SetShortestInterval(0);
   den_clone226->SetTotalEvents(0,0);
   den_clone226->SetPassedEvents(0,0);
   den_clone226->SetTotalEvents(1,779);
   den_clone226->SetPassedEvents(1,569);
   den_clone226->SetTotalEvents(2,1882);
   den_clone226->SetPassedEvents(2,1636);
   den_clone226->SetTotalEvents(3,2194);
   den_clone226->SetPassedEvents(3,2023);
   den_clone226->SetTotalEvents(4,1987);
   den_clone226->SetPassedEvents(4,1815);
   den_clone226->SetTotalEvents(5,2187);
   den_clone226->SetPassedEvents(5,2002);
   den_clone226->SetTotalEvents(6,1962);
   den_clone226->SetPassedEvents(6,1717);
   den_clone226->SetTotalEvents(7,2116);
   den_clone226->SetPassedEvents(7,1555);
   den_clone226->SetTotalEvents(8,2222);
   den_clone226->SetPassedEvents(8,1789);
   den_clone226->SetTotalEvents(9,2040);
   den_clone226->SetPassedEvents(9,1867);
   den_clone226->SetTotalEvents(10,2172);
   den_clone226->SetPassedEvents(10,1967);
   den_clone226->SetTotalEvents(11,2189);
   den_clone226->SetPassedEvents(11,2020);
   den_clone226->SetTotalEvents(12,2097);
   den_clone226->SetPassedEvents(12,1906);
   den_clone226->SetTotalEvents(13,2102);
   den_clone226->SetPassedEvents(13,1900);
   den_clone226->SetTotalEvents(14,2047);
   den_clone226->SetPassedEvents(14,1529);
   den_clone226->SetTotalEvents(15,2000);
   den_clone226->SetPassedEvents(15,1464);
   den_clone226->SetTotalEvents(16,2129);
   den_clone226->SetPassedEvents(16,1869);
   den_clone226->SetTotalEvents(17,2140);
   den_clone226->SetPassedEvents(17,1939);
   den_clone226->SetTotalEvents(18,2122);
   den_clone226->SetPassedEvents(18,1916);
   den_clone226->SetTotalEvents(19,2180);
   den_clone226->SetPassedEvents(19,1966);
   den_clone226->SetTotalEvents(20,2100);
   den_clone226->SetPassedEvents(20,1894);
   den_clone226->SetTotalEvents(21,2070);
   den_clone226->SetPassedEvents(21,1830);
   den_clone226->SetTotalEvents(22,2134);
   den_clone226->SetPassedEvents(22,1890);
   den_clone226->SetTotalEvents(23,2148);
   den_clone226->SetPassedEvents(23,1878);
   den_clone226->SetTotalEvents(24,2010);
   den_clone226->SetPassedEvents(24,1767);
   den_clone226->SetTotalEvents(25,2094);
   den_clone226->SetPassedEvents(25,1811);
   den_clone226->SetTotalEvents(26,0);
   den_clone226->SetPassedEvents(26,0);
   den_clone226->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone226->SetLineColor(ci);
   den_clone226->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone226->SetMarkerColor(ci);
   den_clone226->SetMarkerStyle(21);
   den_clone226->Draw("same samep");
   
   TEfficiency * den_clone227 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone227->SetConfidenceLevel(0.6826895);
   den_clone227->SetBetaAlpha(1);
   den_clone227->SetBetaBeta(1);
   den_clone227->SetWeight(1);
   den_clone227->SetStatisticOption(0);
   den_clone227->SetPosteriorMode(0);
   den_clone227->SetShortestInterval(0);
   den_clone227->SetTotalEvents(0,0);
   den_clone227->SetPassedEvents(0,0);
   den_clone227->SetTotalEvents(1,788);
   den_clone227->SetPassedEvents(1,599);
   den_clone227->SetTotalEvents(2,1850);
   den_clone227->SetPassedEvents(2,1682);
   den_clone227->SetTotalEvents(3,2132);
   den_clone227->SetPassedEvents(3,2066);
   den_clone227->SetTotalEvents(4,1961);
   den_clone227->SetPassedEvents(4,1883);
   den_clone227->SetTotalEvents(5,2159);
   den_clone227->SetPassedEvents(5,2077);
   den_clone227->SetTotalEvents(6,1948);
   den_clone227->SetPassedEvents(6,1784);
   den_clone227->SetTotalEvents(7,2066);
   den_clone227->SetPassedEvents(7,1603);
   den_clone227->SetTotalEvents(8,2210);
   den_clone227->SetPassedEvents(8,1871);
   den_clone227->SetTotalEvents(9,2024);
   den_clone227->SetPassedEvents(9,1938);
   den_clone227->SetTotalEvents(10,2138);
   den_clone227->SetPassedEvents(10,2056);
   den_clone227->SetTotalEvents(11,2171);
   den_clone227->SetPassedEvents(11,2099);
   den_clone227->SetTotalEvents(12,2088);
   den_clone227->SetPassedEvents(12,2001);
   den_clone227->SetTotalEvents(13,2062);
   den_clone227->SetPassedEvents(13,1976);
   den_clone227->SetTotalEvents(14,2030);
   den_clone227->SetPassedEvents(14,1604);
   den_clone227->SetTotalEvents(15,2000);
   den_clone227->SetPassedEvents(15,1541);
   den_clone227->SetTotalEvents(16,2125);
   den_clone227->SetPassedEvents(16,1970);
   den_clone227->SetTotalEvents(17,2116);
   den_clone227->SetPassedEvents(17,2008);
   den_clone227->SetTotalEvents(18,2080);
   den_clone227->SetPassedEvents(18,1962);
   den_clone227->SetTotalEvents(19,2140);
   den_clone227->SetPassedEvents(19,2027);
   den_clone227->SetTotalEvents(20,2084);
   den_clone227->SetPassedEvents(20,1965);
   den_clone227->SetTotalEvents(21,2044);
   den_clone227->SetPassedEvents(21,1906);
   den_clone227->SetTotalEvents(22,2130);
   den_clone227->SetPassedEvents(22,1981);
   den_clone227->SetTotalEvents(23,2114);
   den_clone227->SetPassedEvents(23,1951);
   den_clone227->SetTotalEvents(24,1988);
   den_clone227->SetPassedEvents(24,1845);
   den_clone227->SetTotalEvents(25,2087);
   den_clone227->SetPassedEvents(25,1885);
   den_clone227->SetTotalEvents(26,0);
   den_clone227->SetPassedEvents(26,0);
   den_clone227->SetFillColor(19);
   den_clone227->SetLineWidth(2);
   den_clone227->SetMarkerStyle(23);
   den_clone227->Draw("same samep");
   
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
   leg->Draw();
   TText *text = new TText(0.17,0.17,"ME2/1");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"CLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
