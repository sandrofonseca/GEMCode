void RPCClusterSize_ME32()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  8 14:19:57 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-1.428571,-0.0549319,10.47619,0.4028339);
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
   
   TH1F *num__24 = new TH1F("num__24","",10,0,10);
   num__24->SetBinContent(2,0.348774);
   num__24->SetBinContent(3,0.342257);
   num__24->SetBinContent(4,0.2382672);
   num__24->SetBinContent(5,0.03900792);
   num__24->SetBinContent(6,0.01490928);
   num__24->SetBinContent(7,0.007407755);
   num__24->SetBinContent(8,0.003891415);
   num__24->SetBinContent(9,0.003235032);
   num__24->SetBinContent(10,0.002250457);
   num__24->SetBinContent(11,0.006704487);
   num__24->SetBinError(2,0.004043773);
   num__24->SetBinError(3,0.004005815);
   num__24->SetBinError(4,0.003342311);
   num__24->SetBinError(5,0.001352356);
   num__24->SetBinError(6,0.0008360708);
   num__24->SetBinError(7,0.0005893293);
   num__24->SetBinError(8,0.0004271383);
   num__24->SetBinError(9,0.0003894521);
   num__24->SetBinError(10,0.0003248255);
   num__24->SetBinError(11,0.0005606574);
   num__24->SetEntries(21472);
   num__24->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   num__24->SetLineColor(ci);
   num__24->SetLineStyle(0);
   num__24->SetLineWidth(2);
   num__24->SetMarkerStyle(20);
   num__24->GetXaxis()->SetTitle("RPC cluster size");
   num__24->GetXaxis()->SetLabelFont(42);
   num__24->GetXaxis()->SetLabelOffset(0.007);
   num__24->GetXaxis()->SetLabelSize(0.05);
   num__24->GetXaxis()->SetTitleSize(0.06);
   num__24->GetXaxis()->SetTitleOffset(0.9);
   num__24->GetXaxis()->SetTitleFont(42);
   num__24->GetYaxis()->SetTitle("Number of entries");
   num__24->GetYaxis()->SetLabelFont(42);
   num__24->GetYaxis()->SetLabelOffset(0.007);
   num__24->GetYaxis()->SetLabelSize(0.05);
   num__24->GetYaxis()->SetTitleSize(0.06);
   num__24->GetYaxis()->SetTitleOffset(1.25);
   num__24->GetYaxis()->SetTitleFont(42);
   num__24->GetZaxis()->SetLabelFont(42);
   num__24->GetZaxis()->SetLabelOffset(0.007);
   num__24->GetZaxis()->SetLabelSize(0.05);
   num__24->GetZaxis()->SetTitleSize(0.06);
   num__24->GetZaxis()->SetTitleFont(42);
   num__24->Draw("HIST");
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
