#include <iostream>
#include <fstream>
using namespace std;


int Najwiekszy(int a[1000])
{
  int max;
  max = a[0];
  for (int i =0; i<1000; i++)
  {
      //if (a[i] == 77)
       // cout << i;
     // cout << a[i] << endl;
    if (max < a[i])
        max = a[i];
  }
  for (int i=0; i<1000; i++)
  {
      if (a[i] == max)
        return i;
  }
}
void Wczytaj()
{
    fstream plik;
    plik.open("sygnaly.txt");
    if (!plik.good())
        cout << "ERROR";

    string slowo[1000];
    int licznik[1000];
    for (int i=0; i < 1000; i++)
    {
        plik >> slowo[i];
    }

    bool a = false;
    for (int i =0; i<1000; i++)
    {
        licznik[i] = 0;

       // cout << slowo[i] <<endl;
        for (int j=0; j < slowo[i].size(); j++)
        {

            a = 0;
           // cout << slowo[i][j] << endl;
           for (int l= j+1; l <slowo[i].size(); l++)
           {
               if (slowo[i][j] == slowo[i][l])
               {
                   a = 1;
                   break;
               }


           }
           if (a == 0)
            licznik[i]++;
        }
       // cout << slowo[i] << " " << licznik[i] <<endl;
        //cout << endl <<endl;

    }
    //cout << licznik[10];
    int pozycja =  Najwiekszy(licznik);
    cout << slowo[pozycja] << " " << licznik[pozycja];


    plik.close();
}

int main()
{
    Wczytaj();
    return 0;
}
