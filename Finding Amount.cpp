// Find the amount.
#include <iostream>
using namespace std;
int main()
{
	float principal,rate, time,amount;
	//Input
	cout<<"enter the value of principal: ";
	cin>>principal;
	cout<<"enter the value of rate: ";
	cin>>rate;
	cout<<"enter the time: ";
	cin>>time;
	cout<<amount;
    amount = principal*(1+rate/100)*time;
    cout<<"The amount is: "<<amount<<endl;
	return 0;
}
