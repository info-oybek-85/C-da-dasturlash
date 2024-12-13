#include <iostream>
using namespace std;
typedef  float mmm[10][10];
typedef float mm[10]; int i, j;
void nodir (mmm a, int n, mm b)
{
for (j=0; j<4; j+=2)
{ b[j] = 0;
for (i=0; i<n; i++)
b[j] = b[j] + a[i][j]; } }
int main ( )
{ mmm d = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
mmm d1 = {{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
mm c, c1;
nodir (d, 4, c);
nodir (d1, 5, c1);
for (i=0; i<4; i++)
{ cout <<"c="<< c[i];
cout << "c1="<< c1[i] << endl;
}}

