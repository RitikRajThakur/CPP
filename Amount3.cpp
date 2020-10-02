#include <iostream>
#define Amount(principal , rate , time)(principal * rate * time)
using namespace std;
int main()
 {
    float principal,rate,time,amount;
	// Input
	cout<<"Enter the value of principal"<<endl;
    cin>>principal;
    cout<<"Enter the value of rate "<<endl;
    cin>>rate;
    cout<<"Enter the time in years"<<endl;
    cin>>time;
    amount = Amount (principal , rate , time);
    cout<<"The amount is"<< amount + (1/100)<<endl;
    return 0;
 }
