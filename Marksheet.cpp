#include <iostream>
using  namespace std;
int main( )
{
 int m1, m2, m3, m4, m5, per ;
 cout<< ( "Enter marks in five subjects " ) ;
 cin>>m1>>m2>>m3>>m4>>m5  ;
 per = ( m1 + m2 + m3 + m4 + m5 ) / 5 ; 
 if ( per >= 60 )
 cout<<( "First division" ) ;
 if ( ( per >= 50 ) && ( per < 60 ) )
 cout<<( "Second division" ) ;
 if ( ( per >= 40 ) && ( per < 50 ) )
 cout<< ( "Third division" ) ;
 if ( per < 40 )
cout<< ( "Fail" ) ;
 
return 0;

}
