# include <iostream>
# include <conio.h>
using namespace std;
int main ( ){ 
float   a[3][3] = {{},{},{}}, b;  
int i, j, k;
for ( k=0; k<3; k++)
for ( i=0; i<3; i++)
for ( j=0; j<2; j++)
{  if  (a[i][j] > a[i][j+1] )
{  b = a[i][j];  a[i][j] = a[i][j+1];  a[i][j+1] = b;  }  }
for ( i=0; i<3; i++)
{  for ( j=0; j<3; j++)
cout <<"a="<<a[i][j];  cout << endl;  } getch ( ); }

