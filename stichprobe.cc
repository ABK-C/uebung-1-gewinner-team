#include<iostream>
#include<fstream>
#include<cmath>

int main() {
  std::ifstream fin("datensumme.txt");
  int i=0;
  int c=0;
  int t=0;
  double n = 234;
  double a,b,m,s,x,v;

  
  for(i=0; i<n; ++i) {
    fin >> a;
    c += a;

  }

m = static_cast<double>(c) / n;
std::cout << "m = " << m << std::endl;

std::ifstream fin2("datensumme.txt");

for(t=0; t<n; ++t) {
    fin2 >> b;
    x += pow((b-m), 2);
  }
    v = x/n;
  std::cout << "v = " << v << std::endl;
  std::cout << "s = " << sqrt(v) << std::endl;
fin.close();
}