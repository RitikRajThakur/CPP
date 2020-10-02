// Find the area of a Triangle whose base and height is given by user.
#include <iostream>

using namespace std;

int main()

{
	int base;
	int height;
	// input
	cout <<"\n Enter the base of a triangle:-";
	cin >> base;
	cout <<"\n Enter the height of a triangle:-";
	cin >> height;
	cout <<"Area of a triangle is:" << 0.5*(base*height) << endl;
	return 0;
}
