#include <iostream>
using namespace std;
#define SUM(a , b)(a + b)
int main()
{
   float a, b,sum;
   
   cout<<"Enter the Monthly Income of Bill Gates"<<endl;
   cin>>a;
   cout<<"Enter the Monthly Income of Mukesh Ambani"<<endl;
   cin>>b;	
   sum = SUM(a , b);
   cout<<"Sum of their salaries:- "<< sum <<endl;
   //input
   if (a > b){
    cout<<a<<"  Income of Bill Gates is more.  "<<endl;
    cout<<b<<"  Income of Mukesh Ambani is less.  "<<endl;
   }
   else{
    cout<<b<<"   Income of Mukesh Ambani is more. "<<endl;
    cout<<a<<"   Income of Bill Gates is less. "<<endl;
   }
 
   return 0;
}

