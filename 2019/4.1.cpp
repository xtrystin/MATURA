#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

int Wczytaj(int * potegi)
{
    int liczby[500];
    int licznik = 0;
    string linia;
    fstream plik;
    plik.open("liczby.txt");
    if (!plik.good())
        cout << "ERROR";
    for (int i=0; i< 500; i++)
    {
        plik >> liczby[i];
        for (int j=0; j<= 11; j++)
        {
            if (liczby[i] == potegi[j])
            {
                licznik++;
            }

        }

    }
    return licznik;
    plik.close();
}
void Potegi3(int * potegi)
{
    for (int i = 0; i <= 11; i++)
    {
        potegi[i] = pow(3, i);
    }
}

int main()
{
    int liczba1 = 81;
    int liczba2 = 66;
    int potegi[15];

    Potegi3(potegi);
    potegi[3];
    cout << Wczytaj(potegi);



    return 0;
}
