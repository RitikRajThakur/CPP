#include <iostream>
#define C(a , b) (a / b)
using namespace std;
int main()
{
	int a,b,c;
	cout<<"No. of matches played"<<endl;
	cin>>a;
	cout<<"Total no. of matches"<<endl;
	cin>>b;
	c = C(a , b);
// Processing
    cout<<c<<endl;
	return 0;
}

