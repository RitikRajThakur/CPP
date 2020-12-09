// Find Greater Among Three
#include <iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"Enter the three numbers"<<endl;
	cin>>x>>y>>z;
	// which no. is greater 
	if(x>y&&x>z){
		cout<<"x is greater"<<endl;}
	else if(y>x&&y>z){
		cout<<"Y is greater"<<endl;}
	else{
		cout<<"z is greater"<<endl;}
		return 0;
}
