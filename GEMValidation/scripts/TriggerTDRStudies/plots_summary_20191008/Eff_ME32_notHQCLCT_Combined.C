void Eff_ME32_notHQCLCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct  9 14:55:06 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.014286,-0.15375,1.728571,1.1275);
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
   
   TH1F *base__63 = new TH1F("base__63","",25,1.1,1.7);
   base__63->SetMinimum(0);
   base__63->SetMaximum(1.025);
   base__63->SetLineStyle(0);
   base__63->SetMarkerStyle(20);
   base__63->GetXaxis()->SetTitle("True muon |#eta|");
   base__63->GetXaxis()->SetLabelFont(42);
   base__63->GetXaxis()->SetLabelOffset(0.007);
   base__63->GetXaxis()->SetLabelSize(0.05);
   base__63->GetXaxis()->SetTitleSize(0.06);
   base__63->GetXaxis()->SetTitleOffset(0.9);
   base__63->GetXaxis()->SetTitleFont(42);
   base__63->GetYaxis()->SetTitle("Efficiency");
   base__63->GetYaxis()->SetLabelFont(42);
   base__63->GetYaxis()->SetLabelOffset(0.007);
   base__63->GetYaxis()->SetLabelSize(0.05);
   base__63->GetYaxis()->SetTitleSize(0.06);
   base__63->GetYaxis()->SetTitleOffset(0.9);
   base__63->GetYaxis()->SetTitleFont(42);
   base__63->GetZaxis()->SetLabelFont(42);
   base__63->GetZaxis()->SetLabelOffset(0.007);
   base__63->GetZaxis()->SetLabelSize(0.05);
   base__63->GetZaxis()->SetTitleSize(0.06);
   base__63->GetZaxis()->SetTitleFont(42);
   base__63->Draw("");
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
   
   TEfficiency * den_clone249 = new TEfficiency("den_clone","",25,1.1,1.7);
   
   den_clone249->SetConfidenceLevel(0.6826895);
   den_clone249->SetBetaAlpha(1);
   den_clone249->SetBetaBeta(1);
   den_clone249->SetWeight(1);
   den_clone249->SetStatisticOption(0);
   den_clone249->SetPosteriorMode(0);
   den_clone249->SetShortestInterval(0);
   den_clone249->SetTotalEvents(0,0);
   den_clone249->SetPassedEvents(0,0);
   den_clone249->SetTotalEvents(1,855);
   den_clone249->SetPassedEvents(1,124);
   den_clone249->SetTotalEvents(2,1593);
   den_clone249->SetPassedEvents(2,120);
   den_clone249->SetTotalEvents(3,1701);
   den_clone249->SetPassedEvents(3,75);
   den_clone249->SetTotalEvents(4,1553);
   den_clone249->SetPassedEvents(4,107);
   den_clone249->SetTotalEvents(5,1726);
   den_clone249->SetPassedEvents(5,95);
   den_clone249->SetTotalEvents(6,1720);
   den_clone249->SetPassedEvents(6,63);
   den_clone249->SetTotalEvents(7,1576);
   den_clone249->SetPassedEvents(7,103);
   den_clone249->SetTotalEvents(8,1615);
   den_clone249->SetPassedEvents(8,116);
   den_clone249->SetTotalEvents(9,1703);
   den_clone249->SetPassedEvents(9,78);
   den_clone249->SetTotalEvents(10,1708);
   den_clone249->SetPassedEvents(10,69);
   den_clone249->SetTotalEvents(11,1714);
   den_clone249->SetPassedEvents(11,129);
   den_clone249->SetTotalEvents(12,1599);
   den_clone249->SetPassedEvents(12,169);
   den_clone249->SetTotalEvents(13,1632);
   den_clone249->SetPassedEvents(13,85);
   den_clone249->SetTotalEvents(14,1725);
   den_clone249->SetPassedEvents(14,53);
   den_clone249->SetTotalEvents(15,1623);
   den_clone249->SetPassedEvents(15,57);
   den_clone249->SetTotalEvents(16,1611);
   den_clone249->SetPassedEvents(16,201);
   den_clone249->SetTotalEvents(17,1618);
   den_clone249->SetPassedEvents(17,215);
   den_clone249->SetTotalEvents(18,1639);
   den_clone249->SetPassedEvents(18,89);
   den_clone249->SetTotalEvents(19,1544);
   den_clone249->SetPassedEvents(19,74);
   den_clone249->SetTotalEvents(20,1568);
   den_clone249->SetPassedEvents(20,72);
   den_clone249->SetTotalEvents(21,1679);
   den_clone249->SetPassedEvents(21,65);
   den_clone249->SetTotalEvents(22,1515);
   den_clone249->SetPassedEvents(22,78);
   den_clone249->SetTotalEvents(23,1569);
   den_clone249->SetPassedEvents(23,92);
   den_clone249->SetTotalEvents(24,1145);
   den_clone249->SetPassedEvents(24,209);
   den_clone249->SetTotalEvents(25,309);
   den_clone249->SetPassedEvents(25,142);
   den_clone249->SetTotalEvents(26,0);
   den_clone249->SetPassedEvents(26,0);
   den_clone249->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone249->SetLineColor(ci);
   den_clone249->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone249->SetMarkerColor(ci);
   den_clone249->SetMarkerStyle(22);
   den_clone249->Draw("same samep");
   
   TEfficiency * den_clone250 = new TEfficiency("den_clone","",25,1.1,1.7);
   
   den_clone250->SetConfidenceLevel(0.6826895);
   den_clone250->SetBetaAlpha(1);
   den_clone250->SetBetaBeta(1);
   den_clone250->SetWeight(1);
   den_clone250->SetStatisticOption(0);
   den_clone250->SetPosteriorMode(0);
   den_clone250->SetShortestInterval(0);
   den_clone250->SetTotalEvents(0,0);
   den_clone250->SetPassedEvents(0,0);
   den_clone250->SetTotalEvents(1,773);
   den_clone250->SetPassedEvents(1,121);
   den_clone250->SetTotalEvents(2,1499);
   den_clone250->SetPassedEvents(2,85);
   den_clone250->SetTotalEvents(3,1652);
   den_clone250->SetPassedEvents(3,60);
   den_clone250->SetTotalEvents(4,1642);
   den_clone250->SetPassedEvents(4,109);
   den_clone250->SetTotalEvents(5,1629);
   den_clone250->SetPassedEvents(5,88);
   den_clone250->SetTotalEvents(6,1682);
   den_clone250->SetPassedEvents(6,56);
   den_clone250->SetTotalEvents(7,1710);
   den_clone250->SetPassedEvents(7,100);
   den_clone250->SetTotalEvents(8,1713);
   den_clone250->SetPassedEvents(8,115);
   den_clone250->SetTotalEvents(9,1716);
   den_clone250->SetPassedEvents(9,82);
   den_clone250->SetTotalEvents(10,1642);
   den_clone250->SetPassedEvents(10,57);
   den_clone250->SetTotalEvents(11,1658);
   den_clone250->SetPassedEvents(11,122);
   den_clone250->SetTotalEvents(12,1558);
   den_clone250->SetPassedEvents(12,158);
   den_clone250->SetTotalEvents(13,1783);
   den_clone250->SetPassedEvents(13,105);
   den_clone250->SetTotalEvents(14,1593);
   den_clone250->SetPassedEvents(14,64);
   den_clone250->SetTotalEvents(15,1732);
   den_clone250->SetPassedEvents(15,74);
   den_clone250->SetTotalEvents(16,1693);
   den_clone250->SetPassedEvents(16,217);
   den_clone250->SetTotalEvents(17,1561);
   den_clone250->SetPassedEvents(17,247);
   den_clone250->SetTotalEvents(18,1677);
   den_clone250->SetPassedEvents(18,81);
   den_clone250->SetTotalEvents(19,1692);
   den_clone250->SetPassedEvents(19,84);
   den_clone250->SetTotalEvents(20,1688);
   den_clone250->SetPassedEvents(20,76);
   den_clone250->SetTotalEvents(21,1642);
   den_clone250->SetPassedEvents(21,78);
   den_clone250->SetTotalEvents(22,1598);
   den_clone250->SetPassedEvents(22,82);
   den_clone250->SetTotalEvents(23,1632);
   den_clone250->SetPassedEvents(23,116);
   den_clone250->SetTotalEvents(24,1085);
   den_clone250->SetPassedEvents(24,193);
   den_clone250->SetTotalEvents(25,306);
   den_clone250->SetPassedEvents(25,132);
   den_clone250->SetTotalEvents(26,0);
   den_clone250->SetPassedEvents(26,0);
   den_clone250->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone250->SetLineColor(ci);
   den_clone250->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone250->SetMarkerColor(ci);
   den_clone250->SetMarkerStyle(21);
   den_clone250->Draw("same samep");
   
   TEfficiency * den_clone251 = new TEfficiency("den_clone","",25,1.1,1.7);
   
   den_clone251->SetConfidenceLevel(0.6826895);
   den_clone251->SetBetaAlpha(1);
   den_clone251->SetBetaBeta(1);
   den_clone251->SetWeight(1);
   den_clone251->SetStatisticOption(0);
   den_clone251->SetPosteriorMode(0);
   den_clone251->SetShortestInterval(0);
   den_clone251->SetTotalEvents(0,0);
   den_clone251->SetPassedEvents(0,0);
   den_clone251->SetTotalEvents(1,773);
   den_clone251->SetPassedEvents(1,121);
   den_clone251->SetTotalEvents(2,1499);
   den_clone251->SetPassedEvents(2,85);
   den_clone251->SetTotalEvents(3,1652);
   den_clone251->SetPassedEvents(3,60);
   den_clone251->SetTotalEvents(4,1642);
   den_clone251->SetPassedEvents(4,109);
   den_clone251->SetTotalEvents(5,1629);
   den_clone251->SetPassedEvents(5,88);
   den_clone251->SetTotalEvents(6,1682);
   den_clone251->SetPassedEvents(6,56);
   den_clone251->SetTotalEvents(7,1710);
   den_clone251->SetPassedEvents(7,100);
   den_clone251->SetTotalEvents(8,1713);
   den_clone251->SetPassedEvents(8,115);
   den_clone251->SetTotalEvents(9,1716);
   den_clone251->SetPassedEvents(9,82);
   den_clone251->SetTotalEvents(10,1642);
   den_clone251->SetPassedEvents(10,57);
   den_clone251->SetTotalEvents(11,1658);
   den_clone251->SetPassedEvents(11,122);
   den_clone251->SetTotalEvents(12,1558);
   den_clone251->SetPassedEvents(12,158);
   den_clone251->SetTotalEvents(13,1783);
   den_clone251->SetPassedEvents(13,105);
   den_clone251->SetTotalEvents(14,1593);
   den_clone251->SetPassedEvents(14,64);
   den_clone251->SetTotalEvents(15,1732);
   den_clone251->SetPassedEvents(15,74);
   den_clone251->SetTotalEvents(16,1693);
   den_clone251->SetPassedEvents(16,217);
   den_clone251->SetTotalEvents(17,1561);
   den_clone251->SetPassedEvents(17,247);
   den_clone251->SetTotalEvents(18,1677);
   den_clone251->SetPassedEvents(18,81);
   den_clone251->SetTotalEvents(19,1692);
   den_clone251->SetPassedEvents(19,84);
   den_clone251->SetTotalEvents(20,1688);
   den_clone251->SetPassedEvents(20,76);
   den_clone251->SetTotalEvents(21,1642);
   den_clone251->SetPassedEvents(21,78);
   den_clone251->SetTotalEvents(22,1598);
   den_clone251->SetPassedEvents(22,82);
   den_clone251->SetTotalEvents(23,1632);
   den_clone251->SetPassedEvents(23,116);
   den_clone251->SetTotalEvents(24,1085);
   den_clone251->SetPassedEvents(24,193);
   den_clone251->SetTotalEvents(25,306);
   den_clone251->SetPassedEvents(25,132);
   den_clone251->SetTotalEvents(26,0);
   den_clone251->SetPassedEvents(26,0);
   den_clone251->SetFillColor(19);
   den_clone251->SetLineWidth(2);
   den_clone251->SetMarkerStyle(23);
   den_clone251->Draw("same samep");
   
   TEfficiency * den_clone252 = new TEfficiency("den_clone","",25,1.1,1.7);
   
   den_clone252->SetConfidenceLevel(0.6826895);
   den_clone252->SetBetaAlpha(1);
   den_clone252->SetBetaBeta(1);
   den_clone252->SetWeight(1);
   den_clone252->SetStatisticOption(0);
   den_clone252->SetPosteriorMode(0);
   den_clone252->SetShortestInterval(0);
   den_clone252->SetTotalEvents(0,0);
   den_clone252->SetPassedEvents(0,0);
   den_clone252->SetTotalEvents(1,299);
   den_clone252->SetPassedEvents(1,19);
   den_clone252->SetTotalEvents(2,559);
   den_clone252->SetPassedEvents(2,27);
   den_clone252->SetTotalEvents(3,572);
   den_clone252->SetPassedEvents(3,19);
   den_clone252->SetTotalEvents(4,562);
   den_clone252->SetPassedEvents(4,31);
   den_clone252->SetTotalEvents(5,528);
   den_clone252->SetPassedEvents(5,33);
   den_clone252->SetTotalEvents(6,598);
   den_clone252->SetPassedEvents(6,15);
   den_clone252->SetTotalEvents(7,630);
   den_clone252->SetPassedEvents(7,35);
   den_clone252->SetTotalEvents(8,603);
   den_clone252->SetPassedEvents(8,48);
   den_clone252->SetTotalEvents(9,610);
   den_clone252->SetPassedEvents(9,25);
   den_clone252->SetTotalEvents(10,588);
   den_clone252->SetPassedEvents(10,27);
   den_clone252->SetTotalEvents(11,545);
   den_clone252->SetPassedEvents(11,48);
   den_clone252->SetTotalEvents(12,535);
   den_clone252->SetPassedEvents(12,54);
   den_clone252->SetTotalEvents(13,617);
   den_clone252->SetPassedEvents(13,32);
   den_clone252->SetTotalEvents(14,634);
   den_clone252->SetPassedEvents(14,27);
   den_clone252->SetTotalEvents(15,586);
   den_clone252->SetPassedEvents(15,16);
   den_clone252->SetTotalEvents(16,587);
   den_clone252->SetPassedEvents(16,75);
   den_clone252->SetTotalEvents(17,512);
   den_clone252->SetPassedEvents(17,60);
   den_clone252->SetTotalEvents(18,600);
   den_clone252->SetPassedEvents(18,21);
   den_clone252->SetTotalEvents(19,581);
   den_clone252->SetPassedEvents(19,24);
   den_clone252->SetTotalEvents(20,613);
   den_clone252->SetPassedEvents(20,25);
   den_clone252->SetTotalEvents(21,606);
   den_clone252->SetPassedEvents(21,27);
   den_clone252->SetTotalEvents(22,574);
   den_clone252->SetPassedEvents(22,30);
   den_clone252->SetTotalEvents(23,519);
   den_clone252->SetPassedEvents(23,31);
   den_clone252->SetTotalEvents(24,406);
   den_clone252->SetPassedEvents(24,51);
   den_clone252->SetTotalEvents(25,92);
   den_clone252->SetPassedEvents(25,33);
   den_clone252->SetTotalEvents(26,0);
   den_clone252->SetPassedEvents(26,0);
   den_clone252->SetFillColor(19);

   ci = TColor::GetColor("#00cc00");
   den_clone252->SetLineColor(ci);
   den_clone252->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   den_clone252->SetMarkerColor(ci);
   den_clone252->SetMarkerStyle(23);
   den_clone252->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME3/2");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"notHQCLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
