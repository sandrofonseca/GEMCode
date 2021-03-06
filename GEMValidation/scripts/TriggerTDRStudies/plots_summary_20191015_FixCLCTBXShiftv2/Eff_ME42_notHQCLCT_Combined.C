void Eff_ME42_notHQCLCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 14 21:57:38 2019) by ROOT version 6.14/09
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
   
   TH1F *base__154 = new TH1F("base__154","",25,1.1,1.8);
   base__154->SetMinimum(0.5);
   base__154->SetMaximum(1.025);
   base__154->SetLineStyle(0);
   base__154->SetMarkerStyle(20);
   base__154->GetXaxis()->SetTitle("True muon |#eta|");
   base__154->GetXaxis()->SetLabelFont(42);
   base__154->GetXaxis()->SetLabelOffset(0.007);
   base__154->GetXaxis()->SetLabelSize(0.05);
   base__154->GetXaxis()->SetTitleSize(0.06);
   base__154->GetXaxis()->SetTitleOffset(0.9);
   base__154->GetXaxis()->SetTitleFont(42);
   base__154->GetYaxis()->SetTitle("Efficiency");
   base__154->GetYaxis()->SetLabelFont(42);
   base__154->GetYaxis()->SetLabelOffset(0.007);
   base__154->GetYaxis()->SetLabelSize(0.05);
   base__154->GetYaxis()->SetTitleSize(0.06);
   base__154->GetYaxis()->SetTitleOffset(0.9);
   base__154->GetYaxis()->SetTitleFont(42);
   base__154->GetZaxis()->SetLabelFont(42);
   base__154->GetZaxis()->SetLabelOffset(0.007);
   base__154->GetZaxis()->SetLabelSize(0.05);
   base__154->GetZaxis()->SetTitleSize(0.06);
   base__154->GetZaxis()->SetTitleFont(42);
   base__154->Draw("");
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
   
   TEfficiency * den_clone438 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone438->SetConfidenceLevel(0.6826895);
   den_clone438->SetBetaAlpha(1);
   den_clone438->SetBetaBeta(1);
   den_clone438->SetWeight(1);
   den_clone438->SetStatisticOption(0);
   den_clone438->SetPosteriorMode(0);
   den_clone438->SetShortestInterval(0);
   den_clone438->SetTotalEvents(0,0);
   den_clone438->SetPassedEvents(0,0);
   den_clone438->SetTotalEvents(1,15);
   den_clone438->SetPassedEvents(1,0);
   den_clone438->SetTotalEvents(2,49);
   den_clone438->SetPassedEvents(2,5);
   den_clone438->SetTotalEvents(3,365);
   den_clone438->SetPassedEvents(3,91);
   den_clone438->SetTotalEvents(4,1528);
   den_clone438->SetPassedEvents(4,135);
   den_clone438->SetTotalEvents(5,1998);
   den_clone438->SetPassedEvents(5,69);
   den_clone438->SetTotalEvents(6,1867);
   den_clone438->SetPassedEvents(6,112);
   den_clone438->SetTotalEvents(7,1882);
   den_clone438->SetPassedEvents(7,127);
   den_clone438->SetTotalEvents(8,2038);
   den_clone438->SetPassedEvents(8,72);
   den_clone438->SetTotalEvents(9,1957);
   den_clone438->SetPassedEvents(9,140);
   den_clone438->SetTotalEvents(10,1907);
   den_clone438->SetPassedEvents(10,138);
   den_clone438->SetTotalEvents(11,1928);
   den_clone438->SetPassedEvents(11,76);
   den_clone438->SetTotalEvents(12,1994);
   den_clone438->SetPassedEvents(12,91);
   den_clone438->SetTotalEvents(13,1910);
   den_clone438->SetPassedEvents(13,196);
   den_clone438->SetTotalEvents(14,1837);
   den_clone438->SetPassedEvents(14,131);
   den_clone438->SetTotalEvents(15,1967);
   den_clone438->SetPassedEvents(15,69);
   den_clone438->SetTotalEvents(16,1864);
   den_clone438->SetPassedEvents(16,84);
   den_clone438->SetTotalEvents(17,1753);
   den_clone438->SetPassedEvents(17,262);
   den_clone438->SetTotalEvents(18,1982);
   den_clone438->SetPassedEvents(18,226);
   den_clone438->SetTotalEvents(19,1802);
   den_clone438->SetPassedEvents(19,81);
   den_clone438->SetTotalEvents(20,1925);
   den_clone438->SetPassedEvents(20,70);
   den_clone438->SetTotalEvents(21,1900);
   den_clone438->SetPassedEvents(21,81);
   den_clone438->SetTotalEvents(22,1946);
   den_clone438->SetPassedEvents(22,82);
   den_clone438->SetTotalEvents(23,1858);
   den_clone438->SetPassedEvents(23,125);
   den_clone438->SetTotalEvents(24,939);
   den_clone438->SetPassedEvents(24,218);
   den_clone438->SetTotalEvents(25,32);
   den_clone438->SetPassedEvents(25,19);
   den_clone438->SetTotalEvents(26,0);
   den_clone438->SetPassedEvents(26,0);
   den_clone438->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone438->SetLineColor(ci);
   den_clone438->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone438->SetMarkerColor(ci);
   den_clone438->SetMarkerStyle(22);
   den_clone438->Draw("same samep");
   
   TEfficiency * den_clone439 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone439->SetConfidenceLevel(0.6826895);
   den_clone439->SetBetaAlpha(1);
   den_clone439->SetBetaBeta(1);
   den_clone439->SetWeight(1);
   den_clone439->SetStatisticOption(0);
   den_clone439->SetPosteriorMode(0);
   den_clone439->SetShortestInterval(0);
   den_clone439->SetTotalEvents(0,0);
   den_clone439->SetPassedEvents(0,0);
   den_clone439->SetTotalEvents(1,12);
   den_clone439->SetPassedEvents(1,2);
   den_clone439->SetTotalEvents(2,33);
   den_clone439->SetPassedEvents(2,3);
   den_clone439->SetTotalEvents(3,378);
   den_clone439->SetPassedEvents(3,114);
   den_clone439->SetTotalEvents(4,1482);
   den_clone439->SetPassedEvents(4,155);
   den_clone439->SetTotalEvents(5,1960);
   den_clone439->SetPassedEvents(5,70);
   den_clone439->SetTotalEvents(6,1946);
   den_clone439->SetPassedEvents(6,138);
   den_clone439->SetTotalEvents(7,2014);
   den_clone439->SetPassedEvents(7,129);
   den_clone439->SetTotalEvents(8,1984);
   den_clone439->SetPassedEvents(8,80);
   den_clone439->SetTotalEvents(9,1927);
   den_clone439->SetPassedEvents(9,135);
   den_clone439->SetTotalEvents(10,1815);
   den_clone439->SetPassedEvents(10,138);
   den_clone439->SetTotalEvents(11,2052);
   den_clone439->SetPassedEvents(11,73);
   den_clone439->SetTotalEvents(12,1874);
   den_clone439->SetPassedEvents(12,95);
   den_clone439->SetTotalEvents(13,1997);
   den_clone439->SetPassedEvents(13,219);
   den_clone439->SetTotalEvents(14,1964);
   den_clone439->SetPassedEvents(14,154);
   den_clone439->SetTotalEvents(15,1853);
   den_clone439->SetPassedEvents(15,93);
   den_clone439->SetTotalEvents(16,2061);
   den_clone439->SetPassedEvents(16,109);
   den_clone439->SetTotalEvents(17,1946);
   den_clone439->SetPassedEvents(17,287);
   den_clone439->SetTotalEvents(18,1899);
   den_clone439->SetPassedEvents(18,223);
   den_clone439->SetTotalEvents(19,1921);
   den_clone439->SetPassedEvents(19,95);
   den_clone439->SetTotalEvents(20,1951);
   den_clone439->SetPassedEvents(20,106);
   den_clone439->SetTotalEvents(21,1903);
   den_clone439->SetPassedEvents(21,94);
   den_clone439->SetTotalEvents(22,1814);
   den_clone439->SetPassedEvents(22,88);
   den_clone439->SetTotalEvents(23,1798);
   den_clone439->SetPassedEvents(23,133);
   den_clone439->SetTotalEvents(24,977);
   den_clone439->SetPassedEvents(24,221);
   den_clone439->SetTotalEvents(25,35);
   den_clone439->SetPassedEvents(25,22);
   den_clone439->SetTotalEvents(26,0);
   den_clone439->SetPassedEvents(26,0);
   den_clone439->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone439->SetLineColor(ci);
   den_clone439->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone439->SetMarkerColor(ci);
   den_clone439->SetMarkerStyle(21);
   den_clone439->Draw("same samep");
   
   TEfficiency * den_clone440 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone440->SetConfidenceLevel(0.6826895);
   den_clone440->SetBetaAlpha(1);
   den_clone440->SetBetaBeta(1);
   den_clone440->SetWeight(1);
   den_clone440->SetStatisticOption(0);
   den_clone440->SetPosteriorMode(0);
   den_clone440->SetShortestInterval(0);
   den_clone440->SetTotalEvents(0,0);
   den_clone440->SetPassedEvents(0,0);
   den_clone440->SetTotalEvents(1,12);
   den_clone440->SetPassedEvents(1,2);
   den_clone440->SetTotalEvents(2,33);
   den_clone440->SetPassedEvents(2,3);
   den_clone440->SetTotalEvents(3,378);
   den_clone440->SetPassedEvents(3,114);
   den_clone440->SetTotalEvents(4,1482);
   den_clone440->SetPassedEvents(4,155);
   den_clone440->SetTotalEvents(5,1960);
   den_clone440->SetPassedEvents(5,70);
   den_clone440->SetTotalEvents(6,1946);
   den_clone440->SetPassedEvents(6,138);
   den_clone440->SetTotalEvents(7,2014);
   den_clone440->SetPassedEvents(7,129);
   den_clone440->SetTotalEvents(8,1984);
   den_clone440->SetPassedEvents(8,80);
   den_clone440->SetTotalEvents(9,1927);
   den_clone440->SetPassedEvents(9,135);
   den_clone440->SetTotalEvents(10,1815);
   den_clone440->SetPassedEvents(10,138);
   den_clone440->SetTotalEvents(11,2052);
   den_clone440->SetPassedEvents(11,73);
   den_clone440->SetTotalEvents(12,1874);
   den_clone440->SetPassedEvents(12,95);
   den_clone440->SetTotalEvents(13,1997);
   den_clone440->SetPassedEvents(13,219);
   den_clone440->SetTotalEvents(14,1964);
   den_clone440->SetPassedEvents(14,154);
   den_clone440->SetTotalEvents(15,1853);
   den_clone440->SetPassedEvents(15,93);
   den_clone440->SetTotalEvents(16,2061);
   den_clone440->SetPassedEvents(16,109);
   den_clone440->SetTotalEvents(17,1946);
   den_clone440->SetPassedEvents(17,287);
   den_clone440->SetTotalEvents(18,1899);
   den_clone440->SetPassedEvents(18,223);
   den_clone440->SetTotalEvents(19,1921);
   den_clone440->SetPassedEvents(19,95);
   den_clone440->SetTotalEvents(20,1951);
   den_clone440->SetPassedEvents(20,106);
   den_clone440->SetTotalEvents(21,1903);
   den_clone440->SetPassedEvents(21,94);
   den_clone440->SetTotalEvents(22,1814);
   den_clone440->SetPassedEvents(22,88);
   den_clone440->SetTotalEvents(23,1798);
   den_clone440->SetPassedEvents(23,133);
   den_clone440->SetTotalEvents(24,977);
   den_clone440->SetPassedEvents(24,221);
   den_clone440->SetTotalEvents(25,35);
   den_clone440->SetPassedEvents(25,22);
   den_clone440->SetTotalEvents(26,0);
   den_clone440->SetPassedEvents(26,0);
   den_clone440->SetFillColor(19);
   den_clone440->SetLineWidth(2);
   den_clone440->SetMarkerStyle(23);
   den_clone440->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME4/2");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"notHQCLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
