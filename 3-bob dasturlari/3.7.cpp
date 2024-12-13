# include <iostream>
using namespace std;
float dar (float x, int n)
{ float y=1;
for (int i=0; i<=n; i++) 
  y = y*x; 
  return y; }
int main( )
{
int n=3 ;  float a, z;
cin>>a;
z = ( dar(a, 5) + dar(1/a, 4))/ (2* dar(a, n)) ;
 cout << "z="<<z<<endl;  }

