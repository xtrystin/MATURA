#include <iostream>
#include <fstream>

using namespace std;

bool Czy_Pierwsza( int a , int b)
{
    if (a==0 || a==1 || b==0|| b==1)
    {
        return 0;
    }
    for (int i=2; i < a; i++)
    {
        if (a % i == 0)
            return 0;
    }
    for (int i=2; i < b; i++)
    {
        if (b % i == 0)
            return 0;
    }
    return 1;
}

void Open(string fname)
{
    fstream file;
    file.open(fname);
    if (!file.good())
    {
        cout << "ERROR";
        return;
    }

    int x[1000];
    int y[1000];
    int j=0, l=0;
    for (int i=0; i<2000; i++)
    {
        if(i % 2 == 0)
        {
            file >> x[j];
            cout << x[j] << " ";
            j++;
        }
        else
        {
            file >> y[l];
            cout << y[l] <<endl;
            l++;
        }
    }

    int counter =0;
    for (int i=0; i<1000; i++)
    {
        if (Czy_Pierwsza(x[i], y[i]))
            counter++;
    }

    cout << counter;
    file.close();
}

int main()
{
    Open("punkty.txt");
    //cout << Czy_Pierwsza(75, 122);


    return 0;
}
