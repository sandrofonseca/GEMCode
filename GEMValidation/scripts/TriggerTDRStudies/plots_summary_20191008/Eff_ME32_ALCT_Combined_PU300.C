void Eff_ME32_ALCT_Combined_PU300()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct  9 13:21:15 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.014286,0.42125,1.728571,1.0775);
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
   
   TH1F *base__94 = new TH1F("base__94","",25,1.1,1.7);
   base__94->SetMinimum(0.5);
   base__94->SetMaximum(1.025);
   base__94->SetLineStyle(0);
   base__94->SetMarkerStyle(20);
   base__94->GetXaxis()->SetTitle("True muon |#eta|");
   base__94->GetXaxis()->SetLabelFont(42);
   base__94->GetXaxis()->SetLabelOffset(0.007);
   base__94->GetXaxis()->SetLabelSize(0.05);
   base__94->GetXaxis()->SetTitleSize(0.06);
   base__94->GetXaxis()->SetTitleOffset(0.9);
   base__94->GetXaxis()->SetTitleFont(42);
   base__94->GetYaxis()->SetTitle("Efficiency");
   base__94->GetYaxis()->SetLabelFont(42);
   base__94->GetYaxis()->SetLabelOffset(0.007);
   base__94->GetYaxis()->SetLabelSize(0.05);
   base__94->GetYaxis()->SetTitleSize(0.06);
   base__94->GetYaxis()->SetTitleOffset(0.9);
   base__94->GetYaxis()->SetTitleFont(42);
   base__94->GetZaxis()->SetLabelFont(42);
   base__94->GetZaxis()->SetLabelOffset(0.007);
   base__94->GetZaxis()->SetLabelSize(0.05);
   base__94->GetZaxis()->SetTitleSize(0.06);
   base__94->GetZaxis()->SetTitleFont(42);
   base__94->Draw("");
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
   
   TEfficiency * den_clone282 = new TEfficiency("den_clone","",25,1.1,1.7);
   
   den_clone282->SetConfidenceLevel(0.6826895);
   den_clone282->SetBetaAlpha(1);
   den_clone282->SetBetaBeta(1);
   den_clone282->SetWeight(1);
   den_clone282->SetStatisticOption(0);
   den_clone282->SetPosteriorMode(0);
   den_clone282->SetShortestInterval(0);
   den_clone282->SetTotalEvents(0,0);
   den_clone282->SetPassedEvents(0,0);
   den_clone282->SetTotalEvents(1,773);
   den_clone282->SetPassedEvents(1,703);
   den_clone282->SetTotalEvents(2,1499);
   den_clone282->SetPassedEvents(2,1472);
   den_clone282->SetTotalEvents(3,1652);
   den_clone282->SetPassedEvents(3,1652);
   den_clone282->SetTotalEvents(4,1642);
   den_clone282->SetPassedEvents(4,1642);
   den_clone282->SetTotalEvents(5,1629);
   den_clone282->SetPassedEvents(5,1628);
   den_clone282->SetTotalEvents(6,1682);
   den_clone282->SetPassedEvents(6,1681);
   den_clone282->SetTotalEvents(7,1710);
   den_clone282->SetPassedEvents(7,1706);
   den_clone282->SetTotalEvents(8,1713);
   den_clone282->SetPassedEvents(8,1711);
   den_clone282->SetTotalEvents(9,1716);
   den_clone282->SetPassedEvents(9,1715);
   den_clone282->SetTotalEvents(10,1642);
   den_clone282->SetPassedEvents(10,1642);
   den_clone282->SetTotalEvents(11,1658);
   den_clone282->SetPassedEvents(11,1656);
   den_clone282->SetTotalEvents(12,1558);
   den_clone282->SetPassedEvents(12,1557);
   den_clone282->SetTotalEvents(13,1783);
   den_clone282->SetPassedEvents(13,1783);
   den_clone282->SetTotalEvents(14,1593);
   den_clone282->SetPassedEvents(14,1592);
   den_clone282->SetTotalEvents(15,1732);
   den_clone282->SetPassedEvents(15,1731);
   den_clone282->SetTotalEvents(16,1693);
   den_clone282->SetPassedEvents(16,1691);
   den_clone282->SetTotalEvents(17,1561);
   den_clone282->SetPassedEvents(17,1559);
   den_clone282->SetTotalEvents(18,1677);
   den_clone282->SetPassedEvents(18,1677);
   den_clone282->SetTotalEvents(19,1692);
   den_clone282->SetPassedEvents(19,1692);
   den_clone282->SetTotalEvents(20,1688);
   den_clone282->SetPassedEvents(20,1683);
   den_clone282->SetTotalEvents(21,1642);
   den_clone282->SetPassedEvents(21,1640);
   den_clone282->SetTotalEvents(22,1598);
   den_clone282->SetPassedEvents(22,1597);
   den_clone282->SetTotalEvents(23,1632);
   den_clone282->SetPassedEvents(23,1623);
   den_clone282->SetTotalEvents(24,1085);
   den_clone282->SetPassedEvents(24,1006);
   den_clone282->SetTotalEvents(25,306);
   den_clone282->SetPassedEvents(25,242);
   den_clone282->SetTotalEvents(26,0);
   den_clone282->SetPassedEvents(26,0);
   den_clone282->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   den_clone282->SetLineColor(ci);
   den_clone282->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   den_clone282->SetMarkerColor(ci);
   den_clone282->SetMarkerStyle(23);
   den_clone282->Draw("same samep");
   
   TEfficiency * den_clone283 = new TEfficiency("den_clone","",25,1.1,1.7);
   
   den_clone283->SetConfidenceLevel(0.6826895);
   den_clone283->SetBetaAlpha(1);
   den_clone283->SetBetaBeta(1);
   den_clone283->SetWeight(1);
   den_clone283->SetStatisticOption(0);
   den_clone283->SetPosteriorMode(0);
   den_clone283->SetShortestInterval(0);
   den_clone283->SetTotalEvents(0,0);
   den_clone283->SetPassedEvents(0,0);
   den_clone283->SetTotalEvents(1,773);
   den_clone283->SetPassedEvents(1,703);
   den_clone283->SetTotalEvents(2,1499);
   den_clone283->SetPassedEvents(2,1472);
   den_clone283->SetTotalEvents(3,1652);
   den_clone283->SetPassedEvents(3,1652);
   den_clone283->SetTotalEvents(4,1642);
   den_clone283->SetPassedEvents(4,1642);
   den_clone283->SetTotalEvents(5,1629);
   den_clone283->SetPassedEvents(5,1628);
   den_clone283->SetTotalEvents(6,1682);
   den_clone283->SetPassedEvents(6,1681);
   den_clone283->SetTotalEvents(7,1710);
   den_clone283->SetPassedEvents(7,1706);
   den_clone283->SetTotalEvents(8,1713);
   den_clone283->SetPassedEvents(8,1711);
   den_clone283->SetTotalEvents(9,1716);
   den_clone283->SetPassedEvents(9,1715);
   den_clone283->SetTotalEvents(10,1642);
   den_clone283->SetPassedEvents(10,1642);
   den_clone283->SetTotalEvents(11,1658);
   den_clone283->SetPassedEvents(11,1656);
   den_clone283->SetTotalEvents(12,1558);
   den_clone283->SetPassedEvents(12,1557);
   den_clone283->SetTotalEvents(13,1783);
   den_clone283->SetPassedEvents(13,1783);
   den_clone283->SetTotalEvents(14,1593);
   den_clone283->SetPassedEvents(14,1592);
   den_clone283->SetTotalEvents(15,1732);
   den_clone283->SetPassedEvents(15,1731);
   den_clone283->SetTotalEvents(16,1693);
   den_clone283->SetPassedEvents(16,1691);
   den_clone283->SetTotalEvents(17,1561);
   den_clone283->SetPassedEvents(17,1559);
   den_clone283->SetTotalEvents(18,1677);
   den_clone283->SetPassedEvents(18,1677);
   den_clone283->SetTotalEvents(19,1692);
   den_clone283->SetPassedEvents(19,1692);
   den_clone283->SetTotalEvents(20,1688);
   den_clone283->SetPassedEvents(20,1683);
   den_clone283->SetTotalEvents(21,1642);
   den_clone283->SetPassedEvents(21,1640);
   den_clone283->SetTotalEvents(22,1598);
   den_clone283->SetPassedEvents(22,1597);
   den_clone283->SetTotalEvents(23,1632);
   den_clone283->SetPassedEvents(23,1623);
   den_clone283->SetTotalEvents(24,1085);
   den_clone283->SetPassedEvents(24,1006);
   den_clone283->SetTotalEvents(25,306);
   den_clone283->SetPassedEvents(25,242);
   den_clone283->SetTotalEvents(26,0);
   den_clone283->SetPassedEvents(26,0);
   den_clone283->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   den_clone283->SetLineColor(ci);
   den_clone283->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone283->SetMarkerColor(ci);
   den_clone283->SetMarkerStyle(22);
   den_clone283->Draw("same samep");
   
   TEfficiency * den_clone284 = new TEfficiency("den_clone","",25,1.1,1.7);
   
   den_clone284->SetConfidenceLevel(0.6826895);
   den_clone284->SetBetaAlpha(1);
   den_clone284->SetBetaBeta(1);
   den_clone284->SetWeight(1);
   den_clone284->SetStatisticOption(0);
   den_clone284->SetPosteriorMode(0);
   den_clone284->SetShortestInterval(0);
   den_clone284->SetTotalEvents(0,0);
   den_clone284->SetPassedEvents(0,0);
   den_clone284->SetTotalEvents(1,773);
   den_clone284->SetPassedEvents(1,703);
   den_clone284->SetTotalEvents(2,1499);
   den_clone284->SetPassedEvents(2,1472);
   den_clone284->SetTotalEvents(3,1652);
   den_clone284->SetPassedEvents(3,1652);
   den_clone284->SetTotalEvents(4,1642);
   den_clone284->SetPassedEvents(4,1642);
   den_clone284->SetTotalEvents(5,1629);
   den_clone284->SetPassedEvents(5,1628);
   den_clone284->SetTotalEvents(6,1682);
   den_clone284->SetPassedEvents(6,1681);
   den_clone284->SetTotalEvents(7,1710);
   den_clone284->SetPassedEvents(7,1706);
   den_clone284->SetTotalEvents(8,1713);
   den_clone284->SetPassedEvents(8,1711);
   den_clone284->SetTotalEvents(9,1716);
   den_clone284->SetPassedEvents(9,1715);
   den_clone284->SetTotalEvents(10,1642);
   den_clone284->SetPassedEvents(10,1642);
   den_clone284->SetTotalEvents(11,1658);
   den_clone284->SetPassedEvents(11,1656);
   den_clone284->SetTotalEvents(12,1558);
   den_clone284->SetPassedEvents(12,1557);
   den_clone284->SetTotalEvents(13,1783);
   den_clone284->SetPassedEvents(13,1783);
   den_clone284->SetTotalEvents(14,1593);
   den_clone284->SetPassedEvents(14,1592);
   den_clone284->SetTotalEvents(15,1732);
   den_clone284->SetPassedEvents(15,1731);
   den_clone284->SetTotalEvents(16,1693);
   den_clone284->SetPassedEvents(16,1691);
   den_clone284->SetTotalEvents(17,1561);
   den_clone284->SetPassedEvents(17,1559);
   den_clone284->SetTotalEvents(18,1677);
   den_clone284->SetPassedEvents(18,1677);
   den_clone284->SetTotalEvents(19,1692);
   den_clone284->SetPassedEvents(19,1692);
   den_clone284->SetTotalEvents(20,1688);
   den_clone284->SetPassedEvents(20,1683);
   den_clone284->SetTotalEvents(21,1642);
   den_clone284->SetPassedEvents(21,1640);
   den_clone284->SetTotalEvents(22,1598);
   den_clone284->SetPassedEvents(22,1597);
   den_clone284->SetTotalEvents(23,1632);
   den_clone284->SetPassedEvents(23,1623);
   den_clone284->SetTotalEvents(24,1085);
   den_clone284->SetPassedEvents(24,1006);
   den_clone284->SetTotalEvents(25,306);
   den_clone284->SetPassedEvents(25,242);
   den_clone284->SetTotalEvents(26,0);
   den_clone284->SetPassedEvents(26,0);
   den_clone284->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone284->SetLineColor(ci);
   den_clone284->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone284->SetMarkerColor(ci);
   den_clone284->SetMarkerStyle(21);
   den_clone284->Draw("same samep");
   
   TEfficiency * den_clone285 = new TEfficiency("den_clone","",25,1.1,1.7);
   
   den_clone285->SetConfidenceLevel(0.6826895);
   den_clone285->SetBetaAlpha(1);
   den_clone285->SetBetaBeta(1);
   den_clone285->SetWeight(1);
   den_clone285->SetStatisticOption(0);
   den_clone285->SetPosteriorMode(0);
   den_clone285->SetShortestInterval(0);
   den_clone285->SetTotalEvents(0,0);
   den_clone285->SetPassedEvents(0,0);
   den_clone285->SetTotalEvents(1,324);
   den_clone285->SetPassedEvents(1,300);
   den_clone285->SetTotalEvents(2,578);
   den_clone285->SetPassedEvents(2,560);
   den_clone285->SetTotalEvents(3,572);
   den_clone285->SetPassedEvents(3,572);
   den_clone285->SetTotalEvents(4,562);
   den_clone285->SetPassedEvents(4,562);
   den_clone285->SetTotalEvents(5,528);
   den_clone285->SetPassedEvents(5,528);
   den_clone285->SetTotalEvents(6,598);
   den_clone285->SetPassedEvents(6,598);
   den_clone285->SetTotalEvents(7,630);
   den_clone285->SetPassedEvents(7,630);
   den_clone285->SetTotalEvents(8,603);
   den_clone285->SetPassedEvents(8,602);
   den_clone285->SetTotalEvents(9,610);
   den_clone285->SetPassedEvents(9,609);
   den_clone285->SetTotalEvents(10,588);
   den_clone285->SetPassedEvents(10,587);
   den_clone285->SetTotalEvents(11,545);
   den_clone285->SetPassedEvents(11,545);
   den_clone285->SetTotalEvents(12,536);
   den_clone285->SetPassedEvents(12,535);
   den_clone285->SetTotalEvents(13,617);
   den_clone285->SetPassedEvents(13,617);
   den_clone285->SetTotalEvents(14,634);
   den_clone285->SetPassedEvents(14,633);
   den_clone285->SetTotalEvents(15,586);
   den_clone285->SetPassedEvents(15,585);
   den_clone285->SetTotalEvents(16,587);
   den_clone285->SetPassedEvents(16,587);
   den_clone285->SetTotalEvents(17,512);
   den_clone285->SetPassedEvents(17,511);
   den_clone285->SetTotalEvents(18,600);
   den_clone285->SetPassedEvents(18,598);
   den_clone285->SetTotalEvents(19,581);
   den_clone285->SetPassedEvents(19,581);
   den_clone285->SetTotalEvents(20,613);
   den_clone285->SetPassedEvents(20,611);
   den_clone285->SetTotalEvents(21,607);
   den_clone285->SetPassedEvents(21,603);
   den_clone285->SetTotalEvents(22,575);
   den_clone285->SetPassedEvents(22,572);
   den_clone285->SetTotalEvents(23,522);
   den_clone285->SetPassedEvents(23,518);
   den_clone285->SetTotalEvents(24,443);
   den_clone285->SetPassedEvents(24,409);
   den_clone285->SetTotalEvents(25,113);
   den_clone285->SetPassedEvents(25,93);
   den_clone285->SetTotalEvents(26,0);
   den_clone285->SetPassedEvents(26,0);
   den_clone285->SetFillColor(19);
   den_clone285->SetLineWidth(2);
   den_clone285->SetMarkerStyle(24);
   den_clone285->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME3/2");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"ALCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
