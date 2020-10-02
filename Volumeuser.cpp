// Find the area of a Rectangle whose lenght and breadth is given by user.
#include <iostream>
using namespace std;
#define VOLUME(c, r, h)(c * r * h)
int main()
{
	int c,r,h,volume;
	volume = VOLUME(c, r, h);
	cout<<"Result in variable: "<<volume<<endl;
	return 0;
}
