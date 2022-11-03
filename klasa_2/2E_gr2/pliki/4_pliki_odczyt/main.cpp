#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "polish");

    fstream file;
    file.open("plik1.txt", ios::in);
    int tab[5];
    bool fileOpen = false;

    // good(), is_open()
    if (file.is_open()){
        // cout << sizeof(int);
        //cout << sizeof(tab)/sizeof(int);
      for(int i=0; i<sizeof(tab)/sizeof(int); ++i){
        file >> tab[i];
      }

      file.close();

      fileOpen = true;

    }else {
      cout << "Otwarcie pliku nie powiodło się!\n";
      fileOpen = false;
    }

    if(fileOpen){
      for(int i=0; i<sizeof(tab)/sizeof(int); ++i){
        cout << tab[i] << "\t";
      }
      cout << endl;
    }else{
      cout << "Tablica nie została uzupełniona danymi!\n";
    }

    return 0;
}
