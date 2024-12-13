# include <iostream>
# include <conio.h>
# include <stdlib.h>
# include <time.h>
using namespace std;
int main ( )
{ srand ( time (0));
int a[5], b[5], i;
for (i = 0; i < 5;  i++)     a[i] = rand ( );
for (i = 0; i < 5;  i++)
{  b[i] = a[i] + 64;   
cout << "b="<<b[i]<<endl; }    getch ( ); }

