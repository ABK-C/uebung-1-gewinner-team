#include<iostream>
#include<fstream>
#include<cmath>

int main() {
  std::ifstream fin("datensumme.txt");
  int a,i,c;
  int n = 234;
  double m,s,x,v;

  
  for(i=0; i<(n+1); ++i) {
    fin >> a;
    c += a;
  }

m = static_cast<double>(c) / static_cast<double>(n);
std::cout << "m = " << m << std::endl;


for(i=0; i<(n+1); ++i) {
    fin >> a;
    x += pow((a-m), 2);
  }
    v = x/n;
    std::cout << "v = " << v << std::endl;

  std::cout << "s = " << sqrt(v) << std::endl;


fin.close();
}