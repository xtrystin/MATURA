#include <iostream>
#include <fstream>
using namespace std;

void Wczytaj()
{
    fstream plik;
    plik.open("liczby.txt");
    if (!plik.good())
        cout << "eRrOOR";
    int licznikZer =0;
    int licznikJedynek =0;
    int wynik =0;
    string linia;
    while(getline(plik,linia))
    {
      //  cout << linia <<endl;
        licznikZer =0;
        licznikJedynek=0;
        //cout << linia << endl;
        for (int i=0; i< linia.size(); i++)
        {
            if (linia[i] == '0')
                licznikZer++;
            else
                licznikJedynek++;
        }
        //cout << licznikJedynek <<endl;
        if (licznikZer > licznikJedynek)
            wynik++;

    }

    cout << wynik;


    plik.close();
}
int main()
{
    //cout << 1 %2;
    Wczytaj();
    return 0;
}
