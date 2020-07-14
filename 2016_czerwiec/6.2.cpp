#include <iostream>
#include <fstream>

using namespace std;

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
    bool o =0;
    int counter = 0;
    for (int i = 0; i < 999; i++)
    {
        file >> aS;
        o = 0;

        if (aS[aS.size() - 1 ] == '4')
        {
            for (int j = 0; j < aS.size() - 1; j++)
            {
                if (aS[j] == '0')
                {
                    o = 1;
                    break;
                }

            }
            if (o == 0)
                counter++;

        }

    }

        cout << counter;


    file.close();
}



int main()
{
    Open();


    return 0;
}
