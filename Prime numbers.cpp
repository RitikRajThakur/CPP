#include <iostream>
using namespace std;
int main()
{
	int num,i;
	cout<<"Enter the number: ";
	cin>>num;
	//loop
	i = 2;
	while(i<=num - 1);
	{
		if(num%i==0)
		{
			cout<<"Not a prime number";
		}
		i++;
	}
	{
	
	 if(i==num)
	 cout<<"Prime number";
	}
	return 0;
}
