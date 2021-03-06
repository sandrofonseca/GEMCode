void Eff_ME42_CLCT_Combined_PU300()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 14 21:57:32 2019) by ROOT version 6.14/09
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
   
   TH1F *base__147 = new TH1F("base__147","",25,1.1,1.8);
   base__147->SetMinimum(0.5);
   base__147->SetMaximum(1.025);
   base__147->SetLineStyle(0);
   base__147->SetMarkerStyle(20);
   base__147->GetXaxis()->SetTitle("True muon |#eta|");
   base__147->GetXaxis()->SetLabelFont(42);
   base__147->GetXaxis()->SetLabelOffset(0.007);
   base__147->GetXaxis()->SetLabelSize(0.05);
   base__147->GetXaxis()->SetTitleSize(0.06);
   base__147->GetXaxis()->SetTitleOffset(0.9);
   base__147->GetXaxis()->SetTitleFont(42);
   base__147->GetYaxis()->SetTitle("Efficiency");
   base__147->GetYaxis()->SetLabelFont(42);
   base__147->GetYaxis()->SetLabelOffset(0.007);
   base__147->GetYaxis()->SetLabelSize(0.05);
   base__147->GetYaxis()->SetTitleSize(0.06);
   base__147->GetYaxis()->SetTitleOffset(0.9);
   base__147->GetYaxis()->SetTitleFont(42);
   base__147->GetZaxis()->SetLabelFont(42);
   base__147->GetZaxis()->SetLabelOffset(0.007);
   base__147->GetZaxis()->SetLabelSize(0.05);
   base__147->GetZaxis()->SetTitleSize(0.06);
   base__147->GetZaxis()->SetTitleFont(42);
   base__147->Draw("");
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
   
   TEfficiency * den_clone419 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone419->SetConfidenceLevel(0.6826895);
   den_clone419->SetBetaAlpha(1);
   den_clone419->SetBetaBeta(1);
   den_clone419->SetWeight(1);
   den_clone419->SetStatisticOption(0);
   den_clone419->SetPosteriorMode(0);
   den_clone419->SetShortestInterval(0);
   den_clone419->SetTotalEvents(0,0);
   den_clone419->SetPassedEvents(0,0);
   den_clone419->SetTotalEvents(1,12);
   den_clone419->SetPassedEvents(1,10);
   den_clone419->SetTotalEvents(2,33);
   den_clone419->SetPassedEvents(2,30);
   den_clone419->SetTotalEvents(3,378);
   den_clone419->SetPassedEvents(3,264);
   den_clone419->SetTotalEvents(4,1482);
   den_clone419->SetPassedEvents(4,1327);
   den_clone419->SetTotalEvents(5,1960);
   den_clone419->SetPassedEvents(5,1890);
   den_clone419->SetTotalEvents(6,1946);
   den_clone419->SetPassedEvents(6,1808);
   den_clone419->SetTotalEvents(7,2014);
   den_clone419->SetPassedEvents(7,1885);
   den_clone419->SetTotalEvents(8,1984);
   den_clone419->SetPassedEvents(8,1904);
   den_clone419->SetTotalEvents(9,1927);
   den_clone419->SetPassedEvents(9,1792);
   den_clone419->SetTotalEvents(10,1815);
   den_clone419->SetPassedEvents(10,1677);
   den_clone419->SetTotalEvents(11,2052);
   den_clone419->SetPassedEvents(11,1979);
   den_clone419->SetTotalEvents(12,1874);
   den_clone419->SetPassedEvents(12,1779);
   den_clone419->SetTotalEvents(13,1997);
   den_clone419->SetPassedEvents(13,1778);
   den_clone419->SetTotalEvents(14,1964);
   den_clone419->SetPassedEvents(14,1810);
   den_clone419->SetTotalEvents(15,1853);
   den_clone419->SetPassedEvents(15,1760);
   den_clone419->SetTotalEvents(16,2061);
   den_clone419->SetPassedEvents(16,1952);
   den_clone419->SetTotalEvents(17,1946);
   den_clone419->SetPassedEvents(17,1659);
   den_clone419->SetTotalEvents(18,1899);
   den_clone419->SetPassedEvents(18,1676);
   den_clone419->SetTotalEvents(19,1921);
   den_clone419->SetPassedEvents(19,1826);
   den_clone419->SetTotalEvents(20,1951);
   den_clone419->SetPassedEvents(20,1845);
   den_clone419->SetTotalEvents(21,1903);
   den_clone419->SetPassedEvents(21,1809);
   den_clone419->SetTotalEvents(22,1814);
   den_clone419->SetPassedEvents(22,1726);
   den_clone419->SetTotalEvents(23,1798);
   den_clone419->SetPassedEvents(23,1665);
   den_clone419->SetTotalEvents(24,977);
   den_clone419->SetPassedEvents(24,756);
   den_clone419->SetTotalEvents(25,35);
   den_clone419->SetPassedEvents(25,13);
   den_clone419->SetTotalEvents(26,0);
   den_clone419->SetPassedEvents(26,0);
   den_clone419->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   den_clone419->SetLineColor(ci);
   den_clone419->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone419->SetMarkerColor(ci);
   den_clone419->SetMarkerStyle(23);
   den_clone419->Draw("same samep");
   
   TEfficiency * den_clone420 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone420->SetConfidenceLevel(0.6826895);
   den_clone420->SetBetaAlpha(1);
   den_clone420->SetBetaBeta(1);
   den_clone420->SetWeight(1);
   den_clone420->SetStatisticOption(0);
   den_clone420->SetPosteriorMode(0);
   den_clone420->SetShortestInterval(0);
   den_clone420->SetTotalEvents(0,0);
   den_clone420->SetPassedEvents(0,0);
   den_clone420->SetTotalEvents(1,12);
   den_clone420->SetPassedEvents(1,10);
   den_clone420->SetTotalEvents(2,33);
   den_clone420->SetPassedEvents(2,30);
   den_clone420->SetTotalEvents(3,378);
   den_clone420->SetPassedEvents(3,264);
   den_clone420->SetTotalEvents(4,1482);
   den_clone420->SetPassedEvents(4,1327);
   den_clone420->SetTotalEvents(5,1960);
   den_clone420->SetPassedEvents(5,1890);
   den_clone420->SetTotalEvents(6,1946);
   den_clone420->SetPassedEvents(6,1808);
   den_clone420->SetTotalEvents(7,2014);
   den_clone420->SetPassedEvents(7,1885);
   den_clone420->SetTotalEvents(8,1984);
   den_clone420->SetPassedEvents(8,1904);
   den_clone420->SetTotalEvents(9,1927);
   den_clone420->SetPassedEvents(9,1792);
   den_clone420->SetTotalEvents(10,1815);
   den_clone420->SetPassedEvents(10,1677);
   den_clone420->SetTotalEvents(11,2052);
   den_clone420->SetPassedEvents(11,1979);
   den_clone420->SetTotalEvents(12,1874);
   den_clone420->SetPassedEvents(12,1779);
   den_clone420->SetTotalEvents(13,1997);
   den_clone420->SetPassedEvents(13,1778);
   den_clone420->SetTotalEvents(14,1964);
   den_clone420->SetPassedEvents(14,1810);
   den_clone420->SetTotalEvents(15,1853);
   den_clone420->SetPassedEvents(15,1760);
   den_clone420->SetTotalEvents(16,2061);
   den_clone420->SetPassedEvents(16,1952);
   den_clone420->SetTotalEvents(17,1946);
   den_clone420->SetPassedEvents(17,1659);
   den_clone420->SetTotalEvents(18,1899);
   den_clone420->SetPassedEvents(18,1676);
   den_clone420->SetTotalEvents(19,1921);
   den_clone420->SetPassedEvents(19,1826);
   den_clone420->SetTotalEvents(20,1951);
   den_clone420->SetPassedEvents(20,1845);
   den_clone420->SetTotalEvents(21,1903);
   den_clone420->SetPassedEvents(21,1809);
   den_clone420->SetTotalEvents(22,1814);
   den_clone420->SetPassedEvents(22,1726);
   den_clone420->SetTotalEvents(23,1798);
   den_clone420->SetPassedEvents(23,1665);
   den_clone420->SetTotalEvents(24,977);
   den_clone420->SetPassedEvents(24,756);
   den_clone420->SetTotalEvents(25,35);
   den_clone420->SetPassedEvents(25,13);
   den_clone420->SetTotalEvents(26,0);
   den_clone420->SetPassedEvents(26,0);
   den_clone420->SetFillColor(19);
   den_clone420->SetLineWidth(2);
   den_clone420->SetMarkerStyle(22);
   den_clone420->Draw("same samep");
   
   TEfficiency * den_clone421 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone421->SetConfidenceLevel(0.6826895);
   den_clone421->SetBetaAlpha(1);
   den_clone421->SetBetaBeta(1);
   den_clone421->SetWeight(1);
   den_clone421->SetStatisticOption(0);
   den_clone421->SetPosteriorMode(0);
   den_clone421->SetShortestInterval(0);
   den_clone421->SetTotalEvents(0,0);
   den_clone421->SetPassedEvents(0,0);
   den_clone421->SetTotalEvents(1,12);
   den_clone421->SetPassedEvents(1,10);
   den_clone421->SetTotalEvents(2,33);
   den_clone421->SetPassedEvents(2,30);
   den_clone421->SetTotalEvents(3,378);
   den_clone421->SetPassedEvents(3,264);
   den_clone421->SetTotalEvents(4,1482);
   den_clone421->SetPassedEvents(4,1327);
   den_clone421->SetTotalEvents(5,1960);
   den_clone421->SetPassedEvents(5,1890);
   den_clone421->SetTotalEvents(6,1946);
   den_clone421->SetPassedEvents(6,1808);
   den_clone421->SetTotalEvents(7,2014);
   den_clone421->SetPassedEvents(7,1885);
   den_clone421->SetTotalEvents(8,1984);
   den_clone421->SetPassedEvents(8,1904);
   den_clone421->SetTotalEvents(9,1927);
   den_clone421->SetPassedEvents(9,1792);
   den_clone421->SetTotalEvents(10,1815);
   den_clone421->SetPassedEvents(10,1677);
   den_clone421->SetTotalEvents(11,2052);
   den_clone421->SetPassedEvents(11,1979);
   den_clone421->SetTotalEvents(12,1874);
   den_clone421->SetPassedEvents(12,1779);
   den_clone421->SetTotalEvents(13,1997);
   den_clone421->SetPassedEvents(13,1778);
   den_clone421->SetTotalEvents(14,1964);
   den_clone421->SetPassedEvents(14,1810);
   den_clone421->SetTotalEvents(15,1853);
   den_clone421->SetPassedEvents(15,1760);
   den_clone421->SetTotalEvents(16,2061);
   den_clone421->SetPassedEvents(16,1952);
   den_clone421->SetTotalEvents(17,1946);
   den_clone421->SetPassedEvents(17,1659);
   den_clone421->SetTotalEvents(18,1899);
   den_clone421->SetPassedEvents(18,1676);
   den_clone421->SetTotalEvents(19,1921);
   den_clone421->SetPassedEvents(19,1826);
   den_clone421->SetTotalEvents(20,1951);
   den_clone421->SetPassedEvents(20,1845);
   den_clone421->SetTotalEvents(21,1903);
   den_clone421->SetPassedEvents(21,1809);
   den_clone421->SetTotalEvents(22,1814);
   den_clone421->SetPassedEvents(22,1726);
   den_clone421->SetTotalEvents(23,1798);
   den_clone421->SetPassedEvents(23,1665);
   den_clone421->SetTotalEvents(24,977);
   den_clone421->SetPassedEvents(24,756);
   den_clone421->SetTotalEvents(25,35);
   den_clone421->SetPassedEvents(25,13);
   den_clone421->SetTotalEvents(26,0);
   den_clone421->SetPassedEvents(26,0);
   den_clone421->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   den_clone421->SetLineColor(ci);
   den_clone421->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   den_clone421->SetMarkerColor(ci);
   den_clone421->SetMarkerStyle(21);
   den_clone421->Draw("same samep");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("den_clone","PU200 CSC Run-2","pl");
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
   entry=leg->AddEntry("den_clone","PU200 GEM-CSC","pl");
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
   text = new TText(0.17,0.24,"CLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
