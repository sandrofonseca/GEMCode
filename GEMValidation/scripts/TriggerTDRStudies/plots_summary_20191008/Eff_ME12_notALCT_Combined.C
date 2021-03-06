void Eff_ME12_notALCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct  9 14:18:41 2019) by ROOT version 6.14/09
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
   
   TH1F *base__26 = new TH1F("base__26","",25,1.2,1.7);
   base__26->SetMinimum(0);
   base__26->SetMaximum(1.025);
   base__26->SetLineStyle(0);
   base__26->SetMarkerStyle(20);
   base__26->GetXaxis()->SetTitle("True muon |#eta|");
   base__26->GetXaxis()->SetLabelFont(42);
   base__26->GetXaxis()->SetLabelOffset(0.007);
   base__26->GetXaxis()->SetLabelSize(0.05);
   base__26->GetXaxis()->SetTitleSize(0.06);
   base__26->GetXaxis()->SetTitleOffset(0.9);
   base__26->GetXaxis()->SetTitleFont(42);
   base__26->GetYaxis()->SetTitle("Efficiency");
   base__26->GetYaxis()->SetLabelFont(42);
   base__26->GetYaxis()->SetLabelOffset(0.007);
   base__26->GetYaxis()->SetLabelSize(0.05);
   base__26->GetYaxis()->SetTitleSize(0.06);
   base__26->GetYaxis()->SetTitleOffset(0.9);
   base__26->GetYaxis()->SetTitleFont(42);
   base__26->GetZaxis()->SetLabelFont(42);
   base__26->GetZaxis()->SetLabelOffset(0.007);
   base__26->GetZaxis()->SetLabelSize(0.05);
   base__26->GetZaxis()->SetTitleSize(0.06);
   base__26->GetZaxis()->SetTitleFont(42);
   base__26->Draw("");
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
   
   TEfficiency * den_clone101 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone101->SetConfidenceLevel(0.6826895);
   den_clone101->SetBetaAlpha(1);
   den_clone101->SetBetaBeta(1);
   den_clone101->SetWeight(1);
   den_clone101->SetStatisticOption(0);
   den_clone101->SetPosteriorMode(0);
   den_clone101->SetShortestInterval(0);
   den_clone101->SetTotalEvents(0,0);
   den_clone101->SetPassedEvents(0,0);
   den_clone101->SetTotalEvents(1,820);
   den_clone101->SetPassedEvents(1,41);
   den_clone101->SetTotalEvents(2,1213);
   den_clone101->SetPassedEvents(2,84);
   den_clone101->SetTotalEvents(3,1354);
   den_clone101->SetPassedEvents(3,0);
   den_clone101->SetTotalEvents(4,1323);
   den_clone101->SetPassedEvents(4,1);
   den_clone101->SetTotalEvents(5,1390);
   den_clone101->SetPassedEvents(5,2);
   den_clone101->SetTotalEvents(6,1462);
   den_clone101->SetPassedEvents(6,2);
   den_clone101->SetTotalEvents(7,1398);
   den_clone101->SetPassedEvents(7,3);
   den_clone101->SetTotalEvents(8,1433);
   den_clone101->SetPassedEvents(8,2);
   den_clone101->SetTotalEvents(9,1329);
   den_clone101->SetPassedEvents(9,3);
   den_clone101->SetTotalEvents(10,1404);
   den_clone101->SetPassedEvents(10,5);
   den_clone101->SetTotalEvents(11,1430);
   den_clone101->SetPassedEvents(11,3);
   den_clone101->SetTotalEvents(12,1367);
   den_clone101->SetPassedEvents(12,5);
   den_clone101->SetTotalEvents(13,1349);
   den_clone101->SetPassedEvents(13,23);
   den_clone101->SetTotalEvents(14,1357);
   den_clone101->SetPassedEvents(14,26);
   den_clone101->SetTotalEvents(15,1298);
   den_clone101->SetPassedEvents(15,59);
   den_clone101->SetTotalEvents(16,1436);
   den_clone101->SetPassedEvents(16,12);
   den_clone101->SetTotalEvents(17,1307);
   den_clone101->SetPassedEvents(17,1);
   den_clone101->SetTotalEvents(18,1268);
   den_clone101->SetPassedEvents(18,5);
   den_clone101->SetTotalEvents(19,1329);
   den_clone101->SetPassedEvents(19,3);
   den_clone101->SetTotalEvents(20,1413);
   den_clone101->SetPassedEvents(20,2);
   den_clone101->SetTotalEvents(21,1263);
   den_clone101->SetPassedEvents(21,32);
   den_clone101->SetTotalEvents(22,804);
   den_clone101->SetPassedEvents(22,55);
   den_clone101->SetTotalEvents(23,621);
   den_clone101->SetPassedEvents(23,61);
   den_clone101->SetTotalEvents(24,81);
   den_clone101->SetPassedEvents(24,42);
   den_clone101->SetTotalEvents(25,0);
   den_clone101->SetPassedEvents(25,0);
   den_clone101->SetTotalEvents(26,0);
   den_clone101->SetPassedEvents(26,0);
   den_clone101->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone101->SetLineColor(ci);
   den_clone101->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone101->SetMarkerColor(ci);
   den_clone101->SetMarkerStyle(22);
   den_clone101->Draw("same samep");
   
   TEfficiency * den_clone102 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone102->SetConfidenceLevel(0.6826895);
   den_clone102->SetBetaAlpha(1);
   den_clone102->SetBetaBeta(1);
   den_clone102->SetWeight(1);
   den_clone102->SetStatisticOption(0);
   den_clone102->SetPosteriorMode(0);
   den_clone102->SetShortestInterval(0);
   den_clone102->SetTotalEvents(0,0);
   den_clone102->SetPassedEvents(0,0);
   den_clone102->SetTotalEvents(1,771);
   den_clone102->SetPassedEvents(1,39);
   den_clone102->SetTotalEvents(2,1220);
   den_clone102->SetPassedEvents(2,76);
   den_clone102->SetTotalEvents(3,1397);
   den_clone102->SetPassedEvents(3,4);
   den_clone102->SetTotalEvents(4,1411);
   den_clone102->SetPassedEvents(4,2);
   den_clone102->SetTotalEvents(5,1475);
   den_clone102->SetPassedEvents(5,2);
   den_clone102->SetTotalEvents(6,1407);
   den_clone102->SetPassedEvents(6,1);
   den_clone102->SetTotalEvents(7,1358);
   den_clone102->SetPassedEvents(7,1);
   den_clone102->SetTotalEvents(8,1366);
   den_clone102->SetPassedEvents(8,1);
   den_clone102->SetTotalEvents(9,1305);
   den_clone102->SetPassedEvents(9,4);
   den_clone102->SetTotalEvents(10,1465);
   den_clone102->SetPassedEvents(10,6);
   den_clone102->SetTotalEvents(11,1413);
   den_clone102->SetPassedEvents(11,9);
   den_clone102->SetTotalEvents(12,1344);
   den_clone102->SetPassedEvents(12,6);
   den_clone102->SetTotalEvents(13,1435);
   den_clone102->SetPassedEvents(13,28);
   den_clone102->SetTotalEvents(14,1403);
   den_clone102->SetPassedEvents(14,27);
   den_clone102->SetTotalEvents(15,1342);
   den_clone102->SetPassedEvents(15,66);
   den_clone102->SetTotalEvents(16,1332);
   den_clone102->SetPassedEvents(16,12);
   den_clone102->SetTotalEvents(17,1446);
   den_clone102->SetPassedEvents(17,5);
   den_clone102->SetTotalEvents(18,1424);
   den_clone102->SetPassedEvents(18,6);
   den_clone102->SetTotalEvents(19,1381);
   den_clone102->SetPassedEvents(19,8);
   den_clone102->SetTotalEvents(20,1389);
   den_clone102->SetPassedEvents(20,6);
   den_clone102->SetTotalEvents(21,1197);
   den_clone102->SetPassedEvents(21,41);
   den_clone102->SetTotalEvents(22,900);
   den_clone102->SetPassedEvents(22,78);
   den_clone102->SetTotalEvents(23,639);
   den_clone102->SetPassedEvents(23,73);
   den_clone102->SetTotalEvents(24,66);
   den_clone102->SetPassedEvents(24,31);
   den_clone102->SetTotalEvents(25,0);
   den_clone102->SetPassedEvents(25,0);
   den_clone102->SetTotalEvents(26,0);
   den_clone102->SetPassedEvents(26,0);
   den_clone102->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone102->SetLineColor(ci);
   den_clone102->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone102->SetMarkerColor(ci);
   den_clone102->SetMarkerStyle(21);
   den_clone102->Draw("same samep");
   
   TEfficiency * den_clone103 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone103->SetConfidenceLevel(0.6826895);
   den_clone103->SetBetaAlpha(1);
   den_clone103->SetBetaBeta(1);
   den_clone103->SetWeight(1);
   den_clone103->SetStatisticOption(0);
   den_clone103->SetPosteriorMode(0);
   den_clone103->SetShortestInterval(0);
   den_clone103->SetTotalEvents(0,0);
   den_clone103->SetPassedEvents(0,0);
   den_clone103->SetTotalEvents(1,771);
   den_clone103->SetPassedEvents(1,39);
   den_clone103->SetTotalEvents(2,1220);
   den_clone103->SetPassedEvents(2,76);
   den_clone103->SetTotalEvents(3,1397);
   den_clone103->SetPassedEvents(3,4);
   den_clone103->SetTotalEvents(4,1411);
   den_clone103->SetPassedEvents(4,2);
   den_clone103->SetTotalEvents(5,1475);
   den_clone103->SetPassedEvents(5,2);
   den_clone103->SetTotalEvents(6,1407);
   den_clone103->SetPassedEvents(6,1);
   den_clone103->SetTotalEvents(7,1358);
   den_clone103->SetPassedEvents(7,1);
   den_clone103->SetTotalEvents(8,1366);
   den_clone103->SetPassedEvents(8,1);
   den_clone103->SetTotalEvents(9,1305);
   den_clone103->SetPassedEvents(9,4);
   den_clone103->SetTotalEvents(10,1465);
   den_clone103->SetPassedEvents(10,6);
   den_clone103->SetTotalEvents(11,1413);
   den_clone103->SetPassedEvents(11,9);
   den_clone103->SetTotalEvents(12,1344);
   den_clone103->SetPassedEvents(12,6);
   den_clone103->SetTotalEvents(13,1435);
   den_clone103->SetPassedEvents(13,28);
   den_clone103->SetTotalEvents(14,1403);
   den_clone103->SetPassedEvents(14,27);
   den_clone103->SetTotalEvents(15,1342);
   den_clone103->SetPassedEvents(15,66);
   den_clone103->SetTotalEvents(16,1332);
   den_clone103->SetPassedEvents(16,12);
   den_clone103->SetTotalEvents(17,1446);
   den_clone103->SetPassedEvents(17,5);
   den_clone103->SetTotalEvents(18,1424);
   den_clone103->SetPassedEvents(18,6);
   den_clone103->SetTotalEvents(19,1381);
   den_clone103->SetPassedEvents(19,8);
   den_clone103->SetTotalEvents(20,1389);
   den_clone103->SetPassedEvents(20,6);
   den_clone103->SetTotalEvents(21,1197);
   den_clone103->SetPassedEvents(21,41);
   den_clone103->SetTotalEvents(22,900);
   den_clone103->SetPassedEvents(22,78);
   den_clone103->SetTotalEvents(23,639);
   den_clone103->SetPassedEvents(23,73);
   den_clone103->SetTotalEvents(24,66);
   den_clone103->SetPassedEvents(24,31);
   den_clone103->SetTotalEvents(25,0);
   den_clone103->SetPassedEvents(25,0);
   den_clone103->SetTotalEvents(26,0);
   den_clone103->SetPassedEvents(26,0);
   den_clone103->SetFillColor(19);
   den_clone103->SetLineWidth(2);
   den_clone103->SetMarkerStyle(23);
   den_clone103->Draw("same samep");
   
   TEfficiency * den_clone104 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone104->SetConfidenceLevel(0.6826895);
   den_clone104->SetBetaAlpha(1);
   den_clone104->SetBetaBeta(1);
   den_clone104->SetWeight(1);
   den_clone104->SetStatisticOption(0);
   den_clone104->SetPosteriorMode(0);
   den_clone104->SetShortestInterval(0);
   den_clone104->SetTotalEvents(0,0);
   den_clone104->SetPassedEvents(0,0);
   den_clone104->SetTotalEvents(1,222);
   den_clone104->SetPassedEvents(1,1);
   den_clone104->SetTotalEvents(2,423);
   den_clone104->SetPassedEvents(2,0);
   den_clone104->SetTotalEvents(3,523);
   den_clone104->SetPassedEvents(3,0);
   den_clone104->SetTotalEvents(4,488);
   den_clone104->SetPassedEvents(4,1);
   den_clone104->SetTotalEvents(5,562);
   den_clone104->SetPassedEvents(5,1);
   den_clone104->SetTotalEvents(6,469);
   den_clone104->SetPassedEvents(6,0);
   den_clone104->SetTotalEvents(7,484);
   den_clone104->SetPassedEvents(7,2);
   den_clone104->SetTotalEvents(8,449);
   den_clone104->SetPassedEvents(8,1);
   den_clone104->SetTotalEvents(9,453);
   den_clone104->SetPassedEvents(9,0);
   den_clone104->SetTotalEvents(10,482);
   den_clone104->SetPassedEvents(10,0);
   den_clone104->SetTotalEvents(11,490);
   den_clone104->SetPassedEvents(11,0);
   den_clone104->SetTotalEvents(12,552);
   den_clone104->SetPassedEvents(12,1);
   den_clone104->SetTotalEvents(13,489);
   den_clone104->SetPassedEvents(13,7);
   den_clone104->SetTotalEvents(14,492);
   den_clone104->SetPassedEvents(14,5);
   den_clone104->SetTotalEvents(15,416);
   den_clone104->SetPassedEvents(15,4);
   den_clone104->SetTotalEvents(16,473);
   den_clone104->SetPassedEvents(16,0);
   den_clone104->SetTotalEvents(17,486);
   den_clone104->SetPassedEvents(17,1);
   den_clone104->SetTotalEvents(18,496);
   den_clone104->SetPassedEvents(18,3);
   den_clone104->SetTotalEvents(19,504);
   den_clone104->SetPassedEvents(19,1);
   den_clone104->SetTotalEvents(20,527);
   den_clone104->SetPassedEvents(20,1);
   den_clone104->SetTotalEvents(21,432);
   den_clone104->SetPassedEvents(21,2);
   den_clone104->SetTotalEvents(22,274);
   den_clone104->SetPassedEvents(22,2);
   den_clone104->SetTotalEvents(23,157);
   den_clone104->SetPassedEvents(23,1);
   den_clone104->SetTotalEvents(24,13);
   den_clone104->SetPassedEvents(24,0);
   den_clone104->SetTotalEvents(25,0);
   den_clone104->SetPassedEvents(25,0);
   den_clone104->SetTotalEvents(26,0);
   den_clone104->SetPassedEvents(26,0);
   den_clone104->SetFillColor(19);

   ci = TColor::GetColor("#00cc00");
   den_clone104->SetLineColor(ci);
   den_clone104->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   den_clone104->SetMarkerColor(ci);
   den_clone104->SetMarkerStyle(23);
   den_clone104->Draw("same samep");
   
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
   text = new TText(0.17,0.24,"notALCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
