#include <iostream>
#define SUM(a,b,c,d,e)(a+b+c+d+e)
#define ADD(f,g,h,i,j)(f+g+h+i+j)
using namespace std;
int main()
{
    float a,b,c,d,e,f,g,h,i,j,add,sum;
	cout<<"Enter the no. of Students:- "<<endl;
    cin>>a;
    cout<<"Enter the no. of subjects:- "<<endl;
    cin>>b;
    cout<<"Enter the marks of Tyson:- "<<endl;
    cin>>a>>b>>c>>d>>e;
    sum = SUM(a,b,c,d,e);
    cout<<"Sum is:-"<<sum<<endl;
    cout<<"Percentage:- "<<sum/5<<endl;
    
    cout<<"Enter the marks of Edison:- "<<endl;
    cin>>f>>g>>h>>i>>j;
    add = ADD(f,g,h,i,j);
    cout<<"Sum is:- "<<add<<endl;
    cout<<"Percentage:- "<<add/5<<endl;
    
		if(sum/5>add/5){
		cout<<sum/5<<" above 90% Grade A"<<endl;
	   	cout<<add/5<<" above 80% Grade B "<<endl;
	}
	else{
		cout<<add/5<<" above 90% Grade A"<<endl;
	    cout<<sum/5<<" above 80% Grade B"<<endl; 	
	}

	
	return 0;
     
}
