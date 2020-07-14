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
    vector <int> v3;
    int a;
    for (int i = 0; i < 1000 * 10; i++)
    {
        file1 >> a;
        v1.push_back(a);
        file2 >> a;
        v2.push_back(a);
    }
    int j1=0;
    int j2=0;
    bool b =0;
    bool c=0;
    bool x1, x2;
    for (int i = 0; i < 1000 * 10; i = i+10)
    {
        b = 0;
        c = 0;

        j1 = i;
        j2 = i;

        x1 = 1;
        x2 = 1;
        for (int j = 0; j < 20; j++)
        {
            if ((v1[j1] <= v2[j2] || c == 1) && b == 0)
            {
                v3.push_back(v1[j1]);
                j1++;

                //if (j1 == i+10)
                    //x1 = 0;
            }
            else if ((v1[j1] > v2[j2] || b == 1) && c == 0)
            {
                v3.push_back(v2[j2]);
                j2++;

               // if (j2 == i+10)
                //    x2 = 0;
            }


            if (j1 == i+10 && j2 != i+10)
            {
                b = 1;
                //x1 = 0;
                //j1 = i + 9;
            }
            else if (j2 == i+10 && j1 != i+10)
            {
                c = 1;
                //x2 = 0;
               // j2 = i + 9;
            }
            else if (j1 == i+10 && j2 == i+10)
            {
                break;
            }


        }

        // ZLE
      /*  for (int k = i ; k< i+20; k++)
        {
            cout << v3[k] << " ";
        }
        cout << endl;
      */
    }

    for (int i = 0; i < 1000 * 10; i = i+20)
    {

        for (int j = i; j < i+20; j++)
        {
            cout << v3[j] << " ";
        }

        cout << endl;
    }






    file1.close();
    file2.close();
}

int main()
{
    Open();


    return 0;
}
