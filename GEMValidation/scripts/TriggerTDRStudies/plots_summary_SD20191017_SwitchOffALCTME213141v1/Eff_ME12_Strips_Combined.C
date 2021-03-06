void Eff_ME12_Strips_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 17 16:27:08 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.128571,-0.15375,1.72381,1.1275);
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
   
   TH1F *base__54 = new TH1F("base__54","",25,1.2,1.7);
   base__54->SetMinimum(0);
   base__54->SetMaximum(1.025);
   base__54->SetLineStyle(0);
   base__54->SetMarkerStyle(20);
   base__54->GetXaxis()->SetTitle("True muon |#eta|");
   base__54->GetXaxis()->SetLabelFont(42);
   base__54->GetXaxis()->SetLabelOffset(0.007);
   base__54->GetXaxis()->SetLabelSize(0.05);
   base__54->GetXaxis()->SetTitleSize(0.06);
   base__54->GetXaxis()->SetTitleOffset(0.9);
   base__54->GetXaxis()->SetTitleFont(42);
   base__54->GetYaxis()->SetTitle("Efficiency");
   base__54->GetYaxis()->SetLabelFont(42);
   base__54->GetYaxis()->SetLabelOffset(0.007);
   base__54->GetYaxis()->SetLabelSize(0.05);
   base__54->GetYaxis()->SetTitleSize(0.06);
   base__54->GetYaxis()->SetTitleOffset(0.9);
   base__54->GetYaxis()->SetTitleFont(42);
   base__54->GetZaxis()->SetLabelFont(42);
   base__54->GetZaxis()->SetLabelOffset(0.007);
   base__54->GetZaxis()->SetLabelSize(0.05);
   base__54->GetZaxis()->SetTitleSize(0.06);
   base__54->GetZaxis()->SetTitleFont(42);
   base__54->Draw("");
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
   
   TEfficiency * den_clone153 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone153->SetConfidenceLevel(0.6826895);
   den_clone153->SetBetaAlpha(1);
   den_clone153->SetBetaBeta(1);
   den_clone153->SetWeight(1);
   den_clone153->SetStatisticOption(0);
   den_clone153->SetPosteriorMode(0);
   den_clone153->SetShortestInterval(0);
   den_clone153->SetTotalEvents(0,0);
   den_clone153->SetPassedEvents(0,0);
   den_clone153->SetTotalEvents(1,820);
   den_clone153->SetPassedEvents(1,806);
   den_clone153->SetTotalEvents(2,1213);
   den_clone153->SetPassedEvents(2,1189);
   den_clone153->SetTotalEvents(3,1354);
   den_clone153->SetPassedEvents(3,1353);
   den_clone153->SetTotalEvents(4,1323);
   den_clone153->SetPassedEvents(4,1322);
   den_clone153->SetTotalEvents(5,1390);
   den_clone153->SetPassedEvents(5,1385);
   den_clone153->SetTotalEvents(6,1462);
   den_clone153->SetPassedEvents(6,1459);
   den_clone153->SetTotalEvents(7,1398);
   den_clone153->SetPassedEvents(7,1390);
   den_clone153->SetTotalEvents(8,1433);
   den_clone153->SetPassedEvents(8,1428);
   den_clone153->SetTotalEvents(9,1329);
   den_clone153->SetPassedEvents(9,1326);
   den_clone153->SetTotalEvents(10,1404);
   den_clone153->SetPassedEvents(10,1401);
   den_clone153->SetTotalEvents(11,1430);
   den_clone153->SetPassedEvents(11,1427);
   den_clone153->SetTotalEvents(12,1367);
   den_clone153->SetPassedEvents(12,1363);
   den_clone153->SetTotalEvents(13,1349);
   den_clone153->SetPassedEvents(13,1325);
   den_clone153->SetTotalEvents(14,1357);
   den_clone153->SetPassedEvents(14,1331);
   den_clone153->SetTotalEvents(15,1298);
   den_clone153->SetPassedEvents(15,1241);
   den_clone153->SetTotalEvents(16,1436);
   den_clone153->SetPassedEvents(16,1427);
   den_clone153->SetTotalEvents(17,1307);
   den_clone153->SetPassedEvents(17,1305);
   den_clone153->SetTotalEvents(18,1268);
   den_clone153->SetPassedEvents(18,1265);
   den_clone153->SetTotalEvents(19,1329);
   den_clone153->SetPassedEvents(19,1325);
   den_clone153->SetTotalEvents(20,1413);
   den_clone153->SetPassedEvents(20,1409);
   den_clone153->SetTotalEvents(21,1263);
   den_clone153->SetPassedEvents(21,1240);
   den_clone153->SetTotalEvents(22,804);
   den_clone153->SetPassedEvents(22,768);
   den_clone153->SetTotalEvents(23,621);
   den_clone153->SetPassedEvents(23,585);
   den_clone153->SetTotalEvents(24,81);
   den_clone153->SetPassedEvents(24,60);
   den_clone153->SetTotalEvents(25,0);
   den_clone153->SetPassedEvents(25,0);
   den_clone153->SetTotalEvents(26,0);
   den_clone153->SetPassedEvents(26,0);
   den_clone153->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone153->SetLineColor(ci);
   den_clone153->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone153->SetMarkerColor(ci);
   den_clone153->SetMarkerStyle(22);
   den_clone153->Draw("same samep");
   
   TEfficiency * den_clone154 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone154->SetConfidenceLevel(0.6826895);
   den_clone154->SetBetaAlpha(1);
   den_clone154->SetBetaBeta(1);
   den_clone154->SetWeight(1);
   den_clone154->SetStatisticOption(0);
   den_clone154->SetPosteriorMode(0);
   den_clone154->SetShortestInterval(0);
   den_clone154->SetTotalEvents(0,0);
   den_clone154->SetPassedEvents(0,0);
   den_clone154->SetTotalEvents(1,737);
   den_clone154->SetPassedEvents(1,727);
   den_clone154->SetTotalEvents(2,1149);
   den_clone154->SetPassedEvents(2,1132);
   den_clone154->SetTotalEvents(3,1330);
   den_clone154->SetPassedEvents(3,1327);
   den_clone154->SetTotalEvents(4,1350);
   den_clone154->SetPassedEvents(4,1350);
   den_clone154->SetTotalEvents(5,1401);
   den_clone154->SetPassedEvents(5,1395);
   den_clone154->SetTotalEvents(6,1363);
   den_clone154->SetPassedEvents(6,1358);
   den_clone154->SetTotalEvents(7,1282);
   den_clone154->SetPassedEvents(7,1276);
   den_clone154->SetTotalEvents(8,1328);
   den_clone154->SetPassedEvents(8,1325);
   den_clone154->SetTotalEvents(9,1243);
   den_clone154->SetPassedEvents(9,1242);
   den_clone154->SetTotalEvents(10,1395);
   den_clone154->SetPassedEvents(10,1392);
   den_clone154->SetTotalEvents(11,1365);
   den_clone154->SetPassedEvents(11,1360);
   den_clone154->SetTotalEvents(12,1292);
   den_clone154->SetPassedEvents(12,1290);
   den_clone154->SetTotalEvents(13,1375);
   den_clone154->SetPassedEvents(13,1351);
   den_clone154->SetTotalEvents(14,1327);
   den_clone154->SetPassedEvents(14,1309);
   den_clone154->SetTotalEvents(15,1274);
   den_clone154->SetPassedEvents(15,1231);
   den_clone154->SetTotalEvents(16,1254);
   den_clone154->SetPassedEvents(16,1247);
   den_clone154->SetTotalEvents(17,1360);
   den_clone154->SetPassedEvents(17,1357);
   den_clone154->SetTotalEvents(18,1362);
   den_clone154->SetPassedEvents(18,1361);
   den_clone154->SetTotalEvents(19,1317);
   den_clone154->SetPassedEvents(19,1313);
   den_clone154->SetTotalEvents(20,1316);
   den_clone154->SetPassedEvents(20,1312);
   den_clone154->SetTotalEvents(21,1161);
   den_clone154->SetPassedEvents(21,1137);
   den_clone154->SetTotalEvents(22,858);
   den_clone154->SetPassedEvents(22,818);
   den_clone154->SetTotalEvents(23,614);
   den_clone154->SetPassedEvents(23,568);
   den_clone154->SetTotalEvents(24,64);
   den_clone154->SetPassedEvents(24,45);
   den_clone154->SetTotalEvents(25,0);
   den_clone154->SetPassedEvents(25,0);
   den_clone154->SetTotalEvents(26,0);
   den_clone154->SetPassedEvents(26,0);
   den_clone154->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone154->SetLineColor(ci);
   den_clone154->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone154->SetMarkerColor(ci);
   den_clone154->SetMarkerStyle(21);
   den_clone154->Draw("same samep");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","Strips","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("den_clone","PU0","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("den_clone","PU200","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TText *text = new TText(0.17,0.17,"ME1/2");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
