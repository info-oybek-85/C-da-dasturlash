#include <iostream>
#include <math.h>
using namespace std;
float vector (int d[ ], int k)
{ float s=0; int i ;
for (i=0; i<k; i++)
s = s + d[i] * d[i];
s =sqrt(s); 
return s; }
int main ( )
{
int b[3] = {10,20,30}, c[4] = {14,15,16,17};
float  s1, s2;
s1 = vector (b, 3);
s2 = vector (c, 4);
cout <<"s1=" << s1 <<"s2= " << s2 << endl;}

