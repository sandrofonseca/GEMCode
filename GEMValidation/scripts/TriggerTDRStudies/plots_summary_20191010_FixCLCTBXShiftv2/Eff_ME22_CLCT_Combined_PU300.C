void Eff_ME22_CLCT_Combined_PU300()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 11 07:50:42 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(0.9142857,0.42125,1.628571,1.0775);
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
   
   TH1F *base__91 = new TH1F("base__91","",25,1,1.6);
   base__91->SetMinimum(0.5);
   base__91->SetMaximum(1.025);
   base__91->SetLineStyle(0);
   base__91->SetMarkerStyle(20);
   base__91->GetXaxis()->SetTitle("True muon |#eta|");
   base__91->GetXaxis()->SetLabelFont(42);
   base__91->GetXaxis()->SetLabelOffset(0.007);
   base__91->GetXaxis()->SetLabelSize(0.05);
   base__91->GetXaxis()->SetTitleSize(0.06);
   base__91->GetXaxis()->SetTitleOffset(0.9);
   base__91->GetXaxis()->SetTitleFont(42);
   base__91->GetYaxis()->SetTitle("Efficiency");
   base__91->GetYaxis()->SetLabelFont(42);
   base__91->GetYaxis()->SetLabelOffset(0.007);
   base__91->GetYaxis()->SetLabelSize(0.05);
   base__91->GetYaxis()->SetTitleSize(0.06);
   base__91->GetYaxis()->SetTitleOffset(0.9);
   base__91->GetYaxis()->SetTitleFont(42);
   base__91->GetZaxis()->SetLabelFont(42);
   base__91->GetZaxis()->SetLabelOffset(0.007);
   base__91->GetZaxis()->SetLabelSize(0.05);
   base__91->GetZaxis()->SetTitleSize(0.06);
   base__91->GetZaxis()->SetTitleFont(42);
   base__91->Draw("");
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
   
   TEfficiency * den_clone337 = new TEfficiency("den_clone","",25,1,1.6);
   
   den_clone337->SetConfidenceLevel(0.6826895);
   den_clone337->SetBetaAlpha(1);
   den_clone337->SetBetaBeta(1);
   den_clone337->SetWeight(1);
   den_clone337->SetStatisticOption(0);
   den_clone337->SetPosteriorMode(0);
   den_clone337->SetShortestInterval(0);
   den_clone337->SetTotalEvents(0,0);
   den_clone337->SetPassedEvents(0,0);
   den_clone337->SetTotalEvents(1,661);
   den_clone337->SetPassedEvents(1,535);
   den_clone337->SetTotalEvents(2,1447);
   den_clone337->SetPassedEvents(2,1329);
   den_clone337->SetTotalEvents(3,1653);
   den_clone337->SetPassedEvents(3,1591);
   den_clone337->SetTotalEvents(4,1576);
   den_clone337->SetPassedEvents(4,1515);
   den_clone337->SetTotalEvents(5,1546);
   den_clone337->SetPassedEvents(5,1470);
   den_clone337->SetTotalEvents(6,1515);
   den_clone337->SetPassedEvents(6,1473);
   den_clone337->SetTotalEvents(7,1658);
   den_clone337->SetPassedEvents(7,1577);
   den_clone337->SetTotalEvents(8,1664);
   den_clone337->SetPassedEvents(8,1563);
   den_clone337->SetTotalEvents(9,1619);
   den_clone337->SetPassedEvents(9,1566);
   den_clone337->SetTotalEvents(10,1699);
   den_clone337->SetPassedEvents(10,1644);
   den_clone337->SetTotalEvents(11,1658);
   den_clone337->SetPassedEvents(11,1555);
   den_clone337->SetTotalEvents(12,1727);
   den_clone337->SetPassedEvents(12,1615);
   den_clone337->SetTotalEvents(13,1713);
   den_clone337->SetPassedEvents(13,1651);
   den_clone337->SetTotalEvents(14,1631);
   den_clone337->SetPassedEvents(14,1585);
   den_clone337->SetTotalEvents(15,1649);
   den_clone337->SetPassedEvents(15,1574);
   den_clone337->SetTotalEvents(16,1566);
   den_clone337->SetPassedEvents(16,1398);
   den_clone337->SetTotalEvents(17,1784);
   den_clone337->SetPassedEvents(17,1619);
   den_clone337->SetTotalEvents(18,1572);
   den_clone337->SetPassedEvents(18,1520);
   den_clone337->SetTotalEvents(19,1752);
   den_clone337->SetPassedEvents(19,1698);
   den_clone337->SetTotalEvents(20,1661);
   den_clone337->SetPassedEvents(20,1602);
   den_clone337->SetTotalEvents(21,1604);
   den_clone337->SetPassedEvents(21,1537);
   den_clone337->SetTotalEvents(22,1589);
   den_clone337->SetPassedEvents(22,1508);
   den_clone337->SetTotalEvents(23,1526);
   den_clone337->SetPassedEvents(23,1303);
   den_clone337->SetTotalEvents(24,750);
   den_clone337->SetPassedEvents(24,587);
   den_clone337->SetTotalEvents(25,65);
   den_clone337->SetPassedEvents(25,21);
   den_clone337->SetTotalEvents(26,0);
   den_clone337->SetPassedEvents(26,0);
   den_clone337->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   den_clone337->SetLineColor(ci);
   den_clone337->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   den_clone337->SetMarkerColor(ci);
   den_clone337->SetMarkerStyle(23);
   den_clone337->Draw("same samep");
   
   TEfficiency * den_clone338 = new TEfficiency("den_clone","",25,1,1.6);
   
   den_clone338->SetConfidenceLevel(0.6826895);
   den_clone338->SetBetaAlpha(1);
   den_clone338->SetBetaBeta(1);
   den_clone338->SetWeight(1);
   den_clone338->SetStatisticOption(0);
   den_clone338->SetPosteriorMode(0);
   den_clone338->SetShortestInterval(0);
   den_clone338->SetTotalEvents(0,0);
   den_clone338->SetPassedEvents(0,0);
   den_clone338->SetTotalEvents(1,661);
   den_clone338->SetPassedEvents(1,535);
   den_clone338->SetTotalEvents(2,1447);
   den_clone338->SetPassedEvents(2,1329);
   den_clone338->SetTotalEvents(3,1653);
   den_clone338->SetPassedEvents(3,1591);
   den_clone338->SetTotalEvents(4,1576);
   den_clone338->SetPassedEvents(4,1515);
   den_clone338->SetTotalEvents(5,1546);
   den_clone338->SetPassedEvents(5,1470);
   den_clone338->SetTotalEvents(6,1515);
   den_clone338->SetPassedEvents(6,1473);
   den_clone338->SetTotalEvents(7,1658);
   den_clone338->SetPassedEvents(7,1577);
   den_clone338->SetTotalEvents(8,1664);
   den_clone338->SetPassedEvents(8,1563);
   den_clone338->SetTotalEvents(9,1619);
   den_clone338->SetPassedEvents(9,1566);
   den_clone338->SetTotalEvents(10,1699);
   den_clone338->SetPassedEvents(10,1644);
   den_clone338->SetTotalEvents(11,1658);
   den_clone338->SetPassedEvents(11,1555);
   den_clone338->SetTotalEvents(12,1727);
   den_clone338->SetPassedEvents(12,1615);
   den_clone338->SetTotalEvents(13,1713);
   den_clone338->SetPassedEvents(13,1651);
   den_clone338->SetTotalEvents(14,1631);
   den_clone338->SetPassedEvents(14,1585);
   den_clone338->SetTotalEvents(15,1649);
   den_clone338->SetPassedEvents(15,1574);
   den_clone338->SetTotalEvents(16,1566);
   den_clone338->SetPassedEvents(16,1398);
   den_clone338->SetTotalEvents(17,1784);
   den_clone338->SetPassedEvents(17,1619);
   den_clone338->SetTotalEvents(18,1572);
   den_clone338->SetPassedEvents(18,1520);
   den_clone338->SetTotalEvents(19,1752);
   den_clone338->SetPassedEvents(19,1698);
   den_clone338->SetTotalEvents(20,1661);
   den_clone338->SetPassedEvents(20,1602);
   den_clone338->SetTotalEvents(21,1604);
   den_clone338->SetPassedEvents(21,1537);
   den_clone338->SetTotalEvents(22,1589);
   den_clone338->SetPassedEvents(22,1508);
   den_clone338->SetTotalEvents(23,1526);
   den_clone338->SetPassedEvents(23,1303);
   den_clone338->SetTotalEvents(24,750);
   den_clone338->SetPassedEvents(24,587);
   den_clone338->SetTotalEvents(25,65);
   den_clone338->SetPassedEvents(25,21);
   den_clone338->SetTotalEvents(26,0);
   den_clone338->SetPassedEvents(26,0);
   den_clone338->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   den_clone338->SetLineColor(ci);
   den_clone338->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone338->SetMarkerColor(ci);
   den_clone338->SetMarkerStyle(22);
   den_clone338->Draw("same samep");
   
   TEfficiency * den_clone339 = new TEfficiency("den_clone","",25,1,1.6);
   
   den_clone339->SetConfidenceLevel(0.6826895);
   den_clone339->SetBetaAlpha(1);
   den_clone339->SetBetaBeta(1);
   den_clone339->SetWeight(1);
   den_clone339->SetStatisticOption(0);
   den_clone339->SetPosteriorMode(0);
   den_clone339->SetShortestInterval(0);
   den_clone339->SetTotalEvents(0,0);
   den_clone339->SetPassedEvents(0,0);
   den_clone339->SetTotalEvents(1,661);
   den_clone339->SetPassedEvents(1,535);
   den_clone339->SetTotalEvents(2,1447);
   den_clone339->SetPassedEvents(2,1329);
   den_clone339->SetTotalEvents(3,1653);
   den_clone339->SetPassedEvents(3,1591);
   den_clone339->SetTotalEvents(4,1576);
   den_clone339->SetPassedEvents(4,1515);
   den_clone339->SetTotalEvents(5,1546);
   den_clone339->SetPassedEvents(5,1470);
   den_clone339->SetTotalEvents(6,1515);
   den_clone339->SetPassedEvents(6,1473);
   den_clone339->SetTotalEvents(7,1658);
   den_clone339->SetPassedEvents(7,1577);
   den_clone339->SetTotalEvents(8,1664);
   den_clone339->SetPassedEvents(8,1563);
   den_clone339->SetTotalEvents(9,1619);
   den_clone339->SetPassedEvents(9,1566);
   den_clone339->SetTotalEvents(10,1699);
   den_clone339->SetPassedEvents(10,1644);
   den_clone339->SetTotalEvents(11,1658);
   den_clone339->SetPassedEvents(11,1555);
   den_clone339->SetTotalEvents(12,1727);
   den_clone339->SetPassedEvents(12,1615);
   den_clone339->SetTotalEvents(13,1713);
   den_clone339->SetPassedEvents(13,1651);
   den_clone339->SetTotalEvents(14,1631);
   den_clone339->SetPassedEvents(14,1585);
   den_clone339->SetTotalEvents(15,1649);
   den_clone339->SetPassedEvents(15,1574);
   den_clone339->SetTotalEvents(16,1566);
   den_clone339->SetPassedEvents(16,1398);
   den_clone339->SetTotalEvents(17,1784);
   den_clone339->SetPassedEvents(17,1619);
   den_clone339->SetTotalEvents(18,1572);
   den_clone339->SetPassedEvents(18,1520);
   den_clone339->SetTotalEvents(19,1752);
   den_clone339->SetPassedEvents(19,1698);
   den_clone339->SetTotalEvents(20,1661);
   den_clone339->SetPassedEvents(20,1602);
   den_clone339->SetTotalEvents(21,1604);
   den_clone339->SetPassedEvents(21,1537);
   den_clone339->SetTotalEvents(22,1589);
   den_clone339->SetPassedEvents(22,1508);
   den_clone339->SetTotalEvents(23,1526);
   den_clone339->SetPassedEvents(23,1303);
   den_clone339->SetTotalEvents(24,750);
   den_clone339->SetPassedEvents(24,587);
   den_clone339->SetTotalEvents(25,65);
   den_clone339->SetPassedEvents(25,21);
   den_clone339->SetTotalEvents(26,0);
   den_clone339->SetPassedEvents(26,0);
   den_clone339->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone339->SetLineColor(ci);
   den_clone339->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone339->SetMarkerColor(ci);
   den_clone339->SetMarkerStyle(21);
   den_clone339->Draw("same samep");
   
   TEfficiency * den_clone340 = new TEfficiency("den_clone","",25,1,1.6);
   
   den_clone340->SetConfidenceLevel(0.6826895);
   den_clone340->SetBetaAlpha(1);
   den_clone340->SetBetaBeta(1);
   den_clone340->SetWeight(1);
   den_clone340->SetStatisticOption(0);
   den_clone340->SetPosteriorMode(0);
   den_clone340->SetShortestInterval(0);
   den_clone340->SetTotalEvents(0,0);
   den_clone340->SetPassedEvents(0,0);
   den_clone340->SetTotalEvents(1,285);
   den_clone340->SetPassedEvents(1,223);
   den_clone340->SetTotalEvents(2,588);
   den_clone340->SetPassedEvents(2,539);
   den_clone340->SetTotalEvents(3,604);
   den_clone340->SetPassedEvents(3,578);
   den_clone340->SetTotalEvents(4,566);
   den_clone340->SetPassedEvents(4,543);
   den_clone340->SetTotalEvents(5,576);
   den_clone340->SetPassedEvents(5,546);
   den_clone340->SetTotalEvents(6,585);
   den_clone340->SetPassedEvents(6,575);
   den_clone340->SetTotalEvents(7,605);
   den_clone340->SetPassedEvents(7,569);
   den_clone340->SetTotalEvents(8,549);
   den_clone340->SetPassedEvents(8,508);
   den_clone340->SetTotalEvents(9,532);
   den_clone340->SetPassedEvents(9,521);
   den_clone340->SetTotalEvents(10,593);
   den_clone340->SetPassedEvents(10,573);
   den_clone340->SetTotalEvents(11,614);
   den_clone340->SetPassedEvents(11,562);
   den_clone340->SetTotalEvents(12,616);
   den_clone340->SetPassedEvents(12,573);
   den_clone340->SetTotalEvents(13,590);
   den_clone340->SetPassedEvents(13,568);
   den_clone340->SetTotalEvents(14,630);
   den_clone340->SetPassedEvents(14,603);
   den_clone340->SetTotalEvents(15,514);
   den_clone340->SetPassedEvents(15,486);
   den_clone340->SetTotalEvents(16,550);
   den_clone340->SetPassedEvents(16,501);
   den_clone340->SetTotalEvents(17,580);
   den_clone340->SetPassedEvents(17,529);
   den_clone340->SetTotalEvents(18,622);
   den_clone340->SetPassedEvents(18,597);
   den_clone340->SetTotalEvents(19,608);
   den_clone340->SetPassedEvents(19,591);
   den_clone340->SetTotalEvents(20,581);
   den_clone340->SetPassedEvents(20,561);
   den_clone340->SetTotalEvents(21,534);
   den_clone340->SetPassedEvents(21,515);
   den_clone340->SetTotalEvents(22,590);
   den_clone340->SetPassedEvents(22,566);
   den_clone340->SetTotalEvents(23,479);
   den_clone340->SetPassedEvents(23,421);
   den_clone340->SetTotalEvents(24,258);
   den_clone340->SetPassedEvents(24,206);
   den_clone340->SetTotalEvents(25,21);
   den_clone340->SetPassedEvents(25,10);
   den_clone340->SetTotalEvents(26,0);
   den_clone340->SetPassedEvents(26,0);
   den_clone340->SetFillColor(19);
   den_clone340->SetLineWidth(2);
   den_clone340->SetMarkerStyle(24);
   den_clone340->Draw("same samep");
   
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
   entry=leg->AddEntry("den_clone","PU300 GEM-CSC","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TText *text = new TText(0.17,0.17,"ME2/2");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"CLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
