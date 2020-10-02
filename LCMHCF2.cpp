// Find HCF and LCM.
 #include <iostream>
 using namespace std;
 int main()
 {
   int num1,num2,x,y,lcm,hcf,temp;
   cout<<"enter the first number";
   cin>>num1;
   cout<<"enter the second number";
   cin>>num2;
   x = num1;
   y = num2;
   while (y!=0){
   temp=y;
   y=x%y;
   x=temp;
   
   }
   cout<<hcf/x;
   
 }
