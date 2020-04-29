#include<iostream>
#include<fstream>
#include<cmath>


int main(){
  std::ifstream fin("datensumme.txt");
  float a;
  float d = 0;
  float m;
  float n = 234;
  //Mittelwert
  for(int i = 0; i < n; i++){
    fin >> a;
    d = d + a;  
  }
  m = d / n;
  std::cout << "Summe " << d << std::endl;
  std::cout << "Mittelwert " << m << std::endl;
  //Ende Mittelwert

  //Varianz
  std::ifstream fin2("datensumme.txt");
  float vi;
  float v;
  float b;
  float vs = 0;
  for(int h = 0; h < n; h++){
    fin2 >> b;
    vi = (b-m)*(b-m);
    vs = vs + vi;
  
  }
  v = vs / n;
  std::cout << "Varianzsumme " << vs << std::endl;
  std::cout << "Varianz " << v << std::endl;

  //Ende Varianz

  //Standardabweichung
  float s;
  s = sqrt(v);
  std::cout << "Standardabweichung " << s << std::endl;


}