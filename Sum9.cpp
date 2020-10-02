// Find the area of a Rectangle whose lenght and breadth is given by user.
#include <iostream>
using namespace std;
#define AREA(l, b) (l * b)
int main()
{
	int l, b,area;
	// input
	cout <<"\n Enter the lenght of a Rectangle:-";
	cin >> l;
	cout << "\n Enter the breadth of a Rectangle:-";
	cin >> b;
	area = AREA (l, b);
	cout<< "Area of a Rectangle is:-" << area << endl;
	return 0; 
}
