// Solve the sum 
#include <iostream>
#define F( y , x)(y  * x )
using namespace std;
int main()
{
	float x,y,f;
	cout<<"Enter the value of x"<<endl;
	cin>>x;
	cout<<"Enter the value of y"<<endl;
	cin>>y;
	f = F(y , x);
	cout<<"The answer is "<<2*f<<endl;
	return 0;
}
