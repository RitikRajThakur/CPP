// Find the greater number between two numbers.
#include <iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter two numbers to find greatest among them:- "<<endl;
	cin>>num1>>num2;
	if(num1>num2){
		cout<<num1<<" is the greatest,"<< endl;
	}
	else{
		cout<<num2<<" is the greatest. "<<endl;
	}
	return 0;
	
}
