// Find the area of a Triangle whose base and height is given by user .
#include <iostream>
using namespace std;
#define c 0.5
#define AREA(l, b) (l * b)
int main()
{
	int base, height, area;
	// input
	cout <<"\n Enter the base of a triangle:- ";
	cin >> base;
	cout << "\n Enter the height of a Triangle:- ";
	cin >> height;
	area = c * AREA (base, height);
	cout << "Area of a triangle is: " << area << endl;
	return 0 ;
}
