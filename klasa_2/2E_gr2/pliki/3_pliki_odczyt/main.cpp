#include <iostream>
#include <fstream>
using namespace std;

struct football {
  string nameSurname, club;
};

int main()
{
    setlocale(LC_ALL, "polish");

    ifstream file("plik.txt");
    football pilkarz;
    if (file){
     getline(file, pilkarz.nameSurname);
     getline(file, pilkarz.club);

     file.close();

     cout << "Dane o piłkarzu:\n" << "Imię i nazwisko: " << pilkarz.nameSurname << "\nKlub: " << pilkarz.club << endl;

    }else {
      cout << "Otwarcie pliku nie powiodło się!\n";
    }

    return 0;
}
