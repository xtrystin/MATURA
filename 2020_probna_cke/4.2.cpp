#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

void Open()
{
    fstream file;
    file.open("dane4.txt");
    if(!file.good())
    {
        cout << "ERROR";
        return;
    }

    int tab[1000];
    for(int i = 0; i<1000; i++)
    {
        file >> tab[i];
    }

    int gap2 = 0;
    int counter = 2;
    int cMAX = 0;
    int startMAX;
    int endMAX;
    int gap1;


    gap1 = abs(tab[0] - tab[1]);
    int i = 1;
    for(i = 1; i <1000-1; i++)
    {
        gap2 = abs(tab[i] - tab[i+1]);

        if(gap2 == gap1)
        {
            counter++;

        }
        else
        {
           // cout << counter << " " <<cMAX <<endl;
             if(counter > cMAX)
                {
                    cMAX = counter;
                    endMAX = i;

                }
            counter = 2;
            gap1 = gap2;
        }
    }
    if (counter > cMAX)     //na koncu moze rosnac counter
    {
        cMAX = counter;
        endMAX = i-1;
    }




    cout << cMAX << endl;
    cout << tab[endMAX]<<endl;
    cout << tab[endMAX - cMAX + 1];




    file.close();
}

int main()
{
    Open();




    return 0;
}
