#include <iostream>
#include <fstream>
using namespace std;

void Wczytaj()
{
    fstream plik;
    plik.open("sygnaly.txt");
    if (!plik.good())
        cout << "ERROR";

    string slowo[1000];
    string przeslanie="";
    int j=0;
    for (int i=0; i < 1000; i++)
    {
        plik >> slowo[i];
    }
    for (int i=39; i<1000; i=i+40)
    {
       // cout << slowo[i] <<endl;
       // cout << slowo[i][9]<<endl;
        przeslanie += slowo[i][9];
    }
    cout << przeslanie;
    plik.close();
}
int main()
{
    Wczytaj();
    return 0;
}
