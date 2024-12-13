# include <iostream>
# include <conio.h>
using namespace std;
int main ( ){ 
int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}}, b[3] = {1,3,6}, c[3], i, j;
for (i=0; i<3; i++)
{  c[i] = 0;
    for (j=0; j<3; j++)
    c[i] = c[i] + a[i][j] * b[j];
    cout <<"c="<<c[i]<<endl; }
getch ( );}

