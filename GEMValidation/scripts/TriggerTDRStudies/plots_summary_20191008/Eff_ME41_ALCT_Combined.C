void Eff_ME41_ALCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct  9 13:21:27 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.714286,0.42125,2.428571,1.0775);
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
   
   TH1F *base__102 = new TH1F("base__102","",25,1.8,2.4);
   base__102->SetMinimum(0.5);
   base__102->SetMaximum(1.025);
   base__102->SetLineStyle(0);
   base__102->SetMarkerStyle(20);
   base__102->GetXaxis()->SetTitle("True muon |#eta|");
   base__102->GetXaxis()->SetLabelFont(42);
   base__102->GetXaxis()->SetLabelOffset(0.007);
   base__102->GetXaxis()->SetLabelSize(0.05);
   base__102->GetXaxis()->SetTitleSize(0.06);
   base__102->GetXaxis()->SetTitleOffset(0.9);
   base__102->GetXaxis()->SetTitleFont(42);
   base__102->GetYaxis()->SetTitle("Efficiency");
   base__102->GetYaxis()->SetLabelFont(42);
   base__102->GetYaxis()->SetLabelOffset(0.007);
   base__102->GetYaxis()->SetLabelSize(0.05);
   base__102->GetYaxis()->SetTitleSize(0.06);
   base__102->GetYaxis()->SetTitleOffset(0.9);
   base__102->GetYaxis()->SetTitleFont(42);
   base__102->GetZaxis()->SetLabelFont(42);
   base__102->GetZaxis()->SetLabelOffset(0.007);
   base__102->GetZaxis()->SetLabelSize(0.05);
   base__102->GetZaxis()->SetTitleSize(0.06);
   base__102->GetZaxis()->SetTitleFont(42);
   base__102->Draw("");
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
   
   TEfficiency * den_clone306 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone306->SetConfidenceLevel(0.6826895);
   den_clone306->SetBetaAlpha(1);
   den_clone306->SetBetaBeta(1);
   den_clone306->SetWeight(1);
   den_clone306->SetStatisticOption(0);
   den_clone306->SetPosteriorMode(0);
   den_clone306->SetShortestInterval(0);
   den_clone306->SetTotalEvents(0,0);
   den_clone306->SetPassedEvents(0,0);
   den_clone306->SetTotalEvents(1,384);
   den_clone306->SetPassedEvents(1,324);
   den_clone306->SetTotalEvents(2,1206);
   den_clone306->SetPassedEvents(2,1152);
   den_clone306->SetTotalEvents(3,1660);
   den_clone306->SetPassedEvents(3,1647);
   den_clone306->SetTotalEvents(4,1637);
   den_clone306->SetPassedEvents(4,1634);
   den_clone306->SetTotalEvents(5,1600);
   den_clone306->SetPassedEvents(5,1595);
   den_clone306->SetTotalEvents(6,1744);
   den_clone306->SetPassedEvents(6,1733);
   den_clone306->SetTotalEvents(7,1690);
   den_clone306->SetPassedEvents(7,1594);
   den_clone306->SetTotalEvents(8,1651);
   den_clone306->SetPassedEvents(8,1389);
   den_clone306->SetTotalEvents(9,1621);
   den_clone306->SetPassedEvents(9,1474);
   den_clone306->SetTotalEvents(10,1622);
   den_clone306->SetPassedEvents(10,1618);
   den_clone306->SetTotalEvents(11,1604);
   den_clone306->SetPassedEvents(11,1600);
   den_clone306->SetTotalEvents(12,1562);
   den_clone306->SetPassedEvents(12,1557);
   den_clone306->SetTotalEvents(13,1540);
   den_clone306->SetPassedEvents(13,1535);
   den_clone306->SetTotalEvents(14,1674);
   den_clone306->SetPassedEvents(14,1658);
   den_clone306->SetTotalEvents(15,1562);
   den_clone306->SetPassedEvents(15,1452);
   den_clone306->SetTotalEvents(16,1466);
   den_clone306->SetPassedEvents(16,1316);
   den_clone306->SetTotalEvents(17,1545);
   den_clone306->SetPassedEvents(17,1481);
   den_clone306->SetTotalEvents(18,1726);
   den_clone306->SetPassedEvents(18,1720);
   den_clone306->SetTotalEvents(19,1733);
   den_clone306->SetPassedEvents(19,1729);
   den_clone306->SetTotalEvents(20,1676);
   den_clone306->SetPassedEvents(20,1670);
   den_clone306->SetTotalEvents(21,1605);
   den_clone306->SetPassedEvents(21,1597);
   den_clone306->SetTotalEvents(22,1742);
   den_clone306->SetPassedEvents(22,1730);
   den_clone306->SetTotalEvents(23,1686);
   den_clone306->SetPassedEvents(23,1678);
   den_clone306->SetTotalEvents(24,1623);
   den_clone306->SetPassedEvents(24,1611);
   den_clone306->SetTotalEvents(25,1231);
   den_clone306->SetPassedEvents(25,1151);
   den_clone306->SetTotalEvents(26,0);
   den_clone306->SetPassedEvents(26,0);
   den_clone306->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone306->SetLineColor(ci);
   den_clone306->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone306->SetMarkerColor(ci);
   den_clone306->SetMarkerStyle(22);
   den_clone306->Draw("same samep");
   
   TEfficiency * den_clone307 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone307->SetConfidenceLevel(0.6826895);
   den_clone307->SetBetaAlpha(1);
   den_clone307->SetBetaBeta(1);
   den_clone307->SetWeight(1);
   den_clone307->SetStatisticOption(0);
   den_clone307->SetPosteriorMode(0);
   den_clone307->SetShortestInterval(0);
   den_clone307->SetTotalEvents(0,0);
   den_clone307->SetPassedEvents(0,0);
   den_clone307->SetTotalEvents(1,419);
   den_clone307->SetPassedEvents(1,350);
   den_clone307->SetTotalEvents(2,1266);
   den_clone307->SetPassedEvents(2,1190);
   den_clone307->SetTotalEvents(3,1615);
   den_clone307->SetPassedEvents(3,1604);
   den_clone307->SetTotalEvents(4,1644);
   den_clone307->SetPassedEvents(4,1637);
   den_clone307->SetTotalEvents(5,1669);
   den_clone307->SetPassedEvents(5,1667);
   den_clone307->SetTotalEvents(6,1730);
   den_clone307->SetPassedEvents(6,1724);
   den_clone307->SetTotalEvents(7,1670);
   den_clone307->SetPassedEvents(7,1577);
   den_clone307->SetTotalEvents(8,1608);
   den_clone307->SetPassedEvents(8,1344);
   den_clone307->SetTotalEvents(9,1563);
   den_clone307->SetPassedEvents(9,1413);
   den_clone307->SetTotalEvents(10,1655);
   den_clone307->SetPassedEvents(10,1648);
   den_clone307->SetTotalEvents(11,1672);
   den_clone307->SetPassedEvents(11,1667);
   den_clone307->SetTotalEvents(12,1684);
   den_clone307->SetPassedEvents(12,1677);
   den_clone307->SetTotalEvents(13,1670);
   den_clone307->SetPassedEvents(13,1663);
   den_clone307->SetTotalEvents(14,1681);
   den_clone307->SetPassedEvents(14,1665);
   den_clone307->SetTotalEvents(15,1440);
   den_clone307->SetPassedEvents(15,1325);
   den_clone307->SetTotalEvents(16,1495);
   den_clone307->SetPassedEvents(16,1350);
   den_clone307->SetTotalEvents(17,1640);
   den_clone307->SetPassedEvents(17,1584);
   den_clone307->SetTotalEvents(18,1602);
   den_clone307->SetPassedEvents(18,1595);
   den_clone307->SetTotalEvents(19,1626);
   den_clone307->SetPassedEvents(19,1621);
   den_clone307->SetTotalEvents(20,1674);
   den_clone307->SetPassedEvents(20,1664);
   den_clone307->SetTotalEvents(21,1670);
   den_clone307->SetPassedEvents(21,1662);
   den_clone307->SetTotalEvents(22,1674);
   den_clone307->SetPassedEvents(22,1668);
   den_clone307->SetTotalEvents(23,1598);
   den_clone307->SetPassedEvents(23,1587);
   den_clone307->SetTotalEvents(24,1580);
   den_clone307->SetPassedEvents(24,1565);
   den_clone307->SetTotalEvents(25,1205);
   den_clone307->SetPassedEvents(25,1135);
   den_clone307->SetTotalEvents(26,0);
   den_clone307->SetPassedEvents(26,0);
   den_clone307->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone307->SetLineColor(ci);
   den_clone307->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone307->SetMarkerColor(ci);
   den_clone307->SetMarkerStyle(21);
   den_clone307->Draw("same samep");
   
   TEfficiency * den_clone308 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone308->SetConfidenceLevel(0.6826895);
   den_clone308->SetBetaAlpha(1);
   den_clone308->SetBetaBeta(1);
   den_clone308->SetWeight(1);
   den_clone308->SetStatisticOption(0);
   den_clone308->SetPosteriorMode(0);
   den_clone308->SetShortestInterval(0);
   den_clone308->SetTotalEvents(0,0);
   den_clone308->SetPassedEvents(0,0);
   den_clone308->SetTotalEvents(1,419);
   den_clone308->SetPassedEvents(1,345);
   den_clone308->SetTotalEvents(2,1266);
   den_clone308->SetPassedEvents(2,1190);
   den_clone308->SetTotalEvents(3,1615);
   den_clone308->SetPassedEvents(3,1602);
   den_clone308->SetTotalEvents(4,1644);
   den_clone308->SetPassedEvents(4,1638);
   den_clone308->SetTotalEvents(5,1669);
   den_clone308->SetPassedEvents(5,1666);
   den_clone308->SetTotalEvents(6,1730);
   den_clone308->SetPassedEvents(6,1721);
   den_clone308->SetTotalEvents(7,1670);
   den_clone308->SetPassedEvents(7,1539);
   den_clone308->SetTotalEvents(8,1608);
   den_clone308->SetPassedEvents(8,1278);
   den_clone308->SetTotalEvents(9,1563);
   den_clone308->SetPassedEvents(9,1396);
   den_clone308->SetTotalEvents(10,1655);
   den_clone308->SetPassedEvents(10,1650);
   den_clone308->SetTotalEvents(11,1672);
   den_clone308->SetPassedEvents(11,1670);
   den_clone308->SetTotalEvents(12,1684);
   den_clone308->SetPassedEvents(12,1681);
   den_clone308->SetTotalEvents(13,1670);
   den_clone308->SetPassedEvents(13,1664);
   den_clone308->SetTotalEvents(14,1681);
   den_clone308->SetPassedEvents(14,1667);
   den_clone308->SetTotalEvents(15,1440);
   den_clone308->SetPassedEvents(15,1282);
   den_clone308->SetTotalEvents(16,1495);
   den_clone308->SetPassedEvents(16,1309);
   den_clone308->SetTotalEvents(17,1640);
   den_clone308->SetPassedEvents(17,1582);
   den_clone308->SetTotalEvents(18,1602);
   den_clone308->SetPassedEvents(18,1597);
   den_clone308->SetTotalEvents(19,1626);
   den_clone308->SetPassedEvents(19,1623);
   den_clone308->SetTotalEvents(20,1674);
   den_clone308->SetPassedEvents(20,1670);
   den_clone308->SetTotalEvents(21,1670);
   den_clone308->SetPassedEvents(21,1668);
   den_clone308->SetTotalEvents(22,1674);
   den_clone308->SetPassedEvents(22,1671);
   den_clone308->SetTotalEvents(23,1598);
   den_clone308->SetPassedEvents(23,1589);
   den_clone308->SetTotalEvents(24,1580);
   den_clone308->SetPassedEvents(24,1571);
   den_clone308->SetTotalEvents(25,1205);
   den_clone308->SetPassedEvents(25,1141);
   den_clone308->SetTotalEvents(26,0);
   den_clone308->SetPassedEvents(26,0);
   den_clone308->SetFillColor(19);
   den_clone308->SetLineWidth(2);
   den_clone308->SetMarkerStyle(23);
   den_clone308->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME4/1");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"ALCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
