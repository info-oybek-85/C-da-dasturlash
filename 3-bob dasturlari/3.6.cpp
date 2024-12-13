# include <iostream>
using namespace std;
int main ( )
{ int n, f ; int fib ( int );
cout << "Raqamni kiriting =";
cin >> n;
f = fib (n);
cout << "Fibonachi soni="<< f << endl;
}
int fib ( int n )
{  if ( n < 2) return 1; else return ( fib (n-2) + fib (n-1)); }

