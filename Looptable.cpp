// Bonus print multiplication table
#include <iostream>
using namespace std;
int main()
{
	int number,table;
	cout<<"Find the multiplication table of: ";
	cin>>number;
	for(int i=1 ; i <=10; i++) {
		table= number*i;
		cout<<table<<endl;
	}
	return 0;
}
