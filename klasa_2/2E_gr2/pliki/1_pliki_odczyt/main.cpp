#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("plik.txt");
    if (file){
      string lineOfText;
      while(!file.eof()){
        getline(file, lineOfText);
        cout << lineOfText << endl;
      }

      file.close();
    }else {
      cout << "Otwarcie pliku nie powiod³o siê!\n";
    }

    return 0;
}
