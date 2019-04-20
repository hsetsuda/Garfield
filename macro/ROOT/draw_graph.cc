void draw_graph(TString datfile = "100150.dat")
{
  TGraph* g1 = new TGraph(datfile, "%lf %lf");
  g1->SetLineColor(1);
  g1->SetLineWidth(2);
  
  //TMultiGraph *mg = new TMultiGraph("mg", "E_Field at z=20um;r[cm]; E field[kV/cm]");
  TCanvas *c1 = new TCanvas( "c1", "c1", 1200, 900);
  //TLegend *leg =new TLegend( 0.7, 0.6, 0.9, 0.9);

  //c1->SetLogy();
  c1->SetGrid();
  //mg->Add(g1);
  //mg->Add(g2);
  //leg->AddEntry((TObject*)0, "#kern[-0.2]{(Anode height, relative permitivity)}", "");
  //leg->AddEntry(g1, "(100um, 3.5)", "l");

  //mg->Draw("AC");
  g1->Draw("AC")
  //leg->Draw();
}
