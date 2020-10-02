// Find the greater and smaller number between two numbers.
#include <iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<< "Enter three numbers to find greatest and smallest among them:- "<<endl;
	cin>>num1>>num2>>num3;
	if(num1>num2,num3){
	cout<<num1<<" is the greatest."<<endl;
	cout<<num2<<" is the smallest."<<endl;
	cout<<num3<<" is the greatest."<<endl;	
	}
	else{
	cout<<num3<<" is the smallest."<<endl;
	cout<<num2<<" is the greatest."<<endl;
	cout<<num1<<" is the smallest."<<endl;
	}
	return 0;
	
	
}
