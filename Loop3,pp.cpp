
// Print number 5 to 15 with sum.
#include <iostream>
using namespace std;

int main()
{
	int sum =0;
	
	for(int i = 5; i < 16; i++){
		sum = sum+i;
		cout << "Sum is: "<<sum << endl;
	}
	return 0;
}
