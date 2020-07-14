#include <iostream>
#include <fstream>
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

    int tab1[10000], tab2[10000];
    int counter =0;
   for (int i=0; i<10000; i++)
   {
       file1 >> tab1[i];
       file2 >> tab2[i];
   }
   for (int i= 9; i < 10000; i=i+10)
   {
       if (tab1[i] == tab2[i])
        counter++;
   }
    cout << counter;

    file1.close();
    file2.close();
}

int main()
{
    Open();
    return 0;
}
