#include <iostream>
#define Y(m, x ,c)(m * x + c)
using namespace std;
int main()
{
	float m,x ,c,y;
	cout<<"Enter the value of m"<<endl;
	cin>>m;
	cout<<"Enter the value of x"<<endl;
	cin>>x;
	cout<<"Enter the value of c"<<endl;
	cin>>c;
	y = Y (m, x , c);
	cout<<"The output is"<<y<<endl;
	return 0;
}
