#include <iostream>
#define MULTIPLY(a,b) (a*b)
using namespace std;

int main()
{
	int a,b,multiply;
	cout<<"Enter the first number:- ";
	cin>> a;
	cout<<"Enter the second number:- ";
	cin>>b;
	multiply = MULTIPLY(a,b);
	cout<<"Multiplication:"<< multiply <<endl;
	return 0;
}
