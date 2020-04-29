#include<iostream>
#include<fstream>
#include<cmath>


int main(){
  std::ifstream fin("datensumme.txt");
  std::ifstream fin2("datensumme.txt");
  std::ofstream fout("mittelwertetom.txt");
  std::ofstream fout2("varianzentom.txt");
  double a,b,c,d,e,f,g,h,v;
  int n = 26;
  int l = 9;
  double m = 0;
  double mw = 3.11538;

  for(int z = 0; z < n; z++){
    b = 0;
    
    for(int i = 0; i < l; i++){
      fin >> a;
      b += a;
    }
    m = b / l;
    e = 0;
    for(int j = 0; j<l; j++){
      fin2 >> f;
      e += pow((f-m),2);
    }
    v = e / l;
    g += v;
    c += m;
    fout << m << std::endl;
    fout2 << v << std::endl;
  }
  d = c / n;
  h = g / n;
  fout << "Der Mittelwert der Mittelwerte beträgt: "<< d << std::endl;
  fout2 << "Der Mittelwert der Varianzen beträgt:" << h << std::endl;



}