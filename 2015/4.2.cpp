#include <iostream>
#include <fstream>
using namespace std;

void Wczytaj()
{
    fstream plik;
    plik.open("liczby.txt");
    if (!plik.good())
        cout << "eRrOOR";

    string linia;
    int podzielne2=0;
    int podzielna8 =0;
    while(getline(plik,linia))
    {
      if (linia[linia.size()-1] == '0')
      {
          podzielne2++;
      }
      if (linia[linia.size()-3] == '0' && linia[linia.size()-2] == '0' && linia[linia.size()-1] == '0')
        {
            for (int i=0; i< linia.size() -3; i++)
            {
                if (linia[i] == '1')
                    podzielna8++;
                break;
            }
        }

    }

    cout <<podzielne2 <<endl;
    cout << podzielna8;


    plik.close();
}
int main()
{
    //cout << 1 %2;
    Wczytaj();
    return 0;
}
