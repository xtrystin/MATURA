#include <iostream>
#include <fstream>

using namespace std;

void Open()
{
    fstream file;
    fstream file2;
    file.open("dane_6_2.txt");
    file2.open("wyniki_6_2.txt");
    if (!file.good())
        cout << "ERROR";


    int k;
    string a;
    for (int i=0; i < 3000; i++)
    {

        if(i % 2 == 0)
            file >> a;
        if(i % 2 == 1)
        {
            file >> k;

            if (k < 0 || k > 26)
            {
                k = k - (k / 26) * 26;
            }
            k = -k;


            for (int j =0; j < a.size(); j++)
            {
                if (a[j] + k > 'Z')
                {
                   a[j] = a[j] - 26 + k;
                }
                else if(a[j] + k < 'A')
                {
                     a[j] = a[j] + 26 + k;
                }
                else
                    a[j] += k;
            }







            file2 << a << endl;
        }












    }






    file.close();
    file2.close();
}



int main()
{
    Open();


    return 0;
}
