# include <iostream>
# include <conio.h>
using namespace std;
int main()
{ float a[3][2]={{24.3,-4.15},{0,18.4},{-8.8,-15.75}}, 
b[3][2]={{0.1,-4.8},{6.8,7.1},{-2.8,0.40}};
float  c[3][2];
int i, j; 
for (i = 0; i < 3; i++)
{ for (j = 0; j < 3; j++)
{ c[i][j] = a[i][j] + b[i][j];
cout <<"c["<<i<<","<<j<<"]="<<c[i][j]; }
cout <<endl; } 
getch ( );}

