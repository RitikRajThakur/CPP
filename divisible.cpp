#include <iostream>
using namespace std;
int main()
{
        int i;
        cout<<" First 20 numbers which are divisible by 4 and 3"<<endl;
 
        for (i=1; i<=20; i++)
        {
               if (i%3==0 && i%4==0)
                  printf(" %d", i);
        }
        return 0 ;
} 
