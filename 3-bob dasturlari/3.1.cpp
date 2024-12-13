# include <iostream>
# include <conio.h>
using namespace std;
int main ( )
{ int k, n, kw (int n); // kw - funksiya nomi (ixtiyoriy)
cin>>n;         // n - berilayotgan son
k=kw(n);       // kw funksiyasiga murojaat qilinmoqda
cout << "k="<<k<<endl;
getch( );}
int kw (int a) // funksiya aniqlanmoqda. Bu yerda a rasmiy parametr
{  int c;    // lokal oʻzgaruvchi
 c=a*a*a;   // hisoblash
 return c; }  // funksiyaga natijani qaytarish

