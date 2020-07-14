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

   for (int i=0; i<10000; i++)
   {
       file1 >> tab1[i];
       file2 >> tab2[i];
   }
   int even1=0;
   int even2=0;
   int odd1 = 0;
   int odd2 = 0;
   int counter =0;
   for (int i= 0; i < 10000; i=i+10)
   {

      for (int j = i; j < i+10; j++)
      {
          if (tab1[j] % 2 ==0)
          {
              even1++;
          }
          else
          {
              odd1++;
          }
          if (tab2[j] % 2 == 0)
          {
              even2++;
          }
          else
          {
              odd2++;
          }

      }
    if (even1 == 5 && odd1 == 5 && even2 == 5 && odd2 ==5)
          {
              counter++;
          }

    even1 =0;
    even2=0;
    odd1=0;
    odd2=0;
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
