void Eff_ME42_LCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Oct  6 01:02:49 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1,0.42125,1.833333,1.0775);
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
   
   TH1F *base__35 = new TH1F("base__35","",25,1.1,1.8);
   base__35->SetMinimum(0.5);
   base__35->SetMaximum(1.025);
   base__35->SetLineStyle(0);
   base__35->SetMarkerStyle(20);
   base__35->GetXaxis()->SetTitle("True muon |#eta|");
   base__35->GetXaxis()->SetLabelFont(42);
   base__35->GetXaxis()->SetLabelOffset(0.007);
   base__35->GetXaxis()->SetLabelSize(0.05);
   base__35->GetXaxis()->SetTitleSize(0.06);
   base__35->GetXaxis()->SetTitleOffset(0.9);
   base__35->GetXaxis()->SetTitleFont(42);
   base__35->GetYaxis()->SetTitle("Efficiency");
   base__35->GetYaxis()->SetLabelFont(42);
   base__35->GetYaxis()->SetLabelOffset(0.007);
   base__35->GetYaxis()->SetLabelSize(0.05);
   base__35->GetYaxis()->SetTitleSize(0.06);
   base__35->GetYaxis()->SetTitleOffset(0.9);
   base__35->GetYaxis()->SetTitleFont(42);
   base__35->GetZaxis()->SetLabelFont(42);
   base__35->GetZaxis()->SetLabelOffset(0.007);
   base__35->GetZaxis()->SetLabelSize(0.05);
   base__35->GetZaxis()->SetTitleSize(0.06);
   base__35->GetZaxis()->SetTitleFont(42);
   base__35->Draw("");
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
   
   TEfficiency * den_clone105 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone105->SetConfidenceLevel(0.6826895);
   den_clone105->SetBetaAlpha(1);
   den_clone105->SetBetaBeta(1);
   den_clone105->SetWeight(1);
   den_clone105->SetStatisticOption(0);
   den_clone105->SetPosteriorMode(0);
   den_clone105->SetShortestInterval(0);
   den_clone105->SetTotalEvents(0,0);
   den_clone105->SetPassedEvents(0,0);
   den_clone105->SetTotalEvents(1,15);
   den_clone105->SetPassedEvents(1,15);
   den_clone105->SetTotalEvents(2,49);
   den_clone105->SetPassedEvents(2,45);
   den_clone105->SetTotalEvents(3,365);
   den_clone105->SetPassedEvents(3,282);
   den_clone105->SetTotalEvents(4,1528);
   den_clone105->SetPassedEvents(4,1443);
   den_clone105->SetTotalEvents(5,1998);
   den_clone105->SetPassedEvents(5,1981);
   den_clone105->SetTotalEvents(6,1867);
   den_clone105->SetPassedEvents(6,1819);
   den_clone105->SetTotalEvents(7,1882);
   den_clone105->SetPassedEvents(7,1819);
   den_clone105->SetTotalEvents(8,2038);
   den_clone105->SetPassedEvents(8,2012);
   den_clone105->SetTotalEvents(9,1957);
   den_clone105->SetPassedEvents(9,1871);
   den_clone105->SetTotalEvents(10,1907);
   den_clone105->SetPassedEvents(10,1810);
   den_clone105->SetTotalEvents(11,1928);
   den_clone105->SetPassedEvents(11,1896);
   den_clone105->SetTotalEvents(12,1994);
   den_clone105->SetPassedEvents(12,1947);
   den_clone105->SetTotalEvents(13,1910);
   den_clone105->SetPassedEvents(13,1767);
   den_clone105->SetTotalEvents(14,1837);
   den_clone105->SetPassedEvents(14,1754);
   den_clone105->SetTotalEvents(15,1967);
   den_clone105->SetPassedEvents(15,1932);
   den_clone105->SetTotalEvents(16,1864);
   den_clone105->SetPassedEvents(16,1818);
   den_clone105->SetTotalEvents(17,1753);
   den_clone105->SetPassedEvents(17,1533);
   den_clone105->SetTotalEvents(18,1982);
   den_clone105->SetPassedEvents(18,1807);
   den_clone105->SetTotalEvents(19,1802);
   den_clone105->SetPassedEvents(19,1761);
   den_clone105->SetTotalEvents(20,1925);
   den_clone105->SetPassedEvents(20,1892);
   den_clone105->SetTotalEvents(21,1900);
   den_clone105->SetPassedEvents(21,1854);
   den_clone105->SetTotalEvents(22,1946);
   den_clone105->SetPassedEvents(22,1894);
   den_clone105->SetTotalEvents(23,1858);
   den_clone105->SetPassedEvents(23,1763);
   den_clone105->SetTotalEvents(24,939);
   den_clone105->SetPassedEvents(24,741);
   den_clone105->SetTotalEvents(25,32);
   den_clone105->SetPassedEvents(25,13);
   den_clone105->SetTotalEvents(26,0);
   den_clone105->SetPassedEvents(26,0);
   den_clone105->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone105->SetLineColor(ci);
   den_clone105->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone105->SetMarkerColor(ci);
   den_clone105->SetMarkerStyle(22);
   den_clone105->Draw("same samep");
   
   TEfficiency * den_clone106 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone106->SetConfidenceLevel(0.6826895);
   den_clone106->SetBetaAlpha(1);
   den_clone106->SetBetaBeta(1);
   den_clone106->SetWeight(1);
   den_clone106->SetStatisticOption(0);
   den_clone106->SetPosteriorMode(0);
   den_clone106->SetShortestInterval(0);
   den_clone106->SetTotalEvents(0,0);
   den_clone106->SetPassedEvents(0,0);
   den_clone106->SetTotalEvents(1,12);
   den_clone106->SetPassedEvents(1,10);
   den_clone106->SetTotalEvents(2,33);
   den_clone106->SetPassedEvents(2,30);
   den_clone106->SetTotalEvents(3,378);
   den_clone106->SetPassedEvents(3,275);
   den_clone106->SetTotalEvents(4,1482);
   den_clone106->SetPassedEvents(4,1375);
   den_clone106->SetTotalEvents(5,1960);
   den_clone106->SetPassedEvents(5,1933);
   den_clone106->SetTotalEvents(6,1946);
   den_clone106->SetPassedEvents(6,1853);
   den_clone106->SetTotalEvents(7,2014);
   den_clone106->SetPassedEvents(7,1950);
   den_clone106->SetTotalEvents(8,1984);
   den_clone106->SetPassedEvents(8,1952);
   den_clone106->SetTotalEvents(9,1927);
   den_clone106->SetPassedEvents(9,1837);
   den_clone106->SetTotalEvents(10,1815);
   den_clone106->SetPassedEvents(10,1736);
   den_clone106->SetTotalEvents(11,2052);
   den_clone106->SetPassedEvents(11,2017);
   den_clone106->SetTotalEvents(12,1874);
   den_clone106->SetPassedEvents(12,1818);
   den_clone106->SetTotalEvents(13,1997);
   den_clone106->SetPassedEvents(13,1831);
   den_clone106->SetTotalEvents(14,1964);
   den_clone106->SetPassedEvents(14,1857);
   den_clone106->SetTotalEvents(15,1853);
   den_clone106->SetPassedEvents(15,1807);
   den_clone106->SetTotalEvents(16,2061);
   den_clone106->SetPassedEvents(16,2000);
   den_clone106->SetTotalEvents(17,1946);
   den_clone106->SetPassedEvents(17,1708);
   den_clone106->SetTotalEvents(18,1899);
   den_clone106->SetPassedEvents(18,1717);
   den_clone106->SetTotalEvents(19,1921);
   den_clone106->SetPassedEvents(19,1871);
   den_clone106->SetTotalEvents(20,1951);
   den_clone106->SetPassedEvents(20,1888);
   den_clone106->SetTotalEvents(21,1903);
   den_clone106->SetPassedEvents(21,1845);
   den_clone106->SetTotalEvents(22,1814);
   den_clone106->SetPassedEvents(22,1761);
   den_clone106->SetTotalEvents(23,1798);
   den_clone106->SetPassedEvents(23,1696);
   den_clone106->SetTotalEvents(24,977);
   den_clone106->SetPassedEvents(24,785);
   den_clone106->SetTotalEvents(25,35);
   den_clone106->SetPassedEvents(25,13);
   den_clone106->SetTotalEvents(26,0);
   den_clone106->SetPassedEvents(26,0);
   den_clone106->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone106->SetLineColor(ci);
   den_clone106->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone106->SetMarkerColor(ci);
   den_clone106->SetMarkerStyle(21);
   den_clone106->Draw("same samep");
   
   TEfficiency * den_clone107 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone107->SetConfidenceLevel(0.6826895);
   den_clone107->SetBetaAlpha(1);
   den_clone107->SetBetaBeta(1);
   den_clone107->SetWeight(1);
   den_clone107->SetStatisticOption(0);
   den_clone107->SetPosteriorMode(0);
   den_clone107->SetShortestInterval(0);
   den_clone107->SetTotalEvents(0,0);
   den_clone107->SetPassedEvents(0,0);
   den_clone107->SetTotalEvents(1,12);
   den_clone107->SetPassedEvents(1,10);
   den_clone107->SetTotalEvents(2,33);
   den_clone107->SetPassedEvents(2,30);
   den_clone107->SetTotalEvents(3,378);
   den_clone107->SetPassedEvents(3,275);
   den_clone107->SetTotalEvents(4,1482);
   den_clone107->SetPassedEvents(4,1375);
   den_clone107->SetTotalEvents(5,1960);
   den_clone107->SetPassedEvents(5,1933);
   den_clone107->SetTotalEvents(6,1946);
   den_clone107->SetPassedEvents(6,1853);
   den_clone107->SetTotalEvents(7,2014);
   den_clone107->SetPassedEvents(7,1950);
   den_clone107->SetTotalEvents(8,1984);
   den_clone107->SetPassedEvents(8,1952);
   den_clone107->SetTotalEvents(9,1927);
   den_clone107->SetPassedEvents(9,1837);
   den_clone107->SetTotalEvents(10,1815);
   den_clone107->SetPassedEvents(10,1736);
   den_clone107->SetTotalEvents(11,2052);
   den_clone107->SetPassedEvents(11,2017);
   den_clone107->SetTotalEvents(12,1874);
   den_clone107->SetPassedEvents(12,1818);
   den_clone107->SetTotalEvents(13,1997);
   den_clone107->SetPassedEvents(13,1831);
   den_clone107->SetTotalEvents(14,1964);
   den_clone107->SetPassedEvents(14,1857);
   den_clone107->SetTotalEvents(15,1853);
   den_clone107->SetPassedEvents(15,1807);
   den_clone107->SetTotalEvents(16,2061);
   den_clone107->SetPassedEvents(16,2000);
   den_clone107->SetTotalEvents(17,1946);
   den_clone107->SetPassedEvents(17,1708);
   den_clone107->SetTotalEvents(18,1899);
   den_clone107->SetPassedEvents(18,1717);
   den_clone107->SetTotalEvents(19,1921);
   den_clone107->SetPassedEvents(19,1871);
   den_clone107->SetTotalEvents(20,1951);
   den_clone107->SetPassedEvents(20,1888);
   den_clone107->SetTotalEvents(21,1903);
   den_clone107->SetPassedEvents(21,1845);
   den_clone107->SetTotalEvents(22,1814);
   den_clone107->SetPassedEvents(22,1761);
   den_clone107->SetTotalEvents(23,1798);
   den_clone107->SetPassedEvents(23,1696);
   den_clone107->SetTotalEvents(24,977);
   den_clone107->SetPassedEvents(24,785);
   den_clone107->SetTotalEvents(25,35);
   den_clone107->SetPassedEvents(25,13);
   den_clone107->SetTotalEvents(26,0);
   den_clone107->SetPassedEvents(26,0);
   den_clone107->SetFillColor(19);
   den_clone107->SetLineWidth(2);
   den_clone107->SetMarkerStyle(23);
   den_clone107->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME4/2");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"LCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
