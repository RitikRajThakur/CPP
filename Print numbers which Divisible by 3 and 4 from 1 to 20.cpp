// Print numbers which divisible by 3 and 4 from 1 to 20.
#include <iostream>
using namespace std;
int main()
{
	int number;
	cout<<"enter the  number: ";
	cin>>number;
	
	if( number%3==0){
		cout<<"The number is divisible by 3"<<endl;
	}
	else{
		cout<<"The number is not divisible by 3"<<endl;
	}
		
	if(number%4==0){
		cout<<"The number is divisible by 4"<<endl;
	}
	else{
		cout<<"The number is not divisible by 4"<<endl;
	}
	
	return 0;
}
