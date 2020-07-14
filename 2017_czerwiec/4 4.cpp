#include <iostream>
#include <fstream>
#include <math.h>
#include <vector>
#include <algorithm>
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
   // int x[1000];
   // int y[1000];
    int j=0, l=0;
    for (int i=0; i<2000; i++)
    {
        if(i % 2 == 0)
        {
            file >> a;
            x.push_back(a);
            //cout << x[j] << " ";
            j++;
        }
        else
        {
            file >> a;
            y.push_back(a);
            //cout << y[l] <<endl;
            l++;
        }
    }

    int counter1 =0, counter2=0, counter3=0;

    for (int i =0; i<1000; i++)
    {
        if (x[i] < 5000 && y[i] < 5000)
        {
            counter1++;
        }

        if ((x[i] == 0 && y[i] <= 5000) || (x[i] == 5000 && y[i] <= 5000) || (y[i] == 0 && x[i] <=5000 ) || (y[i] == 5000 && x[i] <= 5000))
        {
            counter2++;
        }

        if (x[i] > 5000 || y[i] > 5000)
        {
            counter3++;
        }
    }
    cout << counter1 <<endl;
    cout << counter2 <<endl;
    cout << counter3 <<endl;







    file.close();
}

int main()
{
    Open("punkty.txt");



    return 0;
}
