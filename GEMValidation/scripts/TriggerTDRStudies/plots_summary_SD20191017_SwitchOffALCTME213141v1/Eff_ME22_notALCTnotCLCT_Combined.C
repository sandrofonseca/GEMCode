void Eff_ME22_notALCTnotCLCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 17 16:28:02 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(0.9142857,-0.15375,1.628571,1.1275);
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
   
   TH1F *base__102 = new TH1F("base__102","",25,1,1.6);
   base__102->SetMinimum(0);
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
   
   TEfficiency * den_clone290 = new TEfficiency("den_clone","",25,1,1.6);
   
   den_clone290->SetConfidenceLevel(0.6826895);
   den_clone290->SetBetaAlpha(1);
   den_clone290->SetBetaBeta(1);
   den_clone290->SetWeight(1);
   den_clone290->SetStatisticOption(0);
   den_clone290->SetPosteriorMode(0);
   den_clone290->SetShortestInterval(0);
   den_clone290->SetTotalEvents(0,0);
   den_clone290->SetPassedEvents(0,0);
   den_clone290->SetTotalEvents(1,722);
   den_clone290->SetPassedEvents(1,83);
   den_clone290->SetTotalEvents(2,1378);
   den_clone290->SetPassedEvents(2,56);
   den_clone290->SetTotalEvents(3,1586);
   den_clone290->SetPassedEvents(3,2);
   den_clone290->SetTotalEvents(4,1615);
   den_clone290->SetPassedEvents(4,1);
   den_clone290->SetTotalEvents(5,1558);
   den_clone290->SetPassedEvents(5,2);
   den_clone290->SetTotalEvents(6,1637);
   den_clone290->SetPassedEvents(6,1);
   den_clone290->SetTotalEvents(7,1701);
   den_clone290->SetPassedEvents(7,2);
   den_clone290->SetTotalEvents(8,1602);
   den_clone290->SetPassedEvents(8,2);
   den_clone290->SetTotalEvents(9,1691);
   den_clone290->SetPassedEvents(9,2);
   den_clone290->SetTotalEvents(10,1712);
   den_clone290->SetPassedEvents(10,1);
   den_clone290->SetTotalEvents(11,1605);
   den_clone290->SetPassedEvents(11,1);
   den_clone290->SetTotalEvents(12,1587);
   den_clone290->SetPassedEvents(12,1);
   den_clone290->SetTotalEvents(13,1710);
   den_clone290->SetPassedEvents(13,0);
   den_clone290->SetTotalEvents(14,1719);
   den_clone290->SetPassedEvents(14,2);
   den_clone290->SetTotalEvents(15,1694);
   den_clone290->SetPassedEvents(15,2);
   den_clone290->SetTotalEvents(16,1598);
   den_clone290->SetPassedEvents(16,1);
   den_clone290->SetTotalEvents(17,1631);
   den_clone290->SetPassedEvents(17,0);
   den_clone290->SetTotalEvents(18,1701);
   den_clone290->SetPassedEvents(18,1);
   den_clone290->SetTotalEvents(19,1613);
   den_clone290->SetPassedEvents(19,0);
   den_clone290->SetTotalEvents(20,1634);
   den_clone290->SetPassedEvents(20,1);
   den_clone290->SetTotalEvents(21,1586);
   den_clone290->SetPassedEvents(21,2);
   den_clone290->SetTotalEvents(22,1604);
   den_clone290->SetPassedEvents(22,3);
   den_clone290->SetTotalEvents(23,1430);
   den_clone290->SetPassedEvents(23,75);
   den_clone290->SetTotalEvents(24,648);
   den_clone290->SetPassedEvents(24,73);
   den_clone290->SetTotalEvents(25,52);
   den_clone290->SetPassedEvents(25,26);
   den_clone290->SetTotalEvents(26,0);
   den_clone290->SetPassedEvents(26,0);
   den_clone290->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone290->SetLineColor(ci);
   den_clone290->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone290->SetMarkerColor(ci);
   den_clone290->SetMarkerStyle(22);
   den_clone290->Draw("same samep");
   
   TEfficiency * den_clone291 = new TEfficiency("den_clone","",25,1,1.6);
   
   den_clone291->SetConfidenceLevel(0.6826895);
   den_clone291->SetBetaAlpha(1);
   den_clone291->SetBetaBeta(1);
   den_clone291->SetWeight(1);
   den_clone291->SetStatisticOption(0);
   den_clone291->SetPosteriorMode(0);
   den_clone291->SetShortestInterval(0);
   den_clone291->SetTotalEvents(0,0);
   den_clone291->SetPassedEvents(0,0);
   den_clone291->SetTotalEvents(1,638);
   den_clone291->SetPassedEvents(1,75);
   den_clone291->SetTotalEvents(2,1389);
   den_clone291->SetPassedEvents(2,57);
   den_clone291->SetTotalEvents(3,1594);
   den_clone291->SetPassedEvents(3,0);
   den_clone291->SetTotalEvents(4,1516);
   den_clone291->SetPassedEvents(4,0);
   den_clone291->SetTotalEvents(5,1500);
   den_clone291->SetPassedEvents(5,2);
   den_clone291->SetTotalEvents(6,1453);
   den_clone291->SetPassedEvents(6,1);
   den_clone291->SetTotalEvents(7,1596);
   den_clone291->SetPassedEvents(7,0);
   den_clone291->SetTotalEvents(8,1594);
   den_clone291->SetPassedEvents(8,0);
   den_clone291->SetTotalEvents(9,1537);
   den_clone291->SetPassedEvents(9,1);
   den_clone291->SetTotalEvents(10,1634);
   den_clone291->SetPassedEvents(10,5);
   den_clone291->SetTotalEvents(11,1610);
   den_clone291->SetPassedEvents(11,2);
   den_clone291->SetTotalEvents(12,1645);
   den_clone291->SetPassedEvents(12,2);
   den_clone291->SetTotalEvents(13,1641);
   den_clone291->SetPassedEvents(13,2);
   den_clone291->SetTotalEvents(14,1549);
   den_clone291->SetPassedEvents(14,0);
   den_clone291->SetTotalEvents(15,1585);
   den_clone291->SetPassedEvents(15,1);
   den_clone291->SetTotalEvents(16,1510);
   den_clone291->SetPassedEvents(16,3);
   den_clone291->SetTotalEvents(17,1712);
   den_clone291->SetPassedEvents(17,1);
   den_clone291->SetTotalEvents(18,1526);
   den_clone291->SetPassedEvents(18,0);
   den_clone291->SetTotalEvents(19,1684);
   den_clone291->SetPassedEvents(19,2);
   den_clone291->SetTotalEvents(20,1607);
   den_clone291->SetPassedEvents(20,2);
   den_clone291->SetTotalEvents(21,1538);
   den_clone291->SetPassedEvents(21,2);
   den_clone291->SetTotalEvents(22,1547);
   den_clone291->SetPassedEvents(22,3);
   den_clone291->SetTotalEvents(23,1467);
   den_clone291->SetPassedEvents(23,93);
   den_clone291->SetTotalEvents(24,725);
   den_clone291->SetPassedEvents(24,68);
   den_clone291->SetTotalEvents(25,62);
   den_clone291->SetPassedEvents(25,32);
   den_clone291->SetTotalEvents(26,0);
   den_clone291->SetPassedEvents(26,0);
   den_clone291->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone291->SetLineColor(ci);
   den_clone291->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone291->SetMarkerColor(ci);
   den_clone291->SetMarkerStyle(21);
   den_clone291->Draw("same samep");
   
   TEfficiency * den_clone292 = new TEfficiency("den_clone","",25,1,1.6);
   
   den_clone292->SetConfidenceLevel(0.6826895);
   den_clone292->SetBetaAlpha(1);
   den_clone292->SetBetaBeta(1);
   den_clone292->SetWeight(1);
   den_clone292->SetStatisticOption(0);
   den_clone292->SetPosteriorMode(0);
   den_clone292->SetShortestInterval(0);
   den_clone292->SetTotalEvents(0,0);
   den_clone292->SetPassedEvents(0,0);
   den_clone292->SetTotalEvents(1,625);
   den_clone292->SetPassedEvents(1,69);
   den_clone292->SetTotalEvents(2,1378);
   den_clone292->SetPassedEvents(2,54);
   den_clone292->SetTotalEvents(3,1553);
   den_clone292->SetPassedEvents(3,0);
   den_clone292->SetTotalEvents(4,1493);
   den_clone292->SetPassedEvents(4,0);
   den_clone292->SetTotalEvents(5,1462);
   den_clone292->SetPassedEvents(5,1);
   den_clone292->SetTotalEvents(6,1445);
   den_clone292->SetPassedEvents(6,1);
   den_clone292->SetTotalEvents(7,1581);
   den_clone292->SetPassedEvents(7,0);
   den_clone292->SetTotalEvents(8,1584);
   den_clone292->SetPassedEvents(8,0);
   den_clone292->SetTotalEvents(9,1551);
   den_clone292->SetPassedEvents(9,1);
   den_clone292->SetTotalEvents(10,1610);
   den_clone292->SetPassedEvents(10,4);
   den_clone292->SetTotalEvents(11,1580);
   den_clone292->SetPassedEvents(11,2);
   den_clone292->SetTotalEvents(12,1655);
   den_clone292->SetPassedEvents(12,2);
   den_clone292->SetTotalEvents(13,1645);
   den_clone292->SetPassedEvents(13,2);
   den_clone292->SetTotalEvents(14,1547);
   den_clone292->SetPassedEvents(14,0);
   den_clone292->SetTotalEvents(15,1595);
   den_clone292->SetPassedEvents(15,1);
   den_clone292->SetTotalEvents(16,1488);
   den_clone292->SetPassedEvents(16,3);
   den_clone292->SetTotalEvents(17,1716);
   den_clone292->SetPassedEvents(17,1);
   den_clone292->SetTotalEvents(18,1514);
   den_clone292->SetPassedEvents(18,0);
   den_clone292->SetTotalEvents(19,1672);
   den_clone292->SetPassedEvents(19,2);
   den_clone292->SetTotalEvents(20,1579);
   den_clone292->SetPassedEvents(20,2);
   den_clone292->SetTotalEvents(21,1525);
   den_clone292->SetPassedEvents(21,2);
   den_clone292->SetTotalEvents(22,1485);
   den_clone292->SetPassedEvents(22,3);
   den_clone292->SetTotalEvents(23,1444);
   den_clone292->SetPassedEvents(23,91);
   den_clone292->SetTotalEvents(24,719);
   den_clone292->SetPassedEvents(24,67);
   den_clone292->SetTotalEvents(25,65);
   den_clone292->SetPassedEvents(25,33);
   den_clone292->SetTotalEvents(26,0);
   den_clone292->SetPassedEvents(26,0);
   den_clone292->SetFillColor(19);
   den_clone292->SetLineWidth(2);
   den_clone292->SetMarkerStyle(23);
   den_clone292->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME2/2");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"notALCTnotCLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
