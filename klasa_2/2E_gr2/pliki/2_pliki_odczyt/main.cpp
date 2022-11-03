#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("plik.txt");
    if (file){
      int tab[9];
      for(int i=0; i<9; ++i){
        file >> tab[i];
      }
      file.close();

      for(int i=0; i<9; ++i){
        cout << "tab[" << i << "]=" << tab[i] << " ";
      }

    }else {
      cout << "Otwarcie pliku nie powiodło się!\n";
    }

    return 0;
}
