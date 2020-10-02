//Make a result of Students.
#include <iostream>
using namespace std;
int main()
{
	float a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y;
	cout<<"Enter the no. of Students:- "<<endl;
	cin>>f;
	cout<<"Name of Students:- ";
	cout<<" \nRaj\nTyson\nJack\nGuy\nEdiosn\n";
	cout<<"Enter the no. subjects:-"<<endl;
	cin>>g;
    cout<<"Enter the marks of Raj of 5 subjects:- "<<endl;
	cin>>a>>b>>c>>d>>e;
    cout<<"Sum:- "<<a+b+c+d+e<<endl;
   
	cout<<"Enter the marks of Tyson of 5 subjects:-"<<endl;
	cin>>f>>g>>h>>i>>j;
	cout<<"Sum:- "<<f+g+h+i+j<<endl;

	cout<<"Enter the marks of Jack of 5 subjects:- "<<endl;
	cin>>k>>l>>m>>n>>o;
	cout<<"Sum:- "<<k+l+m+n+o<<endl;

	cout<<"Enter the marks of Guy of 5 subjects:- "<<endl;
	cin>>p>>q>>r>>s>>t;
	cout<<"Sum:- "<<p+q+r+s+t<<endl;
	
	cout<<"Enter the marks of Edison of 5 subjects:- "<<endl;
	cin>>u>>v>>w>>x>>y;
	cout<<"Sum:- "<<u+v+w+x+y<<endl;

     int mark[5], i;
        float sum=0;
        cout<<"\nEnter marks obtained in Physics, Chemistry, Maths, CS, English :: \n";
        for(i=0; i<5; i++)
        {
            cout<<"\nEnter mark[ "<<i+1<<" ] :: ";
                cin>>mark[i];
                sum=sum+mark[i];
        }
 
        float avg=sum/5;
        float perc;
        perc=(sum/500)*100;
        cout<<"\nAverage Marks of 5 Subjects = [ "<<avg<<" ] \n";
        cout<<"\nPercentage in 5 Subjects = [ "<<perc<<"% ] \n";
 
	
		return 0;
	
	
}
