void Eff_ME12_Strips_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 10 20:23:01 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.128571,0.42125,1.72381,1.0775);
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
   
   TH1F *base__51 = new TH1F("base__51","",25,1.2,1.7);
   base__51->SetMinimum(0.5);
   base__51->SetMaximum(1.025);
   base__51->SetLineStyle(0);
   base__51->SetMarkerStyle(20);
   base__51->GetXaxis()->SetTitle("True muon |#eta|");
   base__51->GetXaxis()->SetLabelFont(42);
   base__51->GetXaxis()->SetLabelOffset(0.007);
   base__51->GetXaxis()->SetLabelSize(0.05);
   base__51->GetXaxis()->SetTitleSize(0.06);
   base__51->GetXaxis()->SetTitleOffset(0.9);
   base__51->GetXaxis()->SetTitleFont(42);
   base__51->GetYaxis()->SetTitle("Efficiency");
   base__51->GetYaxis()->SetLabelFont(42);
   base__51->GetYaxis()->SetLabelOffset(0.007);
   base__51->GetYaxis()->SetLabelSize(0.05);
   base__51->GetYaxis()->SetTitleSize(0.06);
   base__51->GetYaxis()->SetTitleOffset(0.9);
   base__51->GetYaxis()->SetTitleFont(42);
   base__51->GetZaxis()->SetLabelFont(42);
   base__51->GetZaxis()->SetLabelOffset(0.007);
   base__51->GetZaxis()->SetLabelSize(0.05);
   base__51->GetZaxis()->SetTitleSize(0.06);
   base__51->GetZaxis()->SetTitleFont(42);
   base__51->Draw("");
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
   
   TEfficiency * den_clone187 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone187->SetConfidenceLevel(0.6826895);
   den_clone187->SetBetaAlpha(1);
   den_clone187->SetBetaBeta(1);
   den_clone187->SetWeight(1);
   den_clone187->SetStatisticOption(0);
   den_clone187->SetPosteriorMode(0);
   den_clone187->SetShortestInterval(0);
   den_clone187->SetTotalEvents(0,0);
   den_clone187->SetPassedEvents(0,0);
   den_clone187->SetTotalEvents(1,820);
   den_clone187->SetPassedEvents(1,806);
   den_clone187->SetTotalEvents(2,1213);
   den_clone187->SetPassedEvents(2,1189);
   den_clone187->SetTotalEvents(3,1354);
   den_clone187->SetPassedEvents(3,1353);
   den_clone187->SetTotalEvents(4,1323);
   den_clone187->SetPassedEvents(4,1322);
   den_clone187->SetTotalEvents(5,1390);
   den_clone187->SetPassedEvents(5,1385);
   den_clone187->SetTotalEvents(6,1462);
   den_clone187->SetPassedEvents(6,1459);
   den_clone187->SetTotalEvents(7,1398);
   den_clone187->SetPassedEvents(7,1390);
   den_clone187->SetTotalEvents(8,1433);
   den_clone187->SetPassedEvents(8,1428);
   den_clone187->SetTotalEvents(9,1329);
   den_clone187->SetPassedEvents(9,1326);
   den_clone187->SetTotalEvents(10,1404);
   den_clone187->SetPassedEvents(10,1401);
   den_clone187->SetTotalEvents(11,1430);
   den_clone187->SetPassedEvents(11,1427);
   den_clone187->SetTotalEvents(12,1367);
   den_clone187->SetPassedEvents(12,1363);
   den_clone187->SetTotalEvents(13,1349);
   den_clone187->SetPassedEvents(13,1325);
   den_clone187->SetTotalEvents(14,1357);
   den_clone187->SetPassedEvents(14,1331);
   den_clone187->SetTotalEvents(15,1298);
   den_clone187->SetPassedEvents(15,1241);
   den_clone187->SetTotalEvents(16,1436);
   den_clone187->SetPassedEvents(16,1427);
   den_clone187->SetTotalEvents(17,1307);
   den_clone187->SetPassedEvents(17,1305);
   den_clone187->SetTotalEvents(18,1268);
   den_clone187->SetPassedEvents(18,1265);
   den_clone187->SetTotalEvents(19,1329);
   den_clone187->SetPassedEvents(19,1325);
   den_clone187->SetTotalEvents(20,1413);
   den_clone187->SetPassedEvents(20,1409);
   den_clone187->SetTotalEvents(21,1263);
   den_clone187->SetPassedEvents(21,1240);
   den_clone187->SetTotalEvents(22,804);
   den_clone187->SetPassedEvents(22,768);
   den_clone187->SetTotalEvents(23,621);
   den_clone187->SetPassedEvents(23,585);
   den_clone187->SetTotalEvents(24,81);
   den_clone187->SetPassedEvents(24,60);
   den_clone187->SetTotalEvents(25,0);
   den_clone187->SetPassedEvents(25,0);
   den_clone187->SetTotalEvents(26,0);
   den_clone187->SetPassedEvents(26,0);
   den_clone187->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone187->SetLineColor(ci);
   den_clone187->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone187->SetMarkerColor(ci);
   den_clone187->SetMarkerStyle(22);
   den_clone187->Draw("same samep");
   
   TEfficiency * den_clone188 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone188->SetConfidenceLevel(0.6826895);
   den_clone188->SetBetaAlpha(1);
   den_clone188->SetBetaBeta(1);
   den_clone188->SetWeight(1);
   den_clone188->SetStatisticOption(0);
   den_clone188->SetPosteriorMode(0);
   den_clone188->SetShortestInterval(0);
   den_clone188->SetTotalEvents(0,0);
   den_clone188->SetPassedEvents(0,0);
   den_clone188->SetTotalEvents(1,771);
   den_clone188->SetPassedEvents(1,761);
   den_clone188->SetTotalEvents(2,1220);
   den_clone188->SetPassedEvents(2,1198);
   den_clone188->SetTotalEvents(3,1397);
   den_clone188->SetPassedEvents(3,1394);
   den_clone188->SetTotalEvents(4,1411);
   den_clone188->SetPassedEvents(4,1411);
   den_clone188->SetTotalEvents(5,1475);
   den_clone188->SetPassedEvents(5,1468);
   den_clone188->SetTotalEvents(6,1407);
   den_clone188->SetPassedEvents(6,1402);
   den_clone188->SetTotalEvents(7,1358);
   den_clone188->SetPassedEvents(7,1352);
   den_clone188->SetTotalEvents(8,1366);
   den_clone188->SetPassedEvents(8,1363);
   den_clone188->SetTotalEvents(9,1305);
   den_clone188->SetPassedEvents(9,1304);
   den_clone188->SetTotalEvents(10,1465);
   den_clone188->SetPassedEvents(10,1462);
   den_clone188->SetTotalEvents(11,1413);
   den_clone188->SetPassedEvents(11,1408);
   den_clone188->SetTotalEvents(12,1344);
   den_clone188->SetPassedEvents(12,1342);
   den_clone188->SetTotalEvents(13,1435);
   den_clone188->SetPassedEvents(13,1411);
   den_clone188->SetTotalEvents(14,1403);
   den_clone188->SetPassedEvents(14,1384);
   den_clone188->SetTotalEvents(15,1342);
   den_clone188->SetPassedEvents(15,1298);
   den_clone188->SetTotalEvents(16,1332);
   den_clone188->SetPassedEvents(16,1325);
   den_clone188->SetTotalEvents(17,1446);
   den_clone188->SetPassedEvents(17,1443);
   den_clone188->SetTotalEvents(18,1424);
   den_clone188->SetPassedEvents(18,1423);
   den_clone188->SetTotalEvents(19,1381);
   den_clone188->SetPassedEvents(19,1377);
   den_clone188->SetTotalEvents(20,1389);
   den_clone188->SetPassedEvents(20,1385);
   den_clone188->SetTotalEvents(21,1197);
   den_clone188->SetPassedEvents(21,1171);
   den_clone188->SetTotalEvents(22,900);
   den_clone188->SetPassedEvents(22,858);
   den_clone188->SetTotalEvents(23,639);
   den_clone188->SetPassedEvents(23,593);
   den_clone188->SetTotalEvents(24,66);
   den_clone188->SetPassedEvents(24,46);
   den_clone188->SetTotalEvents(25,0);
   den_clone188->SetPassedEvents(25,0);
   den_clone188->SetTotalEvents(26,0);
   den_clone188->SetPassedEvents(26,0);
   den_clone188->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone188->SetLineColor(ci);
   den_clone188->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone188->SetMarkerColor(ci);
   den_clone188->SetMarkerStyle(21);
   den_clone188->Draw("same samep");
   
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
