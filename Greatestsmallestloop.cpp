// Find the greater and smaller number between two numbers
#include <iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter two numbers too find the greatest among them:- "<<endl;
	cin>>num1>>num2;
	if(num1>num2){
		cout<<num1<<" is the greatest . "<<endl;
	   	cout<<num2<<" is the smallest . "<<endl;
	}
	else{
		cout<<num2<<" is the greatest . "<<endl;
	    cout<<num1<<" is the smallest . "<<endl; 	
	}

    return 0;
}
