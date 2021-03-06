void Eff_ME41_Strips_Combined_PU300()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  8 12:51:38 2019) by ROOT version 6.14/09
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
   
   TH1F *base__72 = new TH1F("base__72","",25,1.8,2.4);
   base__72->SetMinimum(0.5);
   base__72->SetMaximum(1.025);
   base__72->SetLineStyle(0);
   base__72->SetMarkerStyle(20);
   base__72->GetXaxis()->SetTitle("True muon |#eta|");
   base__72->GetXaxis()->SetLabelFont(42);
   base__72->GetXaxis()->SetLabelOffset(0.007);
   base__72->GetXaxis()->SetLabelSize(0.05);
   base__72->GetXaxis()->SetTitleSize(0.06);
   base__72->GetXaxis()->SetTitleOffset(0.9);
   base__72->GetXaxis()->SetTitleFont(42);
   base__72->GetYaxis()->SetTitle("Efficiency");
   base__72->GetYaxis()->SetLabelFont(42);
   base__72->GetYaxis()->SetLabelOffset(0.007);
   base__72->GetYaxis()->SetLabelSize(0.05);
   base__72->GetYaxis()->SetTitleSize(0.06);
   base__72->GetYaxis()->SetTitleOffset(0.9);
   base__72->GetYaxis()->SetTitleFont(42);
   base__72->GetZaxis()->SetLabelFont(42);
   base__72->GetZaxis()->SetLabelOffset(0.007);
   base__72->GetZaxis()->SetLabelSize(0.05);
   base__72->GetZaxis()->SetTitleSize(0.06);
   base__72->GetZaxis()->SetTitleFont(42);
   base__72->Draw("");
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
   
   TEfficiency * den_clone296 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone296->SetConfidenceLevel(0.6826895);
   den_clone296->SetBetaAlpha(1);
   den_clone296->SetBetaBeta(1);
   den_clone296->SetWeight(1);
   den_clone296->SetStatisticOption(0);
   den_clone296->SetPosteriorMode(0);
   den_clone296->SetShortestInterval(0);
   den_clone296->SetTotalEvents(0,0);
   den_clone296->SetPassedEvents(0,0);
   den_clone296->SetTotalEvents(1,419);
   den_clone296->SetPassedEvents(1,390);
   den_clone296->SetTotalEvents(2,1266);
   den_clone296->SetPassedEvents(2,1238);
   den_clone296->SetTotalEvents(3,1615);
   den_clone296->SetPassedEvents(3,1612);
   den_clone296->SetTotalEvents(4,1644);
   den_clone296->SetPassedEvents(4,1641);
   den_clone296->SetTotalEvents(5,1669);
   den_clone296->SetPassedEvents(5,1667);
   den_clone296->SetTotalEvents(6,1730);
   den_clone296->SetPassedEvents(6,1729);
   den_clone296->SetTotalEvents(7,1670);
   den_clone296->SetPassedEvents(7,1640);
   den_clone296->SetTotalEvents(8,1608);
   den_clone296->SetPassedEvents(8,1504);
   den_clone296->SetTotalEvents(9,1563);
   den_clone296->SetPassedEvents(9,1492);
   den_clone296->SetTotalEvents(10,1655);
   den_clone296->SetPassedEvents(10,1652);
   den_clone296->SetTotalEvents(11,1672);
   den_clone296->SetPassedEvents(11,1672);
   den_clone296->SetTotalEvents(12,1684);
   den_clone296->SetPassedEvents(12,1683);
   den_clone296->SetTotalEvents(13,1670);
   den_clone296->SetPassedEvents(13,1669);
   den_clone296->SetTotalEvents(14,1681);
   den_clone296->SetPassedEvents(14,1675);
   den_clone296->SetTotalEvents(15,1440);
   den_clone296->SetPassedEvents(15,1390);
   den_clone296->SetTotalEvents(16,1495);
   den_clone296->SetPassedEvents(16,1431);
   den_clone296->SetTotalEvents(17,1640);
   den_clone296->SetPassedEvents(17,1608);
   den_clone296->SetTotalEvents(18,1602);
   den_clone296->SetPassedEvents(18,1602);
   den_clone296->SetTotalEvents(19,1626);
   den_clone296->SetPassedEvents(19,1626);
   den_clone296->SetTotalEvents(20,1674);
   den_clone296->SetPassedEvents(20,1672);
   den_clone296->SetTotalEvents(21,1670);
   den_clone296->SetPassedEvents(21,1669);
   den_clone296->SetTotalEvents(22,1674);
   den_clone296->SetPassedEvents(22,1671);
   den_clone296->SetTotalEvents(23,1598);
   den_clone296->SetPassedEvents(23,1595);
   den_clone296->SetTotalEvents(24,1580);
   den_clone296->SetPassedEvents(24,1573);
   den_clone296->SetTotalEvents(25,1205);
   den_clone296->SetPassedEvents(25,1164);
   den_clone296->SetTotalEvents(26,0);
   den_clone296->SetPassedEvents(26,0);
   den_clone296->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   den_clone296->SetLineColor(ci);
   den_clone296->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   den_clone296->SetMarkerColor(ci);
   den_clone296->SetMarkerStyle(23);
   den_clone296->Draw("same samep");
   
   TEfficiency * den_clone297 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone297->SetConfidenceLevel(0.6826895);
   den_clone297->SetBetaAlpha(1);
   den_clone297->SetBetaBeta(1);
   den_clone297->SetWeight(1);
   den_clone297->SetStatisticOption(0);
   den_clone297->SetPosteriorMode(0);
   den_clone297->SetShortestInterval(0);
   den_clone297->SetTotalEvents(0,0);
   den_clone297->SetPassedEvents(0,0);
   den_clone297->SetTotalEvents(1,419);
   den_clone297->SetPassedEvents(1,390);
   den_clone297->SetTotalEvents(2,1266);
   den_clone297->SetPassedEvents(2,1238);
   den_clone297->SetTotalEvents(3,1615);
   den_clone297->SetPassedEvents(3,1612);
   den_clone297->SetTotalEvents(4,1644);
   den_clone297->SetPassedEvents(4,1641);
   den_clone297->SetTotalEvents(5,1669);
   den_clone297->SetPassedEvents(5,1667);
   den_clone297->SetTotalEvents(6,1730);
   den_clone297->SetPassedEvents(6,1729);
   den_clone297->SetTotalEvents(7,1670);
   den_clone297->SetPassedEvents(7,1640);
   den_clone297->SetTotalEvents(8,1608);
   den_clone297->SetPassedEvents(8,1504);
   den_clone297->SetTotalEvents(9,1563);
   den_clone297->SetPassedEvents(9,1492);
   den_clone297->SetTotalEvents(10,1655);
   den_clone297->SetPassedEvents(10,1652);
   den_clone297->SetTotalEvents(11,1672);
   den_clone297->SetPassedEvents(11,1672);
   den_clone297->SetTotalEvents(12,1684);
   den_clone297->SetPassedEvents(12,1683);
   den_clone297->SetTotalEvents(13,1670);
   den_clone297->SetPassedEvents(13,1669);
   den_clone297->SetTotalEvents(14,1681);
   den_clone297->SetPassedEvents(14,1675);
   den_clone297->SetTotalEvents(15,1440);
   den_clone297->SetPassedEvents(15,1390);
   den_clone297->SetTotalEvents(16,1495);
   den_clone297->SetPassedEvents(16,1431);
   den_clone297->SetTotalEvents(17,1640);
   den_clone297->SetPassedEvents(17,1608);
   den_clone297->SetTotalEvents(18,1602);
   den_clone297->SetPassedEvents(18,1602);
   den_clone297->SetTotalEvents(19,1626);
   den_clone297->SetPassedEvents(19,1626);
   den_clone297->SetTotalEvents(20,1674);
   den_clone297->SetPassedEvents(20,1672);
   den_clone297->SetTotalEvents(21,1670);
   den_clone297->SetPassedEvents(21,1669);
   den_clone297->SetTotalEvents(22,1674);
   den_clone297->SetPassedEvents(22,1671);
   den_clone297->SetTotalEvents(23,1598);
   den_clone297->SetPassedEvents(23,1595);
   den_clone297->SetTotalEvents(24,1580);
   den_clone297->SetPassedEvents(24,1573);
   den_clone297->SetTotalEvents(25,1205);
   den_clone297->SetPassedEvents(25,1164);
   den_clone297->SetTotalEvents(26,0);
   den_clone297->SetPassedEvents(26,0);
   den_clone297->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   den_clone297->SetLineColor(ci);
   den_clone297->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone297->SetMarkerColor(ci);
   den_clone297->SetMarkerStyle(22);
   den_clone297->Draw("same samep");
   
   TEfficiency * den_clone298 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone298->SetConfidenceLevel(0.6826895);
   den_clone298->SetBetaAlpha(1);
   den_clone298->SetBetaBeta(1);
   den_clone298->SetWeight(1);
   den_clone298->SetStatisticOption(0);
   den_clone298->SetPosteriorMode(0);
   den_clone298->SetShortestInterval(0);
   den_clone298->SetTotalEvents(0,0);
   den_clone298->SetPassedEvents(0,0);
   den_clone298->SetTotalEvents(1,419);
   den_clone298->SetPassedEvents(1,390);
   den_clone298->SetTotalEvents(2,1266);
   den_clone298->SetPassedEvents(2,1238);
   den_clone298->SetTotalEvents(3,1615);
   den_clone298->SetPassedEvents(3,1612);
   den_clone298->SetTotalEvents(4,1644);
   den_clone298->SetPassedEvents(4,1641);
   den_clone298->SetTotalEvents(5,1669);
   den_clone298->SetPassedEvents(5,1667);
   den_clone298->SetTotalEvents(6,1730);
   den_clone298->SetPassedEvents(6,1729);
   den_clone298->SetTotalEvents(7,1670);
   den_clone298->SetPassedEvents(7,1640);
   den_clone298->SetTotalEvents(8,1608);
   den_clone298->SetPassedEvents(8,1504);
   den_clone298->SetTotalEvents(9,1563);
   den_clone298->SetPassedEvents(9,1492);
   den_clone298->SetTotalEvents(10,1655);
   den_clone298->SetPassedEvents(10,1652);
   den_clone298->SetTotalEvents(11,1672);
   den_clone298->SetPassedEvents(11,1672);
   den_clone298->SetTotalEvents(12,1684);
   den_clone298->SetPassedEvents(12,1683);
   den_clone298->SetTotalEvents(13,1670);
   den_clone298->SetPassedEvents(13,1669);
   den_clone298->SetTotalEvents(14,1681);
   den_clone298->SetPassedEvents(14,1675);
   den_clone298->SetTotalEvents(15,1440);
   den_clone298->SetPassedEvents(15,1390);
   den_clone298->SetTotalEvents(16,1495);
   den_clone298->SetPassedEvents(16,1431);
   den_clone298->SetTotalEvents(17,1640);
   den_clone298->SetPassedEvents(17,1608);
   den_clone298->SetTotalEvents(18,1602);
   den_clone298->SetPassedEvents(18,1602);
   den_clone298->SetTotalEvents(19,1626);
   den_clone298->SetPassedEvents(19,1626);
   den_clone298->SetTotalEvents(20,1674);
   den_clone298->SetPassedEvents(20,1672);
   den_clone298->SetTotalEvents(21,1670);
   den_clone298->SetPassedEvents(21,1669);
   den_clone298->SetTotalEvents(22,1674);
   den_clone298->SetPassedEvents(22,1671);
   den_clone298->SetTotalEvents(23,1598);
   den_clone298->SetPassedEvents(23,1595);
   den_clone298->SetTotalEvents(24,1580);
   den_clone298->SetPassedEvents(24,1573);
   den_clone298->SetTotalEvents(25,1205);
   den_clone298->SetPassedEvents(25,1164);
   den_clone298->SetTotalEvents(26,0);
   den_clone298->SetPassedEvents(26,0);
   den_clone298->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone298->SetLineColor(ci);
   den_clone298->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone298->SetMarkerColor(ci);
   den_clone298->SetMarkerStyle(21);
   den_clone298->Draw("same samep");
   
   TEfficiency * den_clone299 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone299->SetConfidenceLevel(0.6826895);
   den_clone299->SetBetaAlpha(1);
   den_clone299->SetBetaBeta(1);
   den_clone299->SetWeight(1);
   den_clone299->SetStatisticOption(0);
   den_clone299->SetPosteriorMode(0);
   den_clone299->SetShortestInterval(0);
   den_clone299->SetTotalEvents(0,0);
   den_clone299->SetPassedEvents(0,0);
   den_clone299->SetTotalEvents(1,169);
   den_clone299->SetPassedEvents(1,158);
   den_clone299->SetTotalEvents(2,465);
   den_clone299->SetPassedEvents(2,461);
   den_clone299->SetTotalEvents(3,560);
   den_clone299->SetPassedEvents(3,559);
   den_clone299->SetTotalEvents(4,578);
   den_clone299->SetPassedEvents(4,578);
   den_clone299->SetTotalEvents(5,562);
   den_clone299->SetPassedEvents(5,562);
   den_clone299->SetTotalEvents(6,564);
   den_clone299->SetPassedEvents(6,563);
   den_clone299->SetTotalEvents(7,627);
   den_clone299->SetPassedEvents(7,605);
   den_clone299->SetTotalEvents(8,545);
   den_clone299->SetPassedEvents(8,506);
   den_clone299->SetTotalEvents(9,592);
   den_clone299->SetPassedEvents(9,576);
   den_clone299->SetTotalEvents(10,556);
   den_clone299->SetPassedEvents(10,556);
   den_clone299->SetTotalEvents(11,608);
   den_clone299->SetPassedEvents(11,607);
   den_clone299->SetTotalEvents(12,566);
   den_clone299->SetPassedEvents(12,566);
   den_clone299->SetTotalEvents(13,586);
   den_clone299->SetPassedEvents(13,586);
   den_clone299->SetTotalEvents(14,603);
   den_clone299->SetPassedEvents(14,602);
   den_clone299->SetTotalEvents(15,527);
   den_clone299->SetPassedEvents(15,511);
   den_clone299->SetTotalEvents(16,499);
   den_clone299->SetPassedEvents(16,470);
   den_clone299->SetTotalEvents(17,606);
   den_clone299->SetPassedEvents(17,597);
   den_clone299->SetTotalEvents(18,623);
   den_clone299->SetPassedEvents(18,623);
   den_clone299->SetTotalEvents(19,550);
   den_clone299->SetPassedEvents(19,549);
   den_clone299->SetTotalEvents(20,571);
   den_clone299->SetPassedEvents(20,570);
   den_clone299->SetTotalEvents(21,663);
   den_clone299->SetPassedEvents(21,663);
   den_clone299->SetTotalEvents(22,540);
   den_clone299->SetPassedEvents(22,540);
   den_clone299->SetTotalEvents(23,642);
   den_clone299->SetPassedEvents(23,642);
   den_clone299->SetTotalEvents(24,596);
   den_clone299->SetPassedEvents(24,596);
   den_clone299->SetTotalEvents(25,407);
   den_clone299->SetPassedEvents(25,388);
   den_clone299->SetTotalEvents(26,0);
   den_clone299->SetPassedEvents(26,0);
   den_clone299->SetFillColor(19);
   den_clone299->SetLineWidth(2);
   den_clone299->SetMarkerStyle(24);
   den_clone299->Draw("same samep");
   
   TEfficiency * den_clone300 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone300->SetConfidenceLevel(0.6826895);
   den_clone300->SetBetaAlpha(1);
   den_clone300->SetBetaBeta(1);
   den_clone300->SetWeight(1);
   den_clone300->SetStatisticOption(0);
   den_clone300->SetPosteriorMode(0);
   den_clone300->SetShortestInterval(0);
   den_clone300->SetTotalEvents(0,0);
   den_clone300->SetPassedEvents(0,0);
   den_clone300->SetTotalEvents(1,384);
   den_clone300->SetPassedEvents(1,373);
   den_clone300->SetTotalEvents(2,1206);
   den_clone300->SetPassedEvents(2,1186);
   den_clone300->SetTotalEvents(3,1660);
   den_clone300->SetPassedEvents(3,1656);
   den_clone300->SetTotalEvents(4,1637);
   den_clone300->SetPassedEvents(4,1636);
   den_clone300->SetTotalEvents(5,1600);
   den_clone300->SetPassedEvents(5,1599);
   den_clone300->SetTotalEvents(6,1744);
   den_clone300->SetPassedEvents(6,1741);
   den_clone300->SetTotalEvents(7,1690);
   den_clone300->SetPassedEvents(7,1637);
   den_clone300->SetTotalEvents(8,1651);
   den_clone300->SetPassedEvents(8,1540);
   den_clone300->SetTotalEvents(9,1621);
   den_clone300->SetPassedEvents(9,1562);
   den_clone300->SetTotalEvents(10,1622);
   den_clone300->SetPassedEvents(10,1621);
   den_clone300->SetTotalEvents(11,1604);
   den_clone300->SetPassedEvents(11,1603);
   den_clone300->SetTotalEvents(12,1562);
   den_clone300->SetPassedEvents(12,1560);
   den_clone300->SetTotalEvents(13,1540);
   den_clone300->SetPassedEvents(13,1539);
   den_clone300->SetTotalEvents(14,1674);
   den_clone300->SetPassedEvents(14,1665);
   den_clone300->SetTotalEvents(15,1562);
   den_clone300->SetPassedEvents(15,1507);
   den_clone300->SetTotalEvents(16,1466);
   den_clone300->SetPassedEvents(16,1387);
   den_clone300->SetTotalEvents(17,1545);
   den_clone300->SetPassedEvents(17,1514);
   den_clone300->SetTotalEvents(18,1726);
   den_clone300->SetPassedEvents(18,1725);
   den_clone300->SetTotalEvents(19,1733);
   den_clone300->SetPassedEvents(19,1733);
   den_clone300->SetTotalEvents(20,1676);
   den_clone300->SetPassedEvents(20,1676);
   den_clone300->SetTotalEvents(21,1605);
   den_clone300->SetPassedEvents(21,1604);
   den_clone300->SetTotalEvents(22,1742);
   den_clone300->SetPassedEvents(22,1739);
   den_clone300->SetTotalEvents(23,1686);
   den_clone300->SetPassedEvents(23,1684);
   den_clone300->SetTotalEvents(24,1623);
   den_clone300->SetPassedEvents(24,1614);
   den_clone300->SetTotalEvents(25,1231);
   den_clone300->SetPassedEvents(25,1184);
   den_clone300->SetTotalEvents(26,0);
   den_clone300->SetPassedEvents(26,0);
   den_clone300->SetFillColor(19);

   ci = TColor::GetColor("#ff00ff");
   den_clone300->SetLineColor(ci);
   den_clone300->SetLineWidth(2);

   ci = TColor::GetColor("#ff00ff");
   den_clone300->SetMarkerColor(ci);
   den_clone300->SetMarkerStyle(24);
   den_clone300->Draw("same samep");
   
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
   entry=leg->AddEntry("den_clone","PU0 GEM-CSC","pl");
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
   text = new TText(0.17,0.24,"Strips");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
