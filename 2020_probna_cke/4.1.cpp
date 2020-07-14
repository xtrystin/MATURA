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
    int gap = 0;
    int MAX = abs(tab[0] - tab[1]);
    int MIN = abs(tab[0] - tab[1]);
    for(int i = 0; i < 1000 - 1; i++)
    {
        gap = abs(tab[i] - tab[i+1]);
        if(gap > MAX)
            MAX = gap;
        if(gap < MIN)
            MIN = gap;

    }
    cout << MIN <<endl;
    cout << MAX;



    file.close();
}

int main()
{
    Open();




    return 0;
}
