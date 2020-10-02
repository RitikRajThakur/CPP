// Find the area of a Cylinder whose value is given by user.

#include <iostream>
#define p 3.14
using namespace std;
int main()
{
	int radius, height;
	//input
	cout<<"Enter the radius of a cylinder:- ";
	cin>> radius;
	cout<<"Enter the height of a cylinder:- ";
	cin>> height;
	cout<<"The area of cylinder is:"<<2*p*radius*height+2*p*radius*radius<<endl;
	return 0;
	
}
