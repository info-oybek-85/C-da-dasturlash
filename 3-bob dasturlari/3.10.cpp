# include <iostream>
# include <conio.h>
# include <stdlib.h>
# include <time.h>
using namespace std;
void kir(int m[ ][5], int k);
void chiq(int m[ ][5], int k);
int summa(int m[ ][5], int k, int x);
int i, j ;
int main()
{ int matr[4][5]; int a, s; int b[4][3];
cout<<"sonni kiriting="; cin>>a;
kir(matr, 4);  chiq(matr, 4);
s = summa(matr, 4, a);
cout<< "s="<<s<< endl;
getch( );  }

void kir(int m[ ][5], int k)
{ srand(time(0));
for (i=0;i<k;i++)
for (j=0;j<5;j++)
m[i][j]=rand( ) - 200; }

void chiq(int m[ ][5], int k)
{ for (i=0;i<k;i++)
for (j=0;j<5;j++)
cout <<m[i][j]<<endl; }
int summa(int m[ ][5], int k, int x)
{ int s1 = 0;
for (i=0; i<k; i++)
for (j=0; j<5; j++)
if (m[i][j] < x) s1 = s1 + m[i][j];
return s1; }

