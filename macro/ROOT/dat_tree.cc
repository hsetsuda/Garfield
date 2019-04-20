#include <fstream>
using namespace std;

void dat_tree(TString dat_filename = "hoge.dat",
              TString tree_filename = "hoge.root" )
{
  //ifstream ifs(dat_filename);
  TFile OutTree(tree_filename, "recreate");

  double t;
  double V;
  TTree *tree = new TTree("tree", "TangemVolt");
  tree->Branch("t", &t, "t/D");
  tree->Branch("V", &V, "V/D");

  tree->ReadFile(dat_filename, "t/D:V/D");
  
  //while(!ifs.eof()){
    //ifs >> a >> t;
    //tree->Fill();
  //}

  tree->Write();
  OutTree.Close();

  std::cout << "finish!" << std::endl;
}
