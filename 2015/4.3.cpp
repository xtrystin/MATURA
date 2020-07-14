#include <iostream>
#include <fstream>
using namespace std;

void Wczytaj()
{
    fstream plik;
    plik.open("liczby.txt");
    if (!plik.good())
        cout << "eRrOOR";

    string linia[1000];
    int pom =0;
    int pom2 =2000;
    for (int i=0; i <1000; i++)
    {
        plik >> linia[i];
    }

    for (int i=0; i <1000; i++)
    {
        if (linia[i].size() > pom)
            pom = linia[i].size();
    }
    for (int i=0; i <1000; i++)
    {
        if (linia[i].size() == 200 && linia[i][1] == '1' && linia[i][2] == '1' && linia[i][3] == '1' && linia[i][4] == '1' && linia[i][5] == '1'&& linia[i][6] == '1')  //szukam najwiekszej liczby i jej pozycji
            cout << linia[i] << " " << i+1 <<endl <<endl;
    }
   cout <<endl <<endl <<endl;
    for (int i=0; i <1000; i++)
    {
        if (linia[i].size() < pom2)
            pom2 = linia[i].size();
    }
    for (int i=0; i <1000; i++)
    {
        if (linia[i].size() == pom2)
            cout << linia[i] << " "<< i+1 <<endl;   

    }
    //cout << pom2;

    plik.close();
}
int main()
{
    //cout << 1 %2;
    Wczytaj();
    return 0;
}
