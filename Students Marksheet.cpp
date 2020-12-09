#include <iostream>
#define SUM(a,b,c,d,e)(a+b+c+d+e)
#define ADD(f,g,h,i,j)(f+g+h+i+j)
#define PLUS(k,l,m,n,o)(k+l+m+n+o)
#define ADDING(p,q,r,s,t)(p+q+r+s+t)
#define ADDITION(u,v,w,x,y)(u+v+w+x+y)
using namespace std;
int main()
{
	float a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,sum,add,plus,adding,addition,percentage;
	percentage = (a+b+c+d+e);
	percentage = (f+g+h+i+j);
	percentage = (k+l+m+n+o);
	percentage = (p+q+r+s+t);
	percentage = (u+v+w+x+y);
	cout<<"Enter the marks of five subjects of Doraemon"<<endl;
	cin>>a>>b>>c>>d>>e;
	sum = SUM(a,b,c,d,e);
	cout<<"Total:- "<<sum<<endl;
percentage = (sum/5);
	cout<<"Enter the marks of five subjects of Nobita"<<endl;
	cin>>f>>g>>h>>i>>j;
    add = ADD(f,g,h,i,j);
    cout<<"Total:- "<<add<<endl;
   percentage = (add/5);
    cout<<"Enter the marls of Shizuka"<<endl;
    cin>>k>>l>>m>>n>>o;
    plus = PLUS(k,l,m,n,o);
    cout<<"Total:- "<<plus<<endl;
    percentage = (plus/5);
    cout<<"Enter the marks of Gian"<<endl;
    cin>>p>>q>>r>>s>>t;
    adding = ADDING(p,q,r,s,t);
    cout<<"Total:- "<<adding<<endl;
    percentage = (adding/5);
    cout<<"Enter the marks of Suneo"<<endl;
    cin>>u>>v>>w>>x>>y;
    addition = ADDITION(u,v,w,x,y);
    cout<<"Total:- "<<addition<<endl;
    percentage = (addition/5);
  
   
	return 0;
}
