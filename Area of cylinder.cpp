// Find the area of cylinder
#include <iostream>
#define pie 3.14 
using namespace std;
int main()
{
	float r,h;
	cout<<"Enter the radius of cylinder:- "<<endl;
	cin>>r;
	cout<<"Enter the height of cylinder:- "<<endl;
	cin>>h;
	cout<<"Area of cylinder is:- "<<2*pie*r*h +2*pie*r*r;
	return 0;
}
