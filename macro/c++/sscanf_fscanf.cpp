//  ifstream sscanf : read data from string type
//  fopen    fscanf : read data from FILE* type

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

  //ifstreamの場合
  cout << "ifstream" << endl;

  ifstream ifs("data.txt");
  string str;

  if(ifs.fail()) {
    cerr << "File do not exist.\n";
    exit(0);
  }

  int a=0, b=0, c=0;

  while(getline(ifs, str)) {
    a=0; b=0; c=0;
    sscanf(str.data(), "%d,%d,%d", &a, &b, &c);
    // std::string::data nearly equal std::string::c_str

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "a+b+c = " << a+b+c << endl;
  }

  //fopenの場合
  cout << endl << "fopen" << endl;
  a=0; b=0; c=0;

  FILE* fp;
  if((fp = fopen("data.txt", "r")) == NULL) {
    printf("File do not exist.\n");
    exit(0);
  }

  while(fscanf(fp, "%d,%d,%d", &a, &b, &c) != EOF) {
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("a+b+c = %d\n", a+b+c);
    a=0; b=0; c=0;
  }

  fclose(fp);

  return 0;
}
