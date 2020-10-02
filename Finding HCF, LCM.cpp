// Finding HCF and LCM of 5 , 25.

#include <iostream>                                     
using namespace std;
int main(){
   int x,y,num1,num2,temp,hcf,lcm;	
  
   cout<<"Enter first number: ";
   cin>>num1;	cout<<"Enter second number: ";
   cin>>num2;
 
   x= num1;
   y= num2;
   while(y!=0)
   {
   temp=y;
   y=x%y;
   x=temp;	
   }
   hcf=x;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
   lcm=(num1*num2)/hcf;
   cout<<"\n HCF : "<<hcf<<"\n";
   cout<<"\n LCM : "<<lcm<<"\n";
   return 0;
		
	 
}
