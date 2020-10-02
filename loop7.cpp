#include <iostream>
using namespace std;
#define SUM(a,b,c,d,e)(a+b+c+d+e)
int main()
{
	float a,b,c,d,e,sum;
	cout<<"No. of student:- "<<endl;
    cin>>a;
	cout<<"No of Subjects:- "<<endl;
    cin>>a;
    cout<<"Enter the marks of five subjects:- "<<endl;
    cin>>a>>b>>c>>d>>e;
    sum = SUM(a,b,c,d,e);
    cout<<"Sum of their marks:- "<<sum<<endl;
    cout<<"Percentage of thir marks:- "<<sum/5;                                                               
   
    return 0;
}
