# include <iostream>
# include <conio.h>
#include <iomanip>
using namespace std;
int  main ( )
{  int  n =1;  float  s1 = 0, s2 = 0;
float  p1 =1,  p2 = 1;
while  (s2 > 0.0001)
{ p1 = p1 * n;                          // p1*=n;
p2 = p2 * 2*n*(2*n-1);          // p2*= 2*n*(2*n-1);
s2 = p1 / p2;
s1 = s1 + s2;                          // s1+ = s2;
n ++; }
cout<<setprecision(3);
cout << "s1="<<s1 <<"n=" << n << endl;}

