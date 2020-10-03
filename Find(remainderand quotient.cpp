// Divide dividend by divisor and find quotient and remainder.
#include <iostream>
using namespace std;
int main()
{
	int divisor,dividend;
	// Input
	cout<<"Enter the dividend: ";
	cin>>dividend;
	cout<<"Enter the divisor: ";
	cin>>divisor;
	cout<<"The quotient is"<< dividend / divisor;
	cout<<"\nThe remainder is"<< dividend % divisor;
	return 0;
}
