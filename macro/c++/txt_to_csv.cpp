#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

  if(argc!=3){
    cerr << "Usage : ./txt_to_csv <fin name> <fout num>" <<endl;
    exit(1);
  }

  string fname   = argv[1];
  string out_num = argv[2];
  string outname = "data" + out_num + ".csv";

  ifstream file;
  file.open(fname);

  if(file.is_open()){
    cout << "open file : " << fname <<endl;
  }
  ofstream ofs(outname);

  string line;

  //string::size_type comment_start = 0;
  //while(!file.eof()){  // eof: return true if stream reach the file end

  while( getline(file, line) ){
    if(line.find("A") != string::npos)  // string::npos means string::find can not find the word
    {
      continue;
    }
    if(line.find("=") != string::npos)
    {
      continue;
    }

    ofs << line <<endl;
  }
  file.close();
  return 0;
}



