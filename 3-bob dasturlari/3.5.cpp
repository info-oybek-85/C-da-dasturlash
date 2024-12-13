# include <iostream>
# include <conio.h>
using namespace std;
int main( )
{ int n, f, fac(int);
cout << "sonni kiriting:"; cin >> n;
f = fac(n); cout << "sonning factoriali = "<<f<<endl;
getch( );
}
int fac(int i)
{ return i <=1 ? 1 : i * fac( i - 1); }
