void Eff_ME31_notCLCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct  9 14:19:44 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.6,-0.15375,2.433333,1.1275);
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
   
   TH1F *base__49 = new TH1F("base__49","",25,1.7,2.4);
   base__49->SetMinimum(0);
   base__49->SetMaximum(1.025);
   base__49->SetLineStyle(0);
   base__49->SetMarkerStyle(20);
   base__49->GetXaxis()->SetTitle("True muon |#eta|");
   base__49->GetXaxis()->SetLabelFont(42);
   base__49->GetXaxis()->SetLabelOffset(0.007);
   base__49->GetXaxis()->SetLabelSize(0.05);
   base__49->GetXaxis()->SetTitleSize(0.06);
   base__49->GetXaxis()->SetTitleOffset(0.9);
   base__49->GetXaxis()->SetTitleFont(42);
   base__49->GetYaxis()->SetTitle("Efficiency");
   base__49->GetYaxis()->SetLabelFont(42);
   base__49->GetYaxis()->SetLabelOffset(0.007);
   base__49->GetYaxis()->SetLabelSize(0.05);
   base__49->GetYaxis()->SetTitleSize(0.06);
   base__49->GetYaxis()->SetTitleOffset(0.9);
   base__49->GetYaxis()->SetTitleFont(42);
   base__49->GetZaxis()->SetLabelFont(42);
   base__49->GetZaxis()->SetLabelOffset(0.007);
   base__49->GetZaxis()->SetLabelSize(0.05);
   base__49->GetZaxis()->SetTitleSize(0.06);
   base__49->GetZaxis()->SetTitleFont(42);
   base__49->Draw("");
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
   
   TEfficiency * den_clone193 = new TEfficiency("den_clone","",25,1.7,2.4);
   
   den_clone193->SetConfidenceLevel(0.6826895);
   den_clone193->SetBetaAlpha(1);
   den_clone193->SetBetaBeta(1);
   den_clone193->SetWeight(1);
   den_clone193->SetStatisticOption(0);
   den_clone193->SetPosteriorMode(0);
   den_clone193->SetShortestInterval(0);
   den_clone193->SetTotalEvents(0,0);
   den_clone193->SetPassedEvents(0,0);
   den_clone193->SetTotalEvents(1,199);
   den_clone193->SetPassedEvents(1,79);
   den_clone193->SetTotalEvents(2,1045);
   den_clone193->SetPassedEvents(2,180);
   den_clone193->SetTotalEvents(3,1934);
   den_clone193->SetPassedEvents(3,108);
   den_clone193->SetTotalEvents(4,1973);
   den_clone193->SetPassedEvents(4,82);
   den_clone193->SetTotalEvents(5,1973);
   den_clone193->SetPassedEvents(5,93);
   den_clone193->SetTotalEvents(6,1905);
   den_clone193->SetPassedEvents(6,85);
   den_clone193->SetTotalEvents(7,1918);
   den_clone193->SetPassedEvents(7,97);
   den_clone193->SetTotalEvents(8,1906);
   den_clone193->SetPassedEvents(8,415);
   den_clone193->SetTotalEvents(9,1997);
   den_clone193->SetPassedEvents(9,486);
   den_clone193->SetTotalEvents(10,1962);
   den_clone193->SetPassedEvents(10,125);
   den_clone193->SetTotalEvents(11,1936);
   den_clone193->SetPassedEvents(11,83);
   den_clone193->SetTotalEvents(12,1940);
   den_clone193->SetPassedEvents(12,79);
   den_clone193->SetTotalEvents(13,1872);
   den_clone193->SetPassedEvents(13,83);
   den_clone193->SetTotalEvents(14,1829);
   den_clone193->SetPassedEvents(14,88);
   den_clone193->SetTotalEvents(15,1799);
   den_clone193->SetPassedEvents(15,86);
   den_clone193->SetTotalEvents(16,1916);
   den_clone193->SetPassedEvents(16,198);
   den_clone193->SetTotalEvents(17,1729);
   den_clone193->SetPassedEvents(17,370);
   den_clone193->SetTotalEvents(18,1822);
   den_clone193->SetPassedEvents(18,253);
   den_clone193->SetTotalEvents(19,1974);
   den_clone193->SetPassedEvents(19,93);
   den_clone193->SetTotalEvents(20,2010);
   den_clone193->SetPassedEvents(20,129);
   den_clone193->SetTotalEvents(21,1916);
   den_clone193->SetPassedEvents(21,124);
   den_clone193->SetTotalEvents(22,1949);
   den_clone193->SetPassedEvents(22,108);
   den_clone193->SetTotalEvents(23,1994);
   den_clone193->SetPassedEvents(23,148);
   den_clone193->SetTotalEvents(24,1950);
   den_clone193->SetPassedEvents(24,119);
   den_clone193->SetTotalEvents(25,1895);
   den_clone193->SetPassedEvents(25,154);
   den_clone193->SetTotalEvents(26,0);
   den_clone193->SetPassedEvents(26,0);
   den_clone193->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone193->SetLineColor(ci);
   den_clone193->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone193->SetMarkerColor(ci);
   den_clone193->SetMarkerStyle(22);
   den_clone193->Draw("same samep");
   
   TEfficiency * den_clone194 = new TEfficiency("den_clone","",25,1.7,2.4);
   
   den_clone194->SetConfidenceLevel(0.6826895);
   den_clone194->SetBetaAlpha(1);
   den_clone194->SetBetaBeta(1);
   den_clone194->SetWeight(1);
   den_clone194->SetStatisticOption(0);
   den_clone194->SetPosteriorMode(0);
   den_clone194->SetShortestInterval(0);
   den_clone194->SetTotalEvents(0,0);
   den_clone194->SetPassedEvents(0,0);
   den_clone194->SetTotalEvents(1,201);
   den_clone194->SetPassedEvents(1,76);
   den_clone194->SetTotalEvents(2,1175);
   den_clone194->SetPassedEvents(2,193);
   den_clone194->SetTotalEvents(3,1773);
   den_clone194->SetPassedEvents(3,160);
   den_clone194->SetTotalEvents(4,1857);
   den_clone194->SetPassedEvents(4,135);
   den_clone194->SetTotalEvents(5,2022);
   den_clone194->SetPassedEvents(5,123);
   den_clone194->SetTotalEvents(6,1936);
   den_clone194->SetPassedEvents(6,133);
   den_clone194->SetTotalEvents(7,1885);
   den_clone194->SetPassedEvents(7,120);
   den_clone194->SetTotalEvents(8,1930);
   den_clone194->SetPassedEvents(8,435);
   den_clone194->SetTotalEvents(9,2006);
   den_clone194->SetPassedEvents(9,510);
   den_clone194->SetTotalEvents(10,1919);
   den_clone194->SetPassedEvents(10,161);
   den_clone194->SetTotalEvents(11,1948);
   den_clone194->SetPassedEvents(11,134);
   den_clone194->SetTotalEvents(12,1895);
   den_clone194->SetPassedEvents(12,139);
   den_clone194->SetTotalEvents(13,1940);
   den_clone194->SetPassedEvents(13,128);
   den_clone194->SetTotalEvents(14,1976);
   den_clone194->SetPassedEvents(14,131);
   den_clone194->SetTotalEvents(15,1915);
   den_clone194->SetPassedEvents(15,129);
   den_clone194->SetTotalEvents(16,1826);
   den_clone194->SetPassedEvents(16,236);
   den_clone194->SetTotalEvents(17,1724);
   den_clone194->SetPassedEvents(17,389);
   den_clone194->SetTotalEvents(18,1798);
   den_clone194->SetPassedEvents(18,261);
   den_clone194->SetTotalEvents(19,1915);
   den_clone194->SetPassedEvents(19,135);
   den_clone194->SetTotalEvents(20,1924);
   den_clone194->SetPassedEvents(20,163);
   den_clone194->SetTotalEvents(21,1930);
   den_clone194->SetPassedEvents(21,159);
   den_clone194->SetTotalEvents(22,1936);
   den_clone194->SetPassedEvents(22,155);
   den_clone194->SetTotalEvents(23,1955);
   den_clone194->SetPassedEvents(23,158);
   den_clone194->SetTotalEvents(24,1818);
   den_clone194->SetPassedEvents(24,155);
   den_clone194->SetTotalEvents(25,1891);
   den_clone194->SetPassedEvents(25,206);
   den_clone194->SetTotalEvents(26,0);
   den_clone194->SetPassedEvents(26,0);
   den_clone194->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone194->SetLineColor(ci);
   den_clone194->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone194->SetMarkerColor(ci);
   den_clone194->SetMarkerStyle(21);
   den_clone194->Draw("same samep");
   
   TEfficiency * den_clone195 = new TEfficiency("den_clone","",25,1.7,2.4);
   
   den_clone195->SetConfidenceLevel(0.6826895);
   den_clone195->SetBetaAlpha(1);
   den_clone195->SetBetaBeta(1);
   den_clone195->SetWeight(1);
   den_clone195->SetStatisticOption(0);
   den_clone195->SetPosteriorMode(0);
   den_clone195->SetShortestInterval(0);
   den_clone195->SetTotalEvents(0,0);
   den_clone195->SetPassedEvents(0,0);
   den_clone195->SetTotalEvents(1,201);
   den_clone195->SetPassedEvents(1,72);
   den_clone195->SetTotalEvents(2,1175);
   den_clone195->SetPassedEvents(2,170);
   den_clone195->SetTotalEvents(3,1773);
   den_clone195->SetPassedEvents(3,121);
   den_clone195->SetTotalEvents(4,1857);
   den_clone195->SetPassedEvents(4,80);
   den_clone195->SetTotalEvents(5,2022);
   den_clone195->SetPassedEvents(5,73);
   den_clone195->SetTotalEvents(6,1936);
   den_clone195->SetPassedEvents(6,80);
   den_clone195->SetTotalEvents(7,1885);
   den_clone195->SetPassedEvents(7,65);
   den_clone195->SetTotalEvents(8,1930);
   den_clone195->SetPassedEvents(8,385);
   den_clone195->SetTotalEvents(9,2006);
   den_clone195->SetPassedEvents(9,475);
   den_clone195->SetTotalEvents(10,1919);
   den_clone195->SetPassedEvents(10,105);
   den_clone195->SetTotalEvents(11,1948);
   den_clone195->SetPassedEvents(11,76);
   den_clone195->SetTotalEvents(12,1895);
   den_clone195->SetPassedEvents(12,85);
   den_clone195->SetTotalEvents(13,1940);
   den_clone195->SetPassedEvents(13,71);
   den_clone195->SetTotalEvents(14,1976);
   den_clone195->SetPassedEvents(14,80);
   den_clone195->SetTotalEvents(15,1915);
   den_clone195->SetPassedEvents(15,77);
   den_clone195->SetTotalEvents(16,1826);
   den_clone195->SetPassedEvents(16,183);
   den_clone195->SetTotalEvents(17,1724);
   den_clone195->SetPassedEvents(17,354);
   den_clone195->SetTotalEvents(18,1798);
   den_clone195->SetPassedEvents(18,217);
   den_clone195->SetTotalEvents(19,1915);
   den_clone195->SetPassedEvents(19,87);
   den_clone195->SetTotalEvents(20,1924);
   den_clone195->SetPassedEvents(20,111);
   den_clone195->SetTotalEvents(21,1930);
   den_clone195->SetPassedEvents(21,97);
   den_clone195->SetTotalEvents(22,1936);
   den_clone195->SetPassedEvents(22,104);
   den_clone195->SetTotalEvents(23,1955);
   den_clone195->SetPassedEvents(23,107);
   den_clone195->SetTotalEvents(24,1818);
   den_clone195->SetPassedEvents(24,107);
   den_clone195->SetTotalEvents(25,1891);
   den_clone195->SetPassedEvents(25,158);
   den_clone195->SetTotalEvents(26,0);
   den_clone195->SetPassedEvents(26,0);
   den_clone195->SetFillColor(19);
   den_clone195->SetLineWidth(2);
   den_clone195->SetMarkerStyle(23);
   den_clone195->Draw("same samep");
   
   TEfficiency * den_clone196 = new TEfficiency("den_clone","",25,1.7,2.4);
   
   den_clone196->SetConfidenceLevel(0.6826895);
   den_clone196->SetBetaAlpha(1);
   den_clone196->SetBetaBeta(1);
   den_clone196->SetWeight(1);
   den_clone196->SetStatisticOption(0);
   den_clone196->SetPosteriorMode(0);
   den_clone196->SetShortestInterval(0);
   den_clone196->SetTotalEvents(0,0);
   den_clone196->SetPassedEvents(0,0);
   den_clone196->SetTotalEvents(1,61);
   den_clone196->SetPassedEvents(1,13);
   den_clone196->SetTotalEvents(2,394);
   den_clone196->SetPassedEvents(2,38);
   den_clone196->SetTotalEvents(3,662);
   den_clone196->SetPassedEvents(3,27);
   den_clone196->SetTotalEvents(4,748);
   den_clone196->SetPassedEvents(4,31);
   den_clone196->SetTotalEvents(5,777);
   den_clone196->SetPassedEvents(5,33);
   den_clone196->SetTotalEvents(6,643);
   den_clone196->SetPassedEvents(6,17);
   den_clone196->SetTotalEvents(7,686);
   den_clone196->SetPassedEvents(7,35);
   den_clone196->SetTotalEvents(8,554);
   den_clone196->SetPassedEvents(8,46);
   den_clone196->SetTotalEvents(9,569);
   den_clone196->SetPassedEvents(9,51);
   den_clone196->SetTotalEvents(10,682);
   den_clone196->SetPassedEvents(10,40);
   den_clone196->SetTotalEvents(11,658);
   den_clone196->SetPassedEvents(11,33);
   den_clone196->SetTotalEvents(12,703);
   den_clone196->SetPassedEvents(12,28);
   den_clone196->SetTotalEvents(13,694);
   den_clone196->SetPassedEvents(13,25);
   den_clone196->SetTotalEvents(14,646);
   den_clone196->SetPassedEvents(14,26);
   den_clone196->SetTotalEvents(15,723);
   den_clone196->SetPassedEvents(15,36);
   den_clone196->SetTotalEvents(16,611);
   den_clone196->SetPassedEvents(16,38);
   den_clone196->SetTotalEvents(17,513);
   den_clone196->SetPassedEvents(17,56);
   den_clone196->SetTotalEvents(18,634);
   den_clone196->SetPassedEvents(18,46);
   den_clone196->SetTotalEvents(19,731);
   den_clone196->SetPassedEvents(19,37);
   den_clone196->SetTotalEvents(20,654);
   den_clone196->SetPassedEvents(20,38);
   den_clone196->SetTotalEvents(21,684);
   den_clone196->SetPassedEvents(21,34);
   den_clone196->SetTotalEvents(22,736);
   den_clone196->SetPassedEvents(22,47);
   den_clone196->SetTotalEvents(23,686);
   den_clone196->SetPassedEvents(23,34);
   den_clone196->SetTotalEvents(24,736);
   den_clone196->SetPassedEvents(24,62);
   den_clone196->SetTotalEvents(25,602);
   den_clone196->SetPassedEvents(25,56);
   den_clone196->SetTotalEvents(26,0);
   den_clone196->SetPassedEvents(26,0);
   den_clone196->SetFillColor(19);

   ci = TColor::GetColor("#00cc00");
   den_clone196->SetLineColor(ci);
   den_clone196->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   den_clone196->SetMarkerColor(ci);
   den_clone196->SetMarkerStyle(23);
   den_clone196->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME3/1");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"notCLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
