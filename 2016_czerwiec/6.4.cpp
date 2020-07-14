#include <iostream>
#include <fstream>

using namespace std;

int Horner(int tab[], int x, int n)
{
    int result = tab[0];

    for (int i = 1; i < n; i++)
    {
        result = (result * x) + tab[i];
    }
    return result;
}



void Open()
{
    fstream file;
    file.open("liczby.txt");
    if (!file.good())
    {
        cout << "ERROR";
        return;
    }

    string a[999];
    string aS;

    int sum = 0;
    int cyfry[12];
    for (int i = 0; i < 999; i++)
    {
        file >> aS;


        if (aS[aS.size() - 1 ] == '8')
        {
            for (int j = 0; j < aS.size() - 1; j++)
            {
                cyfry[j] = aS[j] - 48;
            }

            int w = Horner(cyfry, 8, aS.size() - 1);
            sum += w;



        }

    }

     cout << sum;

    file.close();
}



int main()
{
    Open();

    string a = "123";
    int b = a[1] - 48;
   // cout << b
;
//    string a = "123";
//    int b;
//    b = stoi(a);
//    cout << b+15;

    return 0;
}
