# include <iostream>
using namespace std;
int main ( )
{ int m = 5, *p = 0;
p = &m;
cout << m << endl;
cout << *p<<endl;
*p = 7;
cout << m << endl;
cout << *p << endl;
m = 9;
cout << m << endl;
cout << *p << endl;
}

