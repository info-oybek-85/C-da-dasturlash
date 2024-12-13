# include <iostream>
# include <conio.h>
using namespace std;
int main()
{
int x=10, y=10; int *xp, *yp;
xp =&x; yp =&y;
if (xp == yp) cout << "ular teng!"<<endl;
else cout << "ular teng emas!"<<endl;
if (*xp == *yp) cout << "ular teng!"<<endl;
else cout << "ular teng emas!"<<endl;
getch( ); }

