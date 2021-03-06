void Eff_ME22_ALCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Oct  6 01:02:41 2019) by ROOT version 6.14/09
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
   
   TH1F *base__21 = new TH1F("base__21","",25,1,1.6);
   base__21->SetMinimum(0.5);
   base__21->SetMaximum(1.025);
   base__21->SetLineStyle(0);
   base__21->SetMarkerStyle(20);
   base__21->GetXaxis()->SetTitle("True muon |#eta|");
   base__21->GetXaxis()->SetLabelFont(42);
   base__21->GetXaxis()->SetLabelOffset(0.007);
   base__21->GetXaxis()->SetLabelSize(0.05);
   base__21->GetXaxis()->SetTitleSize(0.06);
   base__21->GetXaxis()->SetTitleOffset(0.9);
   base__21->GetXaxis()->SetTitleFont(42);
   base__21->GetYaxis()->SetTitle("Efficiency");
   base__21->GetYaxis()->SetLabelFont(42);
   base__21->GetYaxis()->SetLabelOffset(0.007);
   base__21->GetYaxis()->SetLabelSize(0.05);
   base__21->GetYaxis()->SetTitleSize(0.06);
   base__21->GetYaxis()->SetTitleOffset(0.9);
   base__21->GetYaxis()->SetTitleFont(42);
   base__21->GetZaxis()->SetLabelFont(42);
   base__21->GetZaxis()->SetLabelOffset(0.007);
   base__21->GetZaxis()->SetLabelSize(0.05);
   base__21->GetZaxis()->SetTitleSize(0.06);
   base__21->GetZaxis()->SetTitleFont(42);
   base__21->Draw("");
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
   
   TEfficiency * den_clone63 = new TEfficiency("den_clone","",25,1,1.6);
   
   den_clone63->SetConfidenceLevel(0.6826895);
   den_clone63->SetBetaAlpha(1);
   den_clone63->SetBetaBeta(1);
   den_clone63->SetWeight(1);
   den_clone63->SetStatisticOption(0);
   den_clone63->SetPosteriorMode(0);
   den_clone63->SetShortestInterval(0);
   den_clone63->SetTotalEvents(0,0);
   den_clone63->SetPassedEvents(0,0);
   den_clone63->SetTotalEvents(1,722);
   den_clone63->SetPassedEvents(1,637);
   den_clone63->SetTotalEvents(2,1378);
   den_clone63->SetPassedEvents(2,1322);
   den_clone63->SetTotalEvents(3,1586);
   den_clone63->SetPassedEvents(3,1584);
   den_clone63->SetTotalEvents(4,1615);
   den_clone63->SetPassedEvents(4,1612);
   den_clone63->SetTotalEvents(5,1558);
   den_clone63->SetPassedEvents(5,1555);
   den_clone63->SetTotalEvents(6,1637);
   den_clone63->SetPassedEvents(6,1635);
   den_clone63->SetTotalEvents(7,1701);
   den_clone63->SetPassedEvents(7,1699);
   den_clone63->SetTotalEvents(8,1602);
   den_clone63->SetPassedEvents(8,1599);
   den_clone63->SetTotalEvents(9,1691);
   den_clone63->SetPassedEvents(9,1687);
   den_clone63->SetTotalEvents(10,1712);
   den_clone63->SetPassedEvents(10,1710);
   den_clone63->SetTotalEvents(11,1605);
   den_clone63->SetPassedEvents(11,1603);
   den_clone63->SetTotalEvents(12,1587);
   den_clone63->SetPassedEvents(12,1586);
   den_clone63->SetTotalEvents(13,1710);
   den_clone63->SetPassedEvents(13,1708);
   den_clone63->SetTotalEvents(14,1719);
   den_clone63->SetPassedEvents(14,1716);
   den_clone63->SetTotalEvents(15,1694);
   den_clone63->SetPassedEvents(15,1691);
   den_clone63->SetTotalEvents(16,1598);
   den_clone63->SetPassedEvents(16,1597);
   den_clone63->SetTotalEvents(17,1631);
   den_clone63->SetPassedEvents(17,1631);
   den_clone63->SetTotalEvents(18,1701);
   den_clone63->SetPassedEvents(18,1699);
   den_clone63->SetTotalEvents(19,1613);
   den_clone63->SetPassedEvents(19,1612);
   den_clone63->SetTotalEvents(20,1634);
   den_clone63->SetPassedEvents(20,1633);
   den_clone63->SetTotalEvents(21,1586);
   den_clone63->SetPassedEvents(21,1583);
   den_clone63->SetTotalEvents(22,1604);
   den_clone63->SetPassedEvents(22,1600);
   den_clone63->SetTotalEvents(23,1430);
   den_clone63->SetPassedEvents(23,1354);
   den_clone63->SetTotalEvents(24,648);
   den_clone63->SetPassedEvents(24,575);
   den_clone63->SetTotalEvents(25,52);
   den_clone63->SetPassedEvents(25,26);
   den_clone63->SetTotalEvents(26,0);
   den_clone63->SetPassedEvents(26,0);
   den_clone63->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone63->SetLineColor(ci);
   den_clone63->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone63->SetMarkerColor(ci);
   den_clone63->SetMarkerStyle(22);
   den_clone63->Draw("same samep");
   
   TEfficiency * den_clone64 = new TEfficiency("den_clone","",25,1,1.6);
   
   den_clone64->SetConfidenceLevel(0.6826895);
   den_clone64->SetBetaAlpha(1);
   den_clone64->SetBetaBeta(1);
   den_clone64->SetWeight(1);
   den_clone64->SetStatisticOption(0);
   den_clone64->SetPosteriorMode(0);
   den_clone64->SetShortestInterval(0);
   den_clone64->SetTotalEvents(0,0);
   den_clone64->SetPassedEvents(0,0);
   den_clone64->SetTotalEvents(1,661);
   den_clone64->SetPassedEvents(1,583);
   den_clone64->SetTotalEvents(2,1447);
   den_clone64->SetPassedEvents(2,1389);
   den_clone64->SetTotalEvents(3,1653);
   den_clone64->SetPassedEvents(3,1653);
   den_clone64->SetTotalEvents(4,1576);
   den_clone64->SetPassedEvents(4,1576);
   den_clone64->SetTotalEvents(5,1546);
   den_clone64->SetPassedEvents(5,1544);
   den_clone64->SetTotalEvents(6,1515);
   den_clone64->SetPassedEvents(6,1513);
   den_clone64->SetTotalEvents(7,1658);
   den_clone64->SetPassedEvents(7,1657);
   den_clone64->SetTotalEvents(8,1664);
   den_clone64->SetPassedEvents(8,1664);
   den_clone64->SetTotalEvents(9,1619);
   den_clone64->SetPassedEvents(9,1615);
   den_clone64->SetTotalEvents(10,1699);
   den_clone64->SetPassedEvents(10,1694);
   den_clone64->SetTotalEvents(11,1658);
   den_clone64->SetPassedEvents(11,1654);
   den_clone64->SetTotalEvents(12,1727);
   den_clone64->SetPassedEvents(12,1725);
   den_clone64->SetTotalEvents(13,1713);
   den_clone64->SetPassedEvents(13,1711);
   den_clone64->SetTotalEvents(14,1631);
   den_clone64->SetPassedEvents(14,1630);
   den_clone64->SetTotalEvents(15,1649);
   den_clone64->SetPassedEvents(15,1646);
   den_clone64->SetTotalEvents(16,1566);
   den_clone64->SetPassedEvents(16,1563);
   den_clone64->SetTotalEvents(17,1784);
   den_clone64->SetPassedEvents(17,1783);
   den_clone64->SetTotalEvents(18,1572);
   den_clone64->SetPassedEvents(18,1572);
   den_clone64->SetTotalEvents(19,1752);
   den_clone64->SetPassedEvents(19,1748);
   den_clone64->SetTotalEvents(20,1661);
   den_clone64->SetPassedEvents(20,1659);
   den_clone64->SetTotalEvents(21,1604);
   den_clone64->SetPassedEvents(21,1602);
   den_clone64->SetTotalEvents(22,1589);
   den_clone64->SetPassedEvents(22,1586);
   den_clone64->SetTotalEvents(23,1526);
   den_clone64->SetPassedEvents(23,1429);
   den_clone64->SetTotalEvents(24,750);
   den_clone64->SetPassedEvents(24,677);
   den_clone64->SetTotalEvents(25,65);
   den_clone64->SetPassedEvents(25,32);
   den_clone64->SetTotalEvents(26,0);
   den_clone64->SetPassedEvents(26,0);
   den_clone64->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone64->SetLineColor(ci);
   den_clone64->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone64->SetMarkerColor(ci);
   den_clone64->SetMarkerStyle(21);
   den_clone64->Draw("same samep");
   
   TEfficiency * den_clone65 = new TEfficiency("den_clone","",25,1,1.6);
   
   den_clone65->SetConfidenceLevel(0.6826895);
   den_clone65->SetBetaAlpha(1);
   den_clone65->SetBetaBeta(1);
   den_clone65->SetWeight(1);
   den_clone65->SetStatisticOption(0);
   den_clone65->SetPosteriorMode(0);
   den_clone65->SetShortestInterval(0);
   den_clone65->SetTotalEvents(0,0);
   den_clone65->SetPassedEvents(0,0);
   den_clone65->SetTotalEvents(1,661);
   den_clone65->SetPassedEvents(1,583);
   den_clone65->SetTotalEvents(2,1447);
   den_clone65->SetPassedEvents(2,1389);
   den_clone65->SetTotalEvents(3,1653);
   den_clone65->SetPassedEvents(3,1653);
   den_clone65->SetTotalEvents(4,1576);
   den_clone65->SetPassedEvents(4,1576);
   den_clone65->SetTotalEvents(5,1546);
   den_clone65->SetPassedEvents(5,1544);
   den_clone65->SetTotalEvents(6,1515);
   den_clone65->SetPassedEvents(6,1513);
   den_clone65->SetTotalEvents(7,1658);
   den_clone65->SetPassedEvents(7,1657);
   den_clone65->SetTotalEvents(8,1664);
   den_clone65->SetPassedEvents(8,1664);
   den_clone65->SetTotalEvents(9,1619);
   den_clone65->SetPassedEvents(9,1615);
   den_clone65->SetTotalEvents(10,1699);
   den_clone65->SetPassedEvents(10,1694);
   den_clone65->SetTotalEvents(11,1658);
   den_clone65->SetPassedEvents(11,1654);
   den_clone65->SetTotalEvents(12,1727);
   den_clone65->SetPassedEvents(12,1725);
   den_clone65->SetTotalEvents(13,1713);
   den_clone65->SetPassedEvents(13,1711);
   den_clone65->SetTotalEvents(14,1631);
   den_clone65->SetPassedEvents(14,1630);
   den_clone65->SetTotalEvents(15,1649);
   den_clone65->SetPassedEvents(15,1646);
   den_clone65->SetTotalEvents(16,1566);
   den_clone65->SetPassedEvents(16,1563);
   den_clone65->SetTotalEvents(17,1784);
   den_clone65->SetPassedEvents(17,1783);
   den_clone65->SetTotalEvents(18,1572);
   den_clone65->SetPassedEvents(18,1572);
   den_clone65->SetTotalEvents(19,1752);
   den_clone65->SetPassedEvents(19,1748);
   den_clone65->SetTotalEvents(20,1661);
   den_clone65->SetPassedEvents(20,1659);
   den_clone65->SetTotalEvents(21,1604);
   den_clone65->SetPassedEvents(21,1602);
   den_clone65->SetTotalEvents(22,1589);
   den_clone65->SetPassedEvents(22,1586);
   den_clone65->SetTotalEvents(23,1526);
   den_clone65->SetPassedEvents(23,1429);
   den_clone65->SetTotalEvents(24,750);
   den_clone65->SetPassedEvents(24,677);
   den_clone65->SetTotalEvents(25,65);
   den_clone65->SetPassedEvents(25,32);
   den_clone65->SetTotalEvents(26,0);
   den_clone65->SetPassedEvents(26,0);
   den_clone65->SetFillColor(19);
   den_clone65->SetLineWidth(2);
   den_clone65->SetMarkerStyle(23);
   den_clone65->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME2/2");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"ALCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
