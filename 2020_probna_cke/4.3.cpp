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
    int MAX = 0;
    int gap1;
    int gap2;
    int counter = 0;
    for(int i = 0; i < 1000-1; i++)
    {
        counter = 1;
        gap1 = abs(tab[i] - tab[i+1]);
        for(int j = i+1; j< 1000-1; j++)
        {
            gap2 = abs(tab[j] - tab[j+1]);

            if(gap1 == gap2)
            {
                counter++;
                if(counter > MAX)
                {
                    MAX = counter;
                }

            }

        }

    }


    cout << MAX <<endl;



    for(int i = 0; i < 1000-1; i++)
    {
        counter = 1;
        gap1 = abs(tab[i] - tab[i+1]);
        for(int j = i+1; j< 1000-1; j++)
        {
            gap2 = abs(tab[j] - tab[j+1]);

            if(gap1 == gap2)
            {
                counter++;
               if(counter == MAX)
                cout << gap1<<endl;
            }

        }

    }



    file.close();
}

int main()
{
    Open();




    return 0;
}
