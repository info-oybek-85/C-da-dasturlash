# include <iostream>
# include <conio.h>
using namespace std;
int main ( ){ 
float   a[3][3] = {{},{},{}}, s1=0, s2=0;  
int i, j;
for  ( i=0; i<3; i++)
s1 = s1 + a[i][i];
for ( i=0; i<3; i++)
for ( j=0; j<3; j++)
if  ( i+j == 2)    s2 = s2 + a[i][j];
cout <<"s1="<<s1<<"  s2="<< s2<< endl;
getch ( );  }

