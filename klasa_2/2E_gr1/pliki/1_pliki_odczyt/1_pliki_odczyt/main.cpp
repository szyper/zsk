#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  setlocale(LC_ALL, "polish");
  ifstream file("plik.txt");
  string slowo;
  if(file){
    while(!file.eof()){
      //file >> slowo;
      //cout << slowo;
      getline(file, slowo);
      cout << slowo << endl;
    }

    file.close();
  }else{
    cout << "Nie uda³o siê otworzyæ pliku";
  }
  return 0;
}
