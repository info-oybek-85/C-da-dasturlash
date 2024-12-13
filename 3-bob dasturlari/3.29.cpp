# include <iostream>
# include <conio.h>
# include <stdlib.h>
# include <time.h>
using namespace std;
int main ( )
{ 
srand ( time (0));
int a[3][3], b[3][3],c[3][3], i, j, k;
for (i=0; i<3; i++)     
for (j=0; j<3; j++)     
a[i][j] = rand ();
for (i=0; i<3; i++)
for (j=0; j<3; j++)     
b[i][j] = rand ( );
for (i=0; i<3; i++)
{ for (j=0; j<3; j++)     
{  c[i][j] = 0;
for (k=0; k<3; k++)
c[i][j] = c[i][j] + a[i][k]*b[k][j];
cout <<"c="<<c[i][j]<<"\t"; }  
 cout << endl; } 
getch ( );}

