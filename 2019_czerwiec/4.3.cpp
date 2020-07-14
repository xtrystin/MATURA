#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

bool Sum(int number)
{

    int i=0;
    //int a[100];
    vector <int> v;
    v.push_back(number);
   //cout << v[0];

    while(v[i]/10 > 0)
    {
        v.push_back(0);

        while(v[i]>0)
        {
            v[i+1] += v[i]%10;
            v[i] /=10;
        }

        //cout << v[i] <<endl;
        i++;
    }


    if (v[i] == 1)
    {
        return 1;
    }

    else
    {
        return 0;
    }



    /*
    while(a2>0)
    {
        a3 += a2%10;
        a2/=10;
    }
    */
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
    int counter=0;

    for (int i =0; i < 200; i++)
    {
        file >> a;
        //cout << a << " ";
        //Sum(a);
        if (Sum(a) == 1)
            counter++;

    }

    cout << counter;


    file.close();


}


int main()
{
    Open("pierwsze.txt");




    return 0;
}
