#include <iostream>
using namespace std;
int index(char *ct1, char *ct2)
{ int i, j, m1, m2;
 for(m1=0; ct1[m1]!='\0'; m1++)
 for(m2=0; ct2[m2]!='\0'; m2++)
 if (m2>m1) return -1;
 for(i=0; i<m1-m2; i++)
 { for(j=0; j<m2; j++)
  if (ct2[j] !=ct1[i+j] ) break;
  if (j==m2) return 1; }
  return -1; }
int main ( )
{ char c1[ ] ="ogʻirlik_yigʻindisi";
 int index(char[ ], char[ ]);
 char c2[ ] = "non";
 char c3[ ] = "olma";
 cout<< index(c1,c2);
 cout<< index(c1,c3); }

