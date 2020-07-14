#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

void Open()
{
    fstream file;
    fstream file2;
    file.open("dane_6_3.txt");
    file2.open("wyniki_6_3.txt");
    if (!file.good())
        cout << "ERROR";

    bool b;
    int k;
    string a1;
    string a2;
    for (int i=0; i < 3000; i++)
    {

        file >> a1;
        file >> a2;

        b = 0;

        if(a1[0] - a2[0] > 0)
        {
            k = a1[0] - a2[0] - 26;
        }
        else
            k = a1[0] - a2[0];

        //sprawdzam pare
        for (int i = 1; i < a1.size(); i++)
        {
            if(a1[i] - a2[i] > 0)
            {
                if(k != a1[i] - a2[i] - 26)
                    {
                        b = 1;
                        break;
                    }

            }
            else
            {
                if(k != a1[i] - a2[i])
                    {
                        b = 1;
                        break;
                    }
            }





        }

        if (b==1)
        {
            file2 << a1 <<endl;
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
