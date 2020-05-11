#include <fstream>
#include <iostream>
using namespace std;


int main(){
  std::ifstream fin("daten.txt");
  std::ofstream fout("datensumme.txt");
  float b;
  float c = 0;
  int i = 0;

  for(int n = 0 ; n < 469 ; ++n){
    //cout <<"i" << i << endl; 
    if(i > 1){
      fout << c << std::endl;
      //cout <<"c" << c << endl;
      c = 0;
      i = 0;
    }
 
    fin >> b; 
    //cout <<"b" << b << endl;
    c = c + b;
    ++i;  
  }

  fin.close();
  fout.close();
}

