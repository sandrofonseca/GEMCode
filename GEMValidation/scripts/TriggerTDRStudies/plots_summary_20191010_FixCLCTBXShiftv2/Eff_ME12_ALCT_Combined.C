void Eff_ME12_ALCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 11 07:50:13 2019) by ROOT version 6.14/09
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
   
   TH1F *base__45 = new TH1F("base__45","",25,1.2,1.7);
   base__45->SetMinimum(0.5);
   base__45->SetMaximum(1.025);
   base__45->SetLineStyle(0);
   base__45->SetMarkerStyle(20);
   base__45->GetXaxis()->SetTitle("True muon |#eta|");
   base__45->GetXaxis()->SetLabelFont(42);
   base__45->GetXaxis()->SetLabelOffset(0.007);
   base__45->GetXaxis()->SetLabelSize(0.05);
   base__45->GetXaxis()->SetTitleSize(0.06);
   base__45->GetXaxis()->SetTitleOffset(0.9);
   base__45->GetXaxis()->SetTitleFont(42);
   base__45->GetYaxis()->SetTitle("Efficiency");
   base__45->GetYaxis()->SetLabelFont(42);
   base__45->GetYaxis()->SetLabelOffset(0.007);
   base__45->GetYaxis()->SetLabelSize(0.05);
   base__45->GetYaxis()->SetTitleSize(0.06);
   base__45->GetYaxis()->SetTitleOffset(0.9);
   base__45->GetYaxis()->SetTitleFont(42);
   base__45->GetZaxis()->SetLabelFont(42);
   base__45->GetZaxis()->SetLabelOffset(0.007);
   base__45->GetZaxis()->SetLabelSize(0.05);
   base__45->GetZaxis()->SetTitleSize(0.06);
   base__45->GetZaxis()->SetTitleFont(42);
   base__45->Draw("");
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
   
   TEfficiency * den_clone165 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone165->SetConfidenceLevel(0.6826895);
   den_clone165->SetBetaAlpha(1);
   den_clone165->SetBetaBeta(1);
   den_clone165->SetWeight(1);
   den_clone165->SetStatisticOption(0);
   den_clone165->SetPosteriorMode(0);
   den_clone165->SetShortestInterval(0);
   den_clone165->SetTotalEvents(0,0);
   den_clone165->SetPassedEvents(0,0);
   den_clone165->SetTotalEvents(1,820);
   den_clone165->SetPassedEvents(1,779);
   den_clone165->SetTotalEvents(2,1213);
   den_clone165->SetPassedEvents(2,1129);
   den_clone165->SetTotalEvents(3,1354);
   den_clone165->SetPassedEvents(3,1354);
   den_clone165->SetTotalEvents(4,1323);
   den_clone165->SetPassedEvents(4,1322);
   den_clone165->SetTotalEvents(5,1390);
   den_clone165->SetPassedEvents(5,1388);
   den_clone165->SetTotalEvents(6,1462);
   den_clone165->SetPassedEvents(6,1460);
   den_clone165->SetTotalEvents(7,1398);
   den_clone165->SetPassedEvents(7,1395);
   den_clone165->SetTotalEvents(8,1433);
   den_clone165->SetPassedEvents(8,1431);
   den_clone165->SetTotalEvents(9,1329);
   den_clone165->SetPassedEvents(9,1326);
   den_clone165->SetTotalEvents(10,1404);
   den_clone165->SetPassedEvents(10,1399);
   den_clone165->SetTotalEvents(11,1430);
   den_clone165->SetPassedEvents(11,1427);
   den_clone165->SetTotalEvents(12,1367);
   den_clone165->SetPassedEvents(12,1362);
   den_clone165->SetTotalEvents(13,1349);
   den_clone165->SetPassedEvents(13,1326);
   den_clone165->SetTotalEvents(14,1357);
   den_clone165->SetPassedEvents(14,1331);
   den_clone165->SetTotalEvents(15,1298);
   den_clone165->SetPassedEvents(15,1239);
   den_clone165->SetTotalEvents(16,1436);
   den_clone165->SetPassedEvents(16,1424);
   den_clone165->SetTotalEvents(17,1307);
   den_clone165->SetPassedEvents(17,1306);
   den_clone165->SetTotalEvents(18,1268);
   den_clone165->SetPassedEvents(18,1263);
   den_clone165->SetTotalEvents(19,1329);
   den_clone165->SetPassedEvents(19,1326);
   den_clone165->SetTotalEvents(20,1413);
   den_clone165->SetPassedEvents(20,1411);
   den_clone165->SetTotalEvents(21,1263);
   den_clone165->SetPassedEvents(21,1231);
   den_clone165->SetTotalEvents(22,804);
   den_clone165->SetPassedEvents(22,749);
   den_clone165->SetTotalEvents(23,621);
   den_clone165->SetPassedEvents(23,560);
   den_clone165->SetTotalEvents(24,81);
   den_clone165->SetPassedEvents(24,39);
   den_clone165->SetTotalEvents(25,0);
   den_clone165->SetPassedEvents(25,0);
   den_clone165->SetTotalEvents(26,0);
   den_clone165->SetPassedEvents(26,0);
   den_clone165->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone165->SetLineColor(ci);
   den_clone165->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone165->SetMarkerColor(ci);
   den_clone165->SetMarkerStyle(22);
   den_clone165->Draw("same samep");
   
   TEfficiency * den_clone166 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone166->SetConfidenceLevel(0.6826895);
   den_clone166->SetBetaAlpha(1);
   den_clone166->SetBetaBeta(1);
   den_clone166->SetWeight(1);
   den_clone166->SetStatisticOption(0);
   den_clone166->SetPosteriorMode(0);
   den_clone166->SetShortestInterval(0);
   den_clone166->SetTotalEvents(0,0);
   den_clone166->SetPassedEvents(0,0);
   den_clone166->SetTotalEvents(1,771);
   den_clone166->SetPassedEvents(1,732);
   den_clone166->SetTotalEvents(2,1220);
   den_clone166->SetPassedEvents(2,1144);
   den_clone166->SetTotalEvents(3,1397);
   den_clone166->SetPassedEvents(3,1393);
   den_clone166->SetTotalEvents(4,1411);
   den_clone166->SetPassedEvents(4,1409);
   den_clone166->SetTotalEvents(5,1475);
   den_clone166->SetPassedEvents(5,1473);
   den_clone166->SetTotalEvents(6,1407);
   den_clone166->SetPassedEvents(6,1406);
   den_clone166->SetTotalEvents(7,1358);
   den_clone166->SetPassedEvents(7,1357);
   den_clone166->SetTotalEvents(8,1366);
   den_clone166->SetPassedEvents(8,1365);
   den_clone166->SetTotalEvents(9,1305);
   den_clone166->SetPassedEvents(9,1301);
   den_clone166->SetTotalEvents(10,1465);
   den_clone166->SetPassedEvents(10,1459);
   den_clone166->SetTotalEvents(11,1413);
   den_clone166->SetPassedEvents(11,1404);
   den_clone166->SetTotalEvents(12,1344);
   den_clone166->SetPassedEvents(12,1338);
   den_clone166->SetTotalEvents(13,1435);
   den_clone166->SetPassedEvents(13,1407);
   den_clone166->SetTotalEvents(14,1403);
   den_clone166->SetPassedEvents(14,1376);
   den_clone166->SetTotalEvents(15,1342);
   den_clone166->SetPassedEvents(15,1276);
   den_clone166->SetTotalEvents(16,1332);
   den_clone166->SetPassedEvents(16,1320);
   den_clone166->SetTotalEvents(17,1446);
   den_clone166->SetPassedEvents(17,1441);
   den_clone166->SetTotalEvents(18,1424);
   den_clone166->SetPassedEvents(18,1418);
   den_clone166->SetTotalEvents(19,1381);
   den_clone166->SetPassedEvents(19,1373);
   den_clone166->SetTotalEvents(20,1389);
   den_clone166->SetPassedEvents(20,1383);
   den_clone166->SetTotalEvents(21,1197);
   den_clone166->SetPassedEvents(21,1156);
   den_clone166->SetTotalEvents(22,900);
   den_clone166->SetPassedEvents(22,822);
   den_clone166->SetTotalEvents(23,639);
   den_clone166->SetPassedEvents(23,566);
   den_clone166->SetTotalEvents(24,66);
   den_clone166->SetPassedEvents(24,35);
   den_clone166->SetTotalEvents(25,0);
   den_clone166->SetPassedEvents(25,0);
   den_clone166->SetTotalEvents(26,0);
   den_clone166->SetPassedEvents(26,0);
   den_clone166->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone166->SetLineColor(ci);
   den_clone166->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone166->SetMarkerColor(ci);
   den_clone166->SetMarkerStyle(21);
   den_clone166->Draw("same samep");
   
   TEfficiency * den_clone167 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone167->SetConfidenceLevel(0.6826895);
   den_clone167->SetBetaAlpha(1);
   den_clone167->SetBetaBeta(1);
   den_clone167->SetWeight(1);
   den_clone167->SetStatisticOption(0);
   den_clone167->SetPosteriorMode(0);
   den_clone167->SetShortestInterval(0);
   den_clone167->SetTotalEvents(0,0);
   den_clone167->SetPassedEvents(0,0);
   den_clone167->SetTotalEvents(1,771);
   den_clone167->SetPassedEvents(1,732);
   den_clone167->SetTotalEvents(2,1220);
   den_clone167->SetPassedEvents(2,1144);
   den_clone167->SetTotalEvents(3,1397);
   den_clone167->SetPassedEvents(3,1393);
   den_clone167->SetTotalEvents(4,1411);
   den_clone167->SetPassedEvents(4,1409);
   den_clone167->SetTotalEvents(5,1475);
   den_clone167->SetPassedEvents(5,1473);
   den_clone167->SetTotalEvents(6,1407);
   den_clone167->SetPassedEvents(6,1406);
   den_clone167->SetTotalEvents(7,1358);
   den_clone167->SetPassedEvents(7,1357);
   den_clone167->SetTotalEvents(8,1366);
   den_clone167->SetPassedEvents(8,1365);
   den_clone167->SetTotalEvents(9,1305);
   den_clone167->SetPassedEvents(9,1301);
   den_clone167->SetTotalEvents(10,1465);
   den_clone167->SetPassedEvents(10,1459);
   den_clone167->SetTotalEvents(11,1413);
   den_clone167->SetPassedEvents(11,1404);
   den_clone167->SetTotalEvents(12,1344);
   den_clone167->SetPassedEvents(12,1338);
   den_clone167->SetTotalEvents(13,1435);
   den_clone167->SetPassedEvents(13,1407);
   den_clone167->SetTotalEvents(14,1403);
   den_clone167->SetPassedEvents(14,1376);
   den_clone167->SetTotalEvents(15,1342);
   den_clone167->SetPassedEvents(15,1276);
   den_clone167->SetTotalEvents(16,1332);
   den_clone167->SetPassedEvents(16,1320);
   den_clone167->SetTotalEvents(17,1446);
   den_clone167->SetPassedEvents(17,1441);
   den_clone167->SetTotalEvents(18,1424);
   den_clone167->SetPassedEvents(18,1418);
   den_clone167->SetTotalEvents(19,1381);
   den_clone167->SetPassedEvents(19,1373);
   den_clone167->SetTotalEvents(20,1389);
   den_clone167->SetPassedEvents(20,1383);
   den_clone167->SetTotalEvents(21,1197);
   den_clone167->SetPassedEvents(21,1156);
   den_clone167->SetTotalEvents(22,900);
   den_clone167->SetPassedEvents(22,822);
   den_clone167->SetTotalEvents(23,639);
   den_clone167->SetPassedEvents(23,566);
   den_clone167->SetTotalEvents(24,66);
   den_clone167->SetPassedEvents(24,35);
   den_clone167->SetTotalEvents(25,0);
   den_clone167->SetPassedEvents(25,0);
   den_clone167->SetTotalEvents(26,0);
   den_clone167->SetPassedEvents(26,0);
   den_clone167->SetFillColor(19);
   den_clone167->SetLineWidth(2);
   den_clone167->SetMarkerStyle(23);
   den_clone167->Draw("same samep");
   
   TEfficiency * den_clone168 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone168->SetConfidenceLevel(0.6826895);
   den_clone168->SetBetaAlpha(1);
   den_clone168->SetBetaBeta(1);
   den_clone168->SetWeight(1);
   den_clone168->SetStatisticOption(0);
   den_clone168->SetPosteriorMode(0);
   den_clone168->SetShortestInterval(0);
   den_clone168->SetTotalEvents(0,0);
   den_clone168->SetPassedEvents(0,0);
   den_clone168->SetTotalEvents(1,222);
   den_clone168->SetPassedEvents(1,221);
   den_clone168->SetTotalEvents(2,423);
   den_clone168->SetPassedEvents(2,423);
   den_clone168->SetTotalEvents(3,523);
   den_clone168->SetPassedEvents(3,523);
   den_clone168->SetTotalEvents(4,488);
   den_clone168->SetPassedEvents(4,487);
   den_clone168->SetTotalEvents(5,562);
   den_clone168->SetPassedEvents(5,561);
   den_clone168->SetTotalEvents(6,469);
   den_clone168->SetPassedEvents(6,469);
   den_clone168->SetTotalEvents(7,484);
   den_clone168->SetPassedEvents(7,482);
   den_clone168->SetTotalEvents(8,449);
   den_clone168->SetPassedEvents(8,448);
   den_clone168->SetTotalEvents(9,453);
   den_clone168->SetPassedEvents(9,453);
   den_clone168->SetTotalEvents(10,482);
   den_clone168->SetPassedEvents(10,482);
   den_clone168->SetTotalEvents(11,490);
   den_clone168->SetPassedEvents(11,490);
   den_clone168->SetTotalEvents(12,552);
   den_clone168->SetPassedEvents(12,551);
   den_clone168->SetTotalEvents(13,489);
   den_clone168->SetPassedEvents(13,482);
   den_clone168->SetTotalEvents(14,492);
   den_clone168->SetPassedEvents(14,487);
   den_clone168->SetTotalEvents(15,416);
   den_clone168->SetPassedEvents(15,412);
   den_clone168->SetTotalEvents(16,473);
   den_clone168->SetPassedEvents(16,473);
   den_clone168->SetTotalEvents(17,486);
   den_clone168->SetPassedEvents(17,485);
   den_clone168->SetTotalEvents(18,496);
   den_clone168->SetPassedEvents(18,493);
   den_clone168->SetTotalEvents(19,504);
   den_clone168->SetPassedEvents(19,503);
   den_clone168->SetTotalEvents(20,527);
   den_clone168->SetPassedEvents(20,526);
   den_clone168->SetTotalEvents(21,432);
   den_clone168->SetPassedEvents(21,430);
   den_clone168->SetTotalEvents(22,274);
   den_clone168->SetPassedEvents(22,272);
   den_clone168->SetTotalEvents(23,157);
   den_clone168->SetPassedEvents(23,156);
   den_clone168->SetTotalEvents(24,13);
   den_clone168->SetPassedEvents(24,13);
   den_clone168->SetTotalEvents(25,0);
   den_clone168->SetPassedEvents(25,0);
   den_clone168->SetTotalEvents(26,0);
   den_clone168->SetPassedEvents(26,0);
   den_clone168->SetFillColor(19);

   ci = TColor::GetColor("#00cc00");
   den_clone168->SetLineColor(ci);
   den_clone168->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   den_clone168->SetMarkerColor(ci);
   den_clone168->SetMarkerStyle(23);
   den_clone168->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME1/2");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"ALCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
