# include <iostream>
using namespace std;
int max (int a, int b)
{ if (a>b) return a; else return b;}
float max (float a, float b)
{ if (a>b) return a; else return b;}
int main ( )
{
int a1, b1; float a2, b2;
cin >> a1>>b1;
cout << "butun max="<<max(a1, b1)<<endl;
cin >>a2>>b2;
cout << "haqiqiy max="<< max(a2, b2)<<endl;}

