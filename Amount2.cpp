#include <iostream>
using namespace std;
int main()
 {
    float principal,rate,time;
    // Input
	cout<<"Enter the value of principal"<<endl;
    cin>>principal;
    cout<<"Enter the value of rate "<<endl;
    cin>>rate;
    cout<<"Enter the time in years"<<endl;
    cin>>time;
    cout<<"The amount is"<<(principal*rate+1/100)*time<<endl;
    return 0;
 }
