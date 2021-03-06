void Eff_ME21_notHQALCTnotHQCLCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 17 16:27:55 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.485714,-0.15375,2.438095,1.1275);
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
   
   TH1F *base__92 = new TH1F("base__92","",25,1.6,2.4);
   base__92->SetMinimum(0);
   base__92->SetMaximum(1.025);
   base__92->SetLineStyle(0);
   base__92->SetMarkerStyle(20);
   base__92->GetXaxis()->SetTitle("True muon |#eta|");
   base__92->GetXaxis()->SetLabelFont(42);
   base__92->GetXaxis()->SetLabelOffset(0.007);
   base__92->GetXaxis()->SetLabelSize(0.05);
   base__92->GetXaxis()->SetTitleSize(0.06);
   base__92->GetXaxis()->SetTitleOffset(0.9);
   base__92->GetXaxis()->SetTitleFont(42);
   base__92->GetYaxis()->SetTitle("Efficiency");
   base__92->GetYaxis()->SetLabelFont(42);
   base__92->GetYaxis()->SetLabelOffset(0.007);
   base__92->GetYaxis()->SetLabelSize(0.05);
   base__92->GetYaxis()->SetTitleSize(0.06);
   base__92->GetYaxis()->SetTitleOffset(0.9);
   base__92->GetYaxis()->SetTitleFont(42);
   base__92->GetZaxis()->SetLabelFont(42);
   base__92->GetZaxis()->SetLabelOffset(0.007);
   base__92->GetZaxis()->SetLabelSize(0.05);
   base__92->GetZaxis()->SetTitleSize(0.06);
   base__92->GetZaxis()->SetTitleFont(42);
   base__92->Draw("");
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
   
   TEfficiency * den_clone262 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone262->SetConfidenceLevel(0.6826895);
   den_clone262->SetBetaAlpha(1);
   den_clone262->SetBetaBeta(1);
   den_clone262->SetWeight(1);
   den_clone262->SetStatisticOption(0);
   den_clone262->SetPosteriorMode(0);
   den_clone262->SetShortestInterval(0);
   den_clone262->SetTotalEvents(0,0);
   den_clone262->SetPassedEvents(0,0);
   den_clone262->SetTotalEvents(1,735);
   den_clone262->SetPassedEvents(1,81);
   den_clone262->SetTotalEvents(2,1988);
   den_clone262->SetPassedEvents(2,69);
   den_clone262->SetTotalEvents(3,2149);
   den_clone262->SetPassedEvents(3,3);
   den_clone262->SetTotalEvents(4,2366);
   den_clone262->SetPassedEvents(4,6);
   den_clone262->SetTotalEvents(5,2041);
   den_clone262->SetPassedEvents(5,11);
   den_clone262->SetTotalEvents(6,2277);
   den_clone262->SetPassedEvents(6,39);
   den_clone262->SetTotalEvents(7,2246);
   den_clone262->SetPassedEvents(7,199);
   den_clone262->SetTotalEvents(8,2210);
   den_clone262->SetPassedEvents(8,150);
   den_clone262->SetTotalEvents(9,2202);
   den_clone262->SetPassedEvents(9,7);
   den_clone262->SetTotalEvents(10,2144);
   den_clone262->SetPassedEvents(10,3);
   den_clone262->SetTotalEvents(11,2307);
   den_clone262->SetPassedEvents(11,7);
   den_clone262->SetTotalEvents(12,2235);
   den_clone262->SetPassedEvents(12,8);
   den_clone262->SetTotalEvents(13,2241);
   den_clone262->SetPassedEvents(13,10);
   den_clone262->SetTotalEvents(14,2069);
   den_clone262->SetPassedEvents(14,273);
   den_clone262->SetTotalEvents(15,1901);
   den_clone262->SetPassedEvents(15,256);
   den_clone262->SetTotalEvents(16,2116);
   den_clone262->SetPassedEvents(16,25);
   den_clone262->SetTotalEvents(17,2218);
   den_clone262->SetPassedEvents(17,6);
   den_clone262->SetTotalEvents(18,2288);
   den_clone262->SetPassedEvents(18,6);
   den_clone262->SetTotalEvents(19,2198);
   den_clone262->SetPassedEvents(19,9);
   den_clone262->SetTotalEvents(20,2322);
   den_clone262->SetPassedEvents(20,6);
   den_clone262->SetTotalEvents(21,2256);
   den_clone262->SetPassedEvents(21,17);
   den_clone262->SetTotalEvents(22,2163);
   den_clone262->SetPassedEvents(22,10);
   den_clone262->SetTotalEvents(23,2314);
   den_clone262->SetPassedEvents(23,11);
   den_clone262->SetTotalEvents(24,2192);
   den_clone262->SetPassedEvents(24,12);
   den_clone262->SetTotalEvents(25,2217);
   den_clone262->SetPassedEvents(25,11);
   den_clone262->SetTotalEvents(26,0);
   den_clone262->SetPassedEvents(26,0);
   den_clone262->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone262->SetLineColor(ci);
   den_clone262->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone262->SetMarkerColor(ci);
   den_clone262->SetMarkerStyle(22);
   den_clone262->Draw("same samep");
   
   TEfficiency * den_clone263 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone263->SetConfidenceLevel(0.6826895);
   den_clone263->SetBetaAlpha(1);
   den_clone263->SetBetaBeta(1);
   den_clone263->SetWeight(1);
   den_clone263->SetStatisticOption(0);
   den_clone263->SetPosteriorMode(0);
   den_clone263->SetShortestInterval(0);
   den_clone263->SetTotalEvents(0,0);
   den_clone263->SetPassedEvents(0,0);
   den_clone263->SetTotalEvents(1,779);
   den_clone263->SetPassedEvents(1,88);
   den_clone263->SetTotalEvents(2,1882);
   den_clone263->SetPassedEvents(2,72);
   den_clone263->SetTotalEvents(3,2194);
   den_clone263->SetPassedEvents(3,6);
   den_clone263->SetTotalEvents(4,1987);
   den_clone263->SetPassedEvents(4,8);
   den_clone263->SetTotalEvents(5,2187);
   den_clone263->SetPassedEvents(5,8);
   den_clone263->SetTotalEvents(6,1962);
   den_clone263->SetPassedEvents(6,44);
   den_clone263->SetTotalEvents(7,2116);
   den_clone263->SetPassedEvents(7,194);
   den_clone263->SetTotalEvents(8,2222);
   den_clone263->SetPassedEvents(8,136);
   den_clone263->SetTotalEvents(9,2040);
   den_clone263->SetPassedEvents(9,6);
   den_clone263->SetTotalEvents(10,2172);
   den_clone263->SetPassedEvents(10,8);
   den_clone263->SetTotalEvents(11,2189);
   den_clone263->SetPassedEvents(11,3);
   den_clone263->SetTotalEvents(12,2097);
   den_clone263->SetPassedEvents(12,8);
   den_clone263->SetTotalEvents(13,2102);
   den_clone263->SetPassedEvents(13,17);
   den_clone263->SetTotalEvents(14,2047);
   den_clone263->SetPassedEvents(14,235);
   den_clone263->SetTotalEvents(15,2000);
   den_clone263->SetPassedEvents(15,248);
   den_clone263->SetTotalEvents(16,2129);
   den_clone263->SetPassedEvents(16,39);
   den_clone263->SetTotalEvents(17,2140);
   den_clone263->SetPassedEvents(17,7);
   den_clone263->SetTotalEvents(18,2122);
   den_clone263->SetPassedEvents(18,11);
   den_clone263->SetTotalEvents(19,2180);
   den_clone263->SetPassedEvents(19,13);
   den_clone263->SetTotalEvents(20,2100);
   den_clone263->SetPassedEvents(20,11);
   den_clone263->SetTotalEvents(21,2070);
   den_clone263->SetPassedEvents(21,22);
   den_clone263->SetTotalEvents(22,2134);
   den_clone263->SetPassedEvents(22,21);
   den_clone263->SetTotalEvents(23,2148);
   den_clone263->SetPassedEvents(23,18);
   den_clone263->SetTotalEvents(24,2010);
   den_clone263->SetPassedEvents(24,16);
   den_clone263->SetTotalEvents(25,2094);
   den_clone263->SetPassedEvents(25,17);
   den_clone263->SetTotalEvents(26,0);
   den_clone263->SetPassedEvents(26,0);
   den_clone263->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone263->SetLineColor(ci);
   den_clone263->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone263->SetMarkerColor(ci);
   den_clone263->SetMarkerStyle(21);
   den_clone263->Draw("same samep");
   
   TEfficiency * den_clone264 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone264->SetConfidenceLevel(0.6826895);
   den_clone264->SetBetaAlpha(1);
   den_clone264->SetBetaBeta(1);
   den_clone264->SetWeight(1);
   den_clone264->SetStatisticOption(0);
   den_clone264->SetPosteriorMode(0);
   den_clone264->SetShortestInterval(0);
   den_clone264->SetTotalEvents(0,0);
   den_clone264->SetPassedEvents(0,0);
   den_clone264->SetTotalEvents(1,788);
   den_clone264->SetPassedEvents(1,90);
   den_clone264->SetTotalEvents(2,1850);
   den_clone264->SetPassedEvents(2,66);
   den_clone264->SetTotalEvents(3,2132);
   den_clone264->SetPassedEvents(3,2);
   den_clone264->SetTotalEvents(4,1961);
   den_clone264->SetPassedEvents(4,5);
   den_clone264->SetTotalEvents(5,2159);
   den_clone264->SetPassedEvents(5,6);
   den_clone264->SetTotalEvents(6,1948);
   den_clone264->SetPassedEvents(6,40);
   den_clone264->SetTotalEvents(7,2066);
   den_clone264->SetPassedEvents(7,188);
   den_clone264->SetTotalEvents(8,2210);
   den_clone264->SetPassedEvents(8,142);
   den_clone264->SetTotalEvents(9,2024);
   den_clone264->SetPassedEvents(9,5);
   den_clone264->SetTotalEvents(10,2138);
   den_clone264->SetPassedEvents(10,3);
   den_clone264->SetTotalEvents(11,2171);
   den_clone264->SetPassedEvents(11,2);
   den_clone264->SetTotalEvents(12,2088);
   den_clone264->SetPassedEvents(12,7);
   den_clone264->SetTotalEvents(13,2062);
   den_clone264->SetPassedEvents(13,13);
   den_clone264->SetTotalEvents(14,2030);
   den_clone264->SetPassedEvents(14,227);
   den_clone264->SetTotalEvents(15,2000);
   den_clone264->SetPassedEvents(15,240);
   den_clone264->SetTotalEvents(16,2125);
   den_clone264->SetPassedEvents(16,33);
   den_clone264->SetTotalEvents(17,2116);
   den_clone264->SetPassedEvents(17,2);
   den_clone264->SetTotalEvents(18,2080);
   den_clone264->SetPassedEvents(18,4);
   den_clone264->SetTotalEvents(19,2140);
   den_clone264->SetPassedEvents(19,6);
   den_clone264->SetTotalEvents(20,2084);
   den_clone264->SetPassedEvents(20,5);
   den_clone264->SetTotalEvents(21,2044);
   den_clone264->SetPassedEvents(21,5);
   den_clone264->SetTotalEvents(22,2130);
   den_clone264->SetPassedEvents(22,10);
   den_clone264->SetTotalEvents(23,2114);
   den_clone264->SetPassedEvents(23,5);
   den_clone264->SetTotalEvents(24,1988);
   den_clone264->SetPassedEvents(24,5);
   den_clone264->SetTotalEvents(25,2087);
   den_clone264->SetPassedEvents(25,7);
   den_clone264->SetTotalEvents(26,0);
   den_clone264->SetPassedEvents(26,0);
   den_clone264->SetFillColor(19);
   den_clone264->SetLineWidth(2);
   den_clone264->SetMarkerStyle(23);
   den_clone264->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME2/1");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"notHQALCTnotHQCLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
