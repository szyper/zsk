#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  setlocale(LC_ALL, "polish");
  ifstream file("plik.txt");
  string tab[5];
  if(file){
    for (int i=0; i<5; ++i){
      file >> tab[i];
    }
    file.close();
    for (int i=0; i<5; i++){
      cout << "tab[" << i << "]=" << tab[i] << "\t";
    }
  }else{
    cout << "Nie uda³o siê otworzyæ pliku";
  }
  return 0;
}
