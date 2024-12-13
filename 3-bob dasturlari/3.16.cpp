# include <iostream>
# include <math.h>
using namespace std;
int kvad (float a, float b, float c, float &x1, float &x2)
{ float d ;
d = b*b-4*a*c;
if ( d < 0 ) return 0;
x1 = (-b + sqrt (d)) / (2*a);
x2 = (-b - sqrt (d)) / (2*a);
if ( x1 == x2) return 1; else return 2;
}
int main ( )
{ float a, b, c, x1, x2;  int k;
cin >> a >> b >> c;
k = kvad (a, b, c, x1, x2);
switch ( k )
{
case 0 : cout << "yechimi yo'q"<< endl; break;
case 1 : cout << "x="<< x1 << endl; break;
case 2 : cout << "x1="<< x1 << " x2=" << x2 << endl; break; }}

