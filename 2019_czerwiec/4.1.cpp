#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

bool Czy_Pierwsza(int a)
{
    for (int i=2; i<a; i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;

}

bool Czy_Warunki(int a)
{
    if (a < 100 || a > 5000)
        return 0;

    if (Czy_Pierwsza(a) == 1)
        return 1;
    else
        return 0;

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

    for (int i =0; i < 300; i++)
    {
        file >> a;

        if (Czy_Warunki(a) == 1)
            v.push_back(a);

    }

    for (int i=0; i < distance(v.begin(), v.end()); i++)
        cout << v[i] <<endl;



    file.close();



    fstream file2;
    file2.open("plik2.txt", ios::out);
    if(!file2.good())
    {
        cout << "ERROR";
        return;
    }

    for (int i=0; i < distance(v.begin(), v.end()); i++)
        file2 << v[i] <<endl;

    file2.close();
}


int main()
{
    Open("liczby.txt");


    return 0;
}
