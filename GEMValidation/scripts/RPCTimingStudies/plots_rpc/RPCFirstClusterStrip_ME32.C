void RPCFirstClusterStrip_ME32()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  8 14:19:57 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-14.28571,-0.007826588,104.7619,0.05739498);
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
   
   TH1F *num__23 = new TH1F("num__23","",100,0,100);
   num__23->SetBinContent(2,0.04969262);
   num__23->SetBinContent(3,0.03255402);
   num__23->SetBinContent(4,0.03138972);
   num__23->SetBinContent(5,0.03213487);
   num__23->SetBinContent(6,0.03213487);
   num__23->SetBinContent(7,0.03115685);
   num__23->SetBinContent(8,0.03087742);
   num__23->SetBinContent(9,0.03120343);
   num__23->SetBinContent(10,0.03166915);
   num__23->SetBinContent(11,0.03301975);
   num__23->SetBinContent(12,0.03017884);
   num__23->SetBinContent(13,0.03059799);
   num__23->SetBinContent(14,0.02971311);
   num__23->SetBinContent(15,0.03106371);
   num__23->SetBinContent(16,0.02798994);
   num__23->SetBinContent(17,0.03129657);
   num__23->SetBinContent(18,0.03325261);
   num__23->SetBinContent(19,0.03143629);
   num__23->SetBinContent(20,0.03101714);
   num__23->SetBinContent(21,0.03278688);
   num__23->SetBinContent(22,0.0304117);
   num__23->SetBinContent(23,0.03301975);
   num__23->SetBinContent(24,0.03194859);
   num__23->SetBinContent(25,0.03059799);
   num__23->SetBinContent(26,0.02901453);
   num__23->SetBinContent(27,0.03120343);
   num__23->SetBinContent(28,0.0326006);
   num__23->SetBinContent(29,0.0320883);
   num__23->SetBinContent(30,0.02948025);
   num__23->SetBinContent(31,0.03204173);
   num__23->SetBinContent(32,0.03269374);
   num__23->SetBinContent(33,0.009733606);
   num__23->SetBinError(2,0.001521282);
   num__23->SetBinError(3,0.001231306);
   num__23->SetBinError(4,0.001209087);
   num__23->SetBinError(5,0.001223354);
   num__23->SetBinError(6,0.001223354);
   num__23->SetBinError(7,0.001204594);
   num__23->SetBinError(8,0.00119918);
   num__23->SetBinError(9,0.001205494);
   num__23->SetBinError(10,0.001214456);
   num__23->SetBinError(11,0.001240083);
   num__23->SetBinError(12,0.001185537);
   num__23->SetBinError(13,0.001193741);
   num__23->SetBinError(14,0.001176353);
   num__23->SetBinError(15,0.001202792);
   num__23->SetBinError(16,0.001141733);
   num__23->SetBinError(17,0.001207291);
   num__23->SetBinError(18,0.001244448);
   num__23->SetBinError(19,0.001209983);
   num__23->SetBinError(20,0.00120189);
   num__23->SetBinError(21,0.001235702);
   num__23->SetBinError(22,0.001190102);
   num__23->SetBinError(23,0.001240083);
   num__23->SetBinError(24,0.001219803);
   num__23->SetBinError(25,0.001193741);
   num__23->SetBinError(26,0.001162443);
   num__23->SetBinError(27,0.001205494);
   num__23->SetBinError(28,0.001232187);
   num__23->SetBinError(29,0.001222467);
   num__23->SetBinError(30,0.001171735);
   num__23->SetBinError(31,0.001221579);
   num__23->SetBinError(32,0.001233946);
   num__23->SetBinError(33,0.0006732876);
   num__23->SetEntries(21472);
   num__23->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   num__23->SetLineColor(ci);
   num__23->SetLineStyle(0);
   num__23->SetLineWidth(2);
   num__23->SetMarkerStyle(20);
   num__23->GetXaxis()->SetTitle("RPC cluster strips");
   num__23->GetXaxis()->SetLabelFont(42);
   num__23->GetXaxis()->SetLabelOffset(0.007);
   num__23->GetXaxis()->SetLabelSize(0.05);
   num__23->GetXaxis()->SetTitleSize(0.06);
   num__23->GetXaxis()->SetTitleOffset(0.9);
   num__23->GetXaxis()->SetTitleFont(42);
   num__23->GetYaxis()->SetTitle("Number of entries");
   num__23->GetYaxis()->SetLabelFont(42);
   num__23->GetYaxis()->SetLabelOffset(0.007);
   num__23->GetYaxis()->SetLabelSize(0.05);
   num__23->GetYaxis()->SetTitleSize(0.06);
   num__23->GetYaxis()->SetTitleOffset(1.25);
   num__23->GetYaxis()->SetTitleFont(42);
   num__23->GetZaxis()->SetLabelFont(42);
   num__23->GetZaxis()->SetLabelOffset(0.007);
   num__23->GetZaxis()->SetLabelSize(0.05);
   num__23->GetZaxis()->SetTitleSize(0.06);
   num__23->GetZaxis()->SetTitleFont(42);
   num__23->Draw("HIST");
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
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("num","RecHit","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TText *text = new TText(0.17,0.24,"RE3/2");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
