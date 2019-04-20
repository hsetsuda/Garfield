//  thr = voltage threthold [V]
//  time_s/e = start/end time of beam [s]
//
//  count voltage waveform rising up and across the threthold

void threthold(TString inputfile = "hoge", double thr = 9.0, double time_s = 60.0, double time_e = 660.0)
{
  // read root file of result
  TString root = ".root";
  TString finname = inputfile + root;

  TFile *in_tree = new TFile(finname, "read");
  TTree *out_tree = (TTree*)in_tree->Get("tree");

  Double_t t;
  Double_t V;
  out_tree->SetBranchAddress("t", &t);  // time
  out_tree->SetBranchAddress("V", &V);  // Voltage

  Int_t N = out_tree->GetEntries();
  Int_t max = N+10;  // buffer
  double time[max];
  double volt[max];
  
  // save as tree
  //TString foutname = outputfile + root;
  //TFile OutTree(foutname, "recreate");
  //TTree *hogetree = new TTree("hogetree", "VoltHOGE");
  //hogetree->Branch("nch", &N, "nch/I");
  //hogetree->Branch("time", time, "time[nch]/D");
  //hogetree->Branch("volt", volt, "volt[nch]/D");


  // fill these data to box for analys
  for(Int_t ientry=0; ientry<N; ientry++)
  {
    out_tree->GetEntry(ientry);
    time[ientry] = t;
    volt[ientry] = V;
  }

  // count how many times spark occur
  int spark = 0;
  for(int i=1; i<N; i++)
  {
    if(time[i]<time_s || time_e < time[i])
    {
      continue;
    }
    if((volt[i-1] < thr) && (volt[i-1] < volt[i]) && (thr <= volt[i]) )
    {
      spark += 1;
    }
  }
  //hogetree->Fill();
  //hogetree->Write();
  //OutTree.Close();
  std::cout << "spark : " << spark << " times" <<std::endl;

}
