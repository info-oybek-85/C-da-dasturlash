# include <iostream>
using namespace std;
void invert (char e[ ])
{ char s; int i, j, m;
  for (m=0; e[m]!='\0'; m++)
  for(j=0, j=m-i; i<j; i++, j--)
 { s=e[i]; e[i] = e[j]; e[j] =s; } } 
int main( )
{ char ct[ ] ="0123456789";
 void invert (char [ ]);
 invert(ct); cout << ct; }



