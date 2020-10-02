// Find the sum of first 10 natural numbers
#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	
	for(int i = 1 ; i < 11; i++){
		sum = sum+i;
		//cout << "sum is: "<<sum << endl;
	}
	cout << "sum is: "<<sum << endl;
	return 0;
}
