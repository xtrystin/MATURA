#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

bool Czy_Pierwsza(int a)
{
    if (a ==0 || a==1)
        return 0;
    for (int i=2; i < a; i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}
int Reverse( int a)
{
    int counter =0;
    vector <int> cyfry;
    while (a>0)
    {
        cyfry.push_back(a % 10);

        a /= 10;
        counter++;
    }
    int number=0;
    for (int i=0; i <counter; i++)
    {
        number += cyfry[i] * pow(10,counter-1-i);

    }


    cyfry = {}; //wazne
    return number;
}

void Open(string str)
{

    fstream file;
    file.open(str);
    if(!file.good())
    {
        cout << "ERROR";
        return;
    }

    int a;
    vector <int> v;

    for (int i =0; i < 200; i++)
    {
        file >> a;
        int aReverse = Reverse(a);
        if(Czy_Pierwsza(aReverse) == 1)
        {
            cout << a <<endl;
        }



    }


    file.close();


}


int main()
{
    Open("pierwsze.txt");


    return 0;
}
