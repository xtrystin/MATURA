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
    int licznik[1000];
    bool a = 1;
    for (int i=0; i < 1000; i++)
    {
        plik >> slowo[i];
    }
    for (int i=0; i<1000; i++)
    {
        a=1;    //WAZME/ reset a !!!!!
        //cout << slowo[i] <<endl;
        for (int j=0; j<slowo[i].size(); j++)
        {
            for (int l= j+1; l<slowo[i].size(); l++)
            {
                if(slowo[i][j] - slowo[i][l] > 10 || slowo[i][j] - slowo[i][l] < -10)
                {
                   // cout << slowo[i][j] << " " << slowo[i][l] <<endl;
                    a = 0;   //zeby wyszlo tez z kolejnej petli!!!!!!!!!!!
                    break;
                }
               // else
                 //   cout << slowo[i][j] << " " << slowo[i][l] <<endl;

            }
            if (a==0)
            {
                break;
            }
           // else
           // cout << "X";
              //  cout << slowo[i][j] << endl;

        }
        if (a == 1)
            cout << slowo[i] <<endl;
    }

    plik.close();
}

int main()
{
    Wczytaj();


    return 0;
}
