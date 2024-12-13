# include <iostream>
# include <conio.h>
using namespace std;
int main ( ){ 
int  a[3][4] = {{1,2,3,4},{4,5,6,7},{7,8,9,10}}, i, j, k, h,  min;
int b[4];
min = a[0][0];
for (i=0; i<3; i++)
for (j=0; j<4; j++)     
{ if ( a[i][j] > min)  { min = a[i][j];  k = i;  h = j; }  }
cout << "min="<<min<<" k="<<k<<"  h="<<h<<endl;
for  ( j=0; j<4; j++)
{ b[j] = a[k][j];
   cout <<"b= "<<b[j];  }
getch ( ); }

