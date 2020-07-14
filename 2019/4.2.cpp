#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

int Silnia(int cyfra)
{

    int silnia=1;
    if (cyfra == 0)
        return 1;
    for (int i=1; i<=cyfra; i++)
    {
        silnia *= i;
    }
    return silnia;
}

int Wczytaj()
{
    int liczby[500];
    int cyfra;
    int sumaSilni=0;
    int silnia;
    int oryginal =0;
    string linia;
    fstream plik;
    plik.open("liczby.txt");
    if (!plik.good())
        cout << "ERROR";
    for(int i=0; i<500 ; i++)
    {
        plik >> liczby[i];
        oryginal = liczby[i];
        silnia =0;
        sumaSilni = 0;
        do
        {
            silnia = Silnia(liczby[i] % 10);
            sumaSilni += silnia;

            liczby[i] /= 10;

        }while(liczby[i]>0);
        if (sumaSilni == oryginal)
            cout << oryginal <<endl;

    }

    plik.close();
}

int main()
{

    Wczytaj();


    return 0;
}
