// Find the Simple Interest.
 
#include <iostream>
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
    amount = principal *(1+(rate)/100*time); //A = P(1 + rt) rate is in percentage
    cout<<"The Simple Interest amount is"<< amount <<endl;
    return 0;
 }
