#include <iostream>

using namespace std;

int main()
{
	int a=10;
	int b=0;
	cout<<"Result is:"<<a;
	a++;
	cout<<"\n Result is:"<<a<<"\t"<<b;
	++b;
	cout<<"\n Result is:"<<b<<"\t"<<a;
	--a;
	b++;
	cout<<"\n Result is:"<<b<<"\t"<<a;
	a--;
	--b;
	cout<<"\n Result is:"<<b<<"\t"<<a;
	b=a;
	cout<<"\n Result is:"<<b<<"\t"<<++a;
	a--;
	--b;
	cout<<"\n Result is:"<<b<<"\t"<<a;
	return 0;
	
	
}

