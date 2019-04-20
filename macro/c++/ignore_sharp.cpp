#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

  if(argc!=2){
    cerr << "Usage : ./ignore_comment <fin name> <fout num>" <<endl;
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

  string buf;
  string::size_type comment_start = 0;
  while(!file.eof())  // eof: return true if stream reach the file end
  {
    getline(file, buf);

    // ignore '#' start line as comment
    if( (comment_start = buf.find('#')) != string::size_type(-1) )
    {}
    else
    {
       ofs << buf <<endl;
    }
  }
  file.close();

  cout << "finish writing csv file!" <<endl;
  
  return 0;
}


