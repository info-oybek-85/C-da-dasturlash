# include <iostream>
# include <conio.h>
# include <stdlib.h>
# include <time.h>
using namespace std;
int main ( ){ 
srand (time (0));
float   a[10] , b;  int  i,  j;
for (i = 0; i<10; i ++)
a[i] = rand( ) /33.;
for( j = 0; j<10; j++)
for ( i = 0; i < 0;  i ++){ 
 if  (a[i] < a[i+1]) 
{  b = a[i];  
a[i] = a[i+1];  
a[i+1] = b; }  }
cout. precision (3);
for (i = 0; i  < 10; i++)
cout << a[i]<<endl;  getch ( ); }

