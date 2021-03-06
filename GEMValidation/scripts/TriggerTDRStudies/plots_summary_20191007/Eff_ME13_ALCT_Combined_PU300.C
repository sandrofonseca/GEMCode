void Eff_ME13_ALCT_Combined_PU300()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct  7 10:15:32 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(0.8714286,0.42125,1.109524,1.0775);
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
   
   TH1F *base__26 = new TH1F("base__26","",25,0.9,1.1);
   base__26->SetMinimum(0.5);
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
      tex = new TLatex(0.2208,0.936,"Simulation Preliminary");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TEfficiency * den_clone86 = new TEfficiency("den_clone","",25,0.9,1.1);
   
   den_clone86->SetConfidenceLevel(0.6826895);
   den_clone86->SetBetaAlpha(1);
   den_clone86->SetBetaBeta(1);
   den_clone86->SetWeight(1);
   den_clone86->SetStatisticOption(0);
   den_clone86->SetPosteriorMode(0);
   den_clone86->SetShortestInterval(0);
   den_clone86->SetTotalEvents(0,0);
   den_clone86->SetPassedEvents(0,0);
   den_clone86->SetTotalEvents(1,327);
   den_clone86->SetPassedEvents(1,272);
   den_clone86->SetTotalEvents(2,407);
   den_clone86->SetPassedEvents(2,395);
   den_clone86->SetTotalEvents(3,389);
   den_clone86->SetPassedEvents(3,386);
   den_clone86->SetTotalEvents(4,457);
   den_clone86->SetPassedEvents(4,455);
   den_clone86->SetTotalEvents(5,403);
   den_clone86->SetPassedEvents(5,403);
   den_clone86->SetTotalEvents(6,415);
   den_clone86->SetPassedEvents(6,413);
   den_clone86->SetTotalEvents(7,410);
   den_clone86->SetPassedEvents(7,409);
   den_clone86->SetTotalEvents(8,460);
   den_clone86->SetPassedEvents(8,460);
   den_clone86->SetTotalEvents(9,371);
   den_clone86->SetPassedEvents(9,370);
   den_clone86->SetTotalEvents(10,403);
   den_clone86->SetPassedEvents(10,401);
   den_clone86->SetTotalEvents(11,424);
   den_clone86->SetPassedEvents(11,423);
   den_clone86->SetTotalEvents(12,371);
   den_clone86->SetPassedEvents(12,369);
   den_clone86->SetTotalEvents(13,397);
   den_clone86->SetPassedEvents(13,396);
   den_clone86->SetTotalEvents(14,428);
   den_clone86->SetPassedEvents(14,425);
   den_clone86->SetTotalEvents(15,380);
   den_clone86->SetPassedEvents(15,379);
   den_clone86->SetTotalEvents(16,396);
   den_clone86->SetPassedEvents(16,395);
   den_clone86->SetTotalEvents(17,362);
   den_clone86->SetPassedEvents(17,360);
   den_clone86->SetTotalEvents(18,374);
   den_clone86->SetPassedEvents(18,374);
   den_clone86->SetTotalEvents(19,419);
   den_clone86->SetPassedEvents(19,418);
   den_clone86->SetTotalEvents(20,400);
   den_clone86->SetPassedEvents(20,399);
   den_clone86->SetTotalEvents(21,399);
   den_clone86->SetPassedEvents(21,397);
   den_clone86->SetTotalEvents(22,364);
   den_clone86->SetPassedEvents(22,362);
   den_clone86->SetTotalEvents(23,365);
   den_clone86->SetPassedEvents(23,364);
   den_clone86->SetTotalEvents(24,369);
   den_clone86->SetPassedEvents(24,365);
   den_clone86->SetTotalEvents(25,357);
   den_clone86->SetPassedEvents(25,353);
   den_clone86->SetTotalEvents(26,0);
   den_clone86->SetPassedEvents(26,0);
   den_clone86->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   den_clone86->SetLineColor(ci);
   den_clone86->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   den_clone86->SetMarkerColor(ci);
   den_clone86->SetMarkerStyle(23);
   den_clone86->Draw("same samep");
   
   TEfficiency * den_clone87 = new TEfficiency("den_clone","",25,0.9,1.1);
   
   den_clone87->SetConfidenceLevel(0.6826895);
   den_clone87->SetBetaAlpha(1);
   den_clone87->SetBetaBeta(1);
   den_clone87->SetWeight(1);
   den_clone87->SetStatisticOption(0);
   den_clone87->SetPosteriorMode(0);
   den_clone87->SetShortestInterval(0);
   den_clone87->SetTotalEvents(0,0);
   den_clone87->SetPassedEvents(0,0);
   den_clone87->SetTotalEvents(1,327);
   den_clone87->SetPassedEvents(1,272);
   den_clone87->SetTotalEvents(2,407);
   den_clone87->SetPassedEvents(2,395);
   den_clone87->SetTotalEvents(3,389);
   den_clone87->SetPassedEvents(3,386);
   den_clone87->SetTotalEvents(4,457);
   den_clone87->SetPassedEvents(4,455);
   den_clone87->SetTotalEvents(5,403);
   den_clone87->SetPassedEvents(5,403);
   den_clone87->SetTotalEvents(6,415);
   den_clone87->SetPassedEvents(6,413);
   den_clone87->SetTotalEvents(7,410);
   den_clone87->SetPassedEvents(7,409);
   den_clone87->SetTotalEvents(8,460);
   den_clone87->SetPassedEvents(8,460);
   den_clone87->SetTotalEvents(9,371);
   den_clone87->SetPassedEvents(9,370);
   den_clone87->SetTotalEvents(10,403);
   den_clone87->SetPassedEvents(10,401);
   den_clone87->SetTotalEvents(11,424);
   den_clone87->SetPassedEvents(11,423);
   den_clone87->SetTotalEvents(12,371);
   den_clone87->SetPassedEvents(12,369);
   den_clone87->SetTotalEvents(13,397);
   den_clone87->SetPassedEvents(13,396);
   den_clone87->SetTotalEvents(14,428);
   den_clone87->SetPassedEvents(14,425);
   den_clone87->SetTotalEvents(15,380);
   den_clone87->SetPassedEvents(15,379);
   den_clone87->SetTotalEvents(16,396);
   den_clone87->SetPassedEvents(16,395);
   den_clone87->SetTotalEvents(17,362);
   den_clone87->SetPassedEvents(17,360);
   den_clone87->SetTotalEvents(18,374);
   den_clone87->SetPassedEvents(18,374);
   den_clone87->SetTotalEvents(19,419);
   den_clone87->SetPassedEvents(19,418);
   den_clone87->SetTotalEvents(20,400);
   den_clone87->SetPassedEvents(20,399);
   den_clone87->SetTotalEvents(21,399);
   den_clone87->SetPassedEvents(21,397);
   den_clone87->SetTotalEvents(22,364);
   den_clone87->SetPassedEvents(22,362);
   den_clone87->SetTotalEvents(23,365);
   den_clone87->SetPassedEvents(23,364);
   den_clone87->SetTotalEvents(24,369);
   den_clone87->SetPassedEvents(24,365);
   den_clone87->SetTotalEvents(25,357);
   den_clone87->SetPassedEvents(25,353);
   den_clone87->SetTotalEvents(26,0);
   den_clone87->SetPassedEvents(26,0);
   den_clone87->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   den_clone87->SetLineColor(ci);
   den_clone87->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone87->SetMarkerColor(ci);
   den_clone87->SetMarkerStyle(22);
   den_clone87->Draw("same samep");
   
   TEfficiency * den_clone88 = new TEfficiency("den_clone","",25,0.9,1.1);
   
   den_clone88->SetConfidenceLevel(0.6826895);
   den_clone88->SetBetaAlpha(1);
   den_clone88->SetBetaBeta(1);
   den_clone88->SetWeight(1);
   den_clone88->SetStatisticOption(0);
   den_clone88->SetPosteriorMode(0);
   den_clone88->SetShortestInterval(0);
   den_clone88->SetTotalEvents(0,0);
   den_clone88->SetPassedEvents(0,0);
   den_clone88->SetTotalEvents(1,327);
   den_clone88->SetPassedEvents(1,272);
   den_clone88->SetTotalEvents(2,407);
   den_clone88->SetPassedEvents(2,395);
   den_clone88->SetTotalEvents(3,389);
   den_clone88->SetPassedEvents(3,386);
   den_clone88->SetTotalEvents(4,457);
   den_clone88->SetPassedEvents(4,455);
   den_clone88->SetTotalEvents(5,403);
   den_clone88->SetPassedEvents(5,403);
   den_clone88->SetTotalEvents(6,415);
   den_clone88->SetPassedEvents(6,413);
   den_clone88->SetTotalEvents(7,410);
   den_clone88->SetPassedEvents(7,409);
   den_clone88->SetTotalEvents(8,460);
   den_clone88->SetPassedEvents(8,460);
   den_clone88->SetTotalEvents(9,371);
   den_clone88->SetPassedEvents(9,370);
   den_clone88->SetTotalEvents(10,403);
   den_clone88->SetPassedEvents(10,401);
   den_clone88->SetTotalEvents(11,424);
   den_clone88->SetPassedEvents(11,423);
   den_clone88->SetTotalEvents(12,371);
   den_clone88->SetPassedEvents(12,369);
   den_clone88->SetTotalEvents(13,397);
   den_clone88->SetPassedEvents(13,396);
   den_clone88->SetTotalEvents(14,428);
   den_clone88->SetPassedEvents(14,425);
   den_clone88->SetTotalEvents(15,380);
   den_clone88->SetPassedEvents(15,379);
   den_clone88->SetTotalEvents(16,396);
   den_clone88->SetPassedEvents(16,395);
   den_clone88->SetTotalEvents(17,362);
   den_clone88->SetPassedEvents(17,360);
   den_clone88->SetTotalEvents(18,374);
   den_clone88->SetPassedEvents(18,374);
   den_clone88->SetTotalEvents(19,419);
   den_clone88->SetPassedEvents(19,418);
   den_clone88->SetTotalEvents(20,400);
   den_clone88->SetPassedEvents(20,399);
   den_clone88->SetTotalEvents(21,399);
   den_clone88->SetPassedEvents(21,397);
   den_clone88->SetTotalEvents(22,364);
   den_clone88->SetPassedEvents(22,362);
   den_clone88->SetTotalEvents(23,365);
   den_clone88->SetPassedEvents(23,364);
   den_clone88->SetTotalEvents(24,369);
   den_clone88->SetPassedEvents(24,365);
   den_clone88->SetTotalEvents(25,357);
   den_clone88->SetPassedEvents(25,353);
   den_clone88->SetTotalEvents(26,0);
   den_clone88->SetPassedEvents(26,0);
   den_clone88->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone88->SetLineColor(ci);
   den_clone88->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone88->SetMarkerColor(ci);
   den_clone88->SetMarkerStyle(21);
   den_clone88->Draw("same samep");
   
   TEfficiency * den_clone89 = new TEfficiency("den_clone","",25,0.9,1.1);
   
   den_clone89->SetConfidenceLevel(0.6826895);
   den_clone89->SetBetaAlpha(1);
   den_clone89->SetBetaBeta(1);
   den_clone89->SetWeight(1);
   den_clone89->SetStatisticOption(0);
   den_clone89->SetPosteriorMode(0);
   den_clone89->SetShortestInterval(0);
   den_clone89->SetTotalEvents(0,0);
   den_clone89->SetPassedEvents(0,0);
   den_clone89->SetTotalEvents(1,132);
   den_clone89->SetPassedEvents(1,116);
   den_clone89->SetTotalEvents(2,153);
   den_clone89->SetPassedEvents(2,150);
   den_clone89->SetTotalEvents(3,161);
   den_clone89->SetPassedEvents(3,161);
   den_clone89->SetTotalEvents(4,158);
   den_clone89->SetPassedEvents(4,158);
   den_clone89->SetTotalEvents(5,150);
   den_clone89->SetPassedEvents(5,149);
   den_clone89->SetTotalEvents(6,157);
   den_clone89->SetPassedEvents(6,156);
   den_clone89->SetTotalEvents(7,172);
   den_clone89->SetPassedEvents(7,171);
   den_clone89->SetTotalEvents(8,150);
   den_clone89->SetPassedEvents(8,149);
   den_clone89->SetTotalEvents(9,167);
   den_clone89->SetPassedEvents(9,167);
   den_clone89->SetTotalEvents(10,124);
   den_clone89->SetPassedEvents(10,123);
   den_clone89->SetTotalEvents(11,129);
   den_clone89->SetPassedEvents(11,129);
   den_clone89->SetTotalEvents(12,152);
   den_clone89->SetPassedEvents(12,151);
   den_clone89->SetTotalEvents(13,120);
   den_clone89->SetPassedEvents(13,120);
   den_clone89->SetTotalEvents(14,149);
   den_clone89->SetPassedEvents(14,149);
   den_clone89->SetTotalEvents(15,164);
   den_clone89->SetPassedEvents(15,164);
   den_clone89->SetTotalEvents(16,150);
   den_clone89->SetPassedEvents(16,150);
   den_clone89->SetTotalEvents(17,167);
   den_clone89->SetPassedEvents(17,167);
   den_clone89->SetTotalEvents(18,159);
   den_clone89->SetPassedEvents(18,159);
   den_clone89->SetTotalEvents(19,162);
   den_clone89->SetPassedEvents(19,161);
   den_clone89->SetTotalEvents(20,152);
   den_clone89->SetPassedEvents(20,151);
   den_clone89->SetTotalEvents(21,145);
   den_clone89->SetPassedEvents(21,144);
   den_clone89->SetTotalEvents(22,125);
   den_clone89->SetPassedEvents(22,124);
   den_clone89->SetTotalEvents(23,122);
   den_clone89->SetPassedEvents(23,120);
   den_clone89->SetTotalEvents(24,135);
   den_clone89->SetPassedEvents(24,134);
   den_clone89->SetTotalEvents(25,124);
   den_clone89->SetPassedEvents(25,122);
   den_clone89->SetTotalEvents(26,0);
   den_clone89->SetPassedEvents(26,0);
   den_clone89->SetFillColor(19);
   den_clone89->SetLineWidth(2);
   den_clone89->SetMarkerStyle(24);
   den_clone89->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME1/3");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"ALCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
