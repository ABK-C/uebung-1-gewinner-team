#include<iostream>
#include<fstream>
#include<cmath>

int main() {
  std::ifstream fin("datensumme.txt");
  std::ofstream fout("mittelwertewq.txt");
  int i=0;
  int t=0;
  int c=0;
  double n = 9;
  int N=26;
  double a,b,m,s,x,v, M, V;

  for(t=0; t<N; ++t){
    c = 0;
    for(i=0; i<n; ++i) {
      fin >> a;
        c += a;
    }
    m = static_cast<double>(c) / n;
    fout << m << std::endl;
    M += m;
  }
  fout << "Mittelwert der Mittelwerte = " << M / static_cast<double>(N) << std::endl;
  fout << "Dieser Mittelwert ist exakt derselbe, wie der Mittelwert der Gesamtstichprobe aus Aufgabe 1." << std::endl;

std::ifstream fin2("datensumme.txt");
std::ofstream fout2("varianzenwq.txt");

for(t=0; t<N; ++t){
x = 0;
  for(i=0; i<n; ++i) {
      fin2 >> b;
      x += pow((b-m), 2);
  }
v = x/n;
fout2 << v << std::endl;
V += v;
}

fout2 << "Mittelwert der Varianzen = " << V / static_cast<double>(N) << std::endl; 
fout2 << "Dieser Mittelwert weicht vom Mittelwert der Gesamtstichprobe aus Aufgabe 1 ab. Dieser betrug nämlich 2,73455 und war somit kleiner als der Mittelwert aus den kleinen Stichproben. Daraus lässt sich schließen, dass die Abstände der Werte zum jeweiligen Mittelwert innerhalb der kleinen Stichproben größer sind, als in der Gesamtstichprobe. Dies war vorherzusehen." << std::endl;

fin.close();
fout.close();
fout2.close();
}
