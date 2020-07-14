#include <iostream>
#include <fstream>
#include <vector>
#include <set>
using namespace std;



void Open(string fname)
{
    fstream file;
    file.open(fname);
    if (!file.good())
    {
        cout << "ERROR";
        return;
    }

    vector <int> x;
    vector <int> y;
    int a;
    for (int i=0; i<2000; i++)
    {
        if (i % 2 == 0)
        {
            file >> a;
            x.push_back(a);
        }
        else
        {
            file >> a;
            y.push_back(a);
        }

    }
    //cout << y[0];

    set <int> cyfryX;
    set <int> cyfryY;
    int counter =0;
    for (int i=0; i<1000; i++)
    {
        while(x[i]>0)
        {
            cyfryX.insert(x[i] % 10);
            x[i] /= 10;
        }
        while(y[i]>0)
        {
            cyfryY.insert(y[i] % 10);
            y[i] /= 10;
        }

        if (cyfryX == cyfryY)
        {
            counter++;
        }

        cyfryX = {};
        cyfryY = {};

    }

    cout << counter;

    file.close();
}
int main()
{
    Open("punkty.txt");

/*
    set <int> s;
    s.insert(25);
    s.insert(2);
    //cout << *s.begin();
    ////////////cout << s[0]  BLEDNE!!!


    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    //cout << v[0];

*/

    return 0;
}
