#include <iostream>
#include <fstream>
#include <vector>
#include <set>
using namespace std;
void Open()
{
    fstream file1, file2;
    file1.open("dane1.txt");
    if (!file1.good())
    {
        cout << "ERROR";
    }
    file2.open("dane2.txt");
    if (!file1.good())
    {
        cout << "ERROR";
    }

    vector <int> v1;
    vector <int> v2;
    int a;
    set <int> s1;
    set <int> s2;
    int counter =0;
    vector <int> nr_wiersza;

    for (int i = 0; i < 1000 * 10; i++)
    {
        file1 >> a;
        v1.push_back(a);
        file2 >> a;
        v2.push_back(a);
    }

    for (int i = 0; i < 1000 * 10; i = i+10)
    {
        s1 = {};
        s2 = {};
        for (int j = i; j < i+10; j++)
        {
            s1.insert(v1[j]);
            s2.insert(v2[j]);
        }

        if (s1 == s2)
        {
            counter++;
            nr_wiersza.push_back(i/10 +1);  // +1 bo i zaczyna sie od 0
        }

    }

    cout << counter <<endl;
    for (int i=0; i < nr_wiersza.size(); i++)
        cout << nr_wiersza[i] <<endl;



    file1.close();
    file2.close();
}

int main()
{
    Open();
    return 0;
}
