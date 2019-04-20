#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {

  string in_name  = argv[1];
  string out_name = argv[2];
  
  ifstream ifs(in_name);
  string str;

  if(ifs.fail()) {
    cerr << "File do not exist.\n";
    exit(0);
  }

  ofstream ofs(out_name);

  //int a=0, b=0, c=0;
  int a;
  double t_div =0;
  double i = 0;

  while(getline(ifs, str)) {
    // read data only ch1
    if(str.find("CH2") != string::npos)
    {
      cout << "finish" <<endl;
      exit(1);
    }

    // read time unit[sec]
    if(str.find("TimeDiv=1") != string::npos){
      t_div = 0.01;
    }
    if(str.find("TimeDiv=2") != string::npos){
      t_div = 0.005;
    }
    
    // read data
    a=0; 
    // std::string::data nearly equal std::string::c_str
    //sscanf(str.data(), "%d,%d,%d", &a, &b, &c);
    sscanf(str.data(), "%d", &a);
    if(a==0)
    {
      continue;
    }

    ofs << i*t_div  << " " << a/10000 << endl;
    i += 1;
  }

  return 0;
}
