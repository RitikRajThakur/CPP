// Find the amount of annually year.

#include <iostream>
#define AMOUNT(p , r , 1 , 100 , t)(P * R + 1 / 100)* T
using namespace std;
int main()
 {
    float principal,rate,time,amount;
    // Input
	cout<<"Enter the value of principal"<<enl;
    cin>>principal;
    cout<<"Enter the value of rate "<<endl;
    cin>>rate;
    cout<<"Enter the time"<<endl;
    cin>>time;
    amount = AMOUNT(p , r , 1 , 100 , t);
    cout<<"The amount is"<<amount<<endl;
    return 0;
 }
