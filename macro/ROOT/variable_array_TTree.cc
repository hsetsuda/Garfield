void variable_array_TTree(TString outputfile = "savehoge")
{
  TString root = ".root";
  TString foutname = outputfile + root;

  Int_t N = 500;  // array length
  Int_t max = N + 10;  // buffer

  TFile OutTree(foutname, "recreate");
  Double_t time[max];
  Double_t volt[max];

  TTree *tree = new TTree("tree", "variable array");
  tree->Branch("nch", &N, "nch/I");
  tree->Branch("time", time, "time[nch]/D");
  tree->Branch("volt", volt, "volt[nch]/D");

  TRandom3 *rnd = new TRandom3();
  for(Int_t i=0; i<N; i++){
    time[i] = i*0.1;
    volt[i] = rnd->Rndm();
  }
  //in_tree->Close();

  tree->Fill();
  tree->Write();
  OutTree.Close();

}
