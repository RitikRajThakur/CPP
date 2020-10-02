// Find the area of a Triangle whose base and height is given by user.
#include <iostream>
using namespace std;
#define c 0.5
#define AREA(l, b) (l * b)
int main()
{
	int base;
	int height;
	// input
	cout <<"\n Enter the base of a Trangle:-";
	cin >> base;
	cout << "\n Enter the height of a Triangle:-";
	cin >> height;
	cout << "Area of a Triangle is:" << c * AREA(base, height ) << endl;
	return 0;
	
	}
