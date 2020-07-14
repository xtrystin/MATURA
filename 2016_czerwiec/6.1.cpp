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
    int counter = 0;
    for (int i = 0; i < 999; i++)
    {
        file >> aS;

        if (aS[aS.size() - 1 ] == '8')
            counter++;
    }

    cout << counter;


    file.close();
}



int main()
{
    Open();


    return 0;
}
