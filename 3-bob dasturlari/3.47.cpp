#include <iostream>
using namespace std;
void f(int, int*, int &);
int main()
{
 int i=1, j=2, k=3;   cout<<i<<" "<<j<<" "<<k<<endl;
 f(i, &j, k);     cout<<i<<" "<<j<<" "<<k;
}
void f(int i, int *j, int &k)
{
 i++;
 (*j)++;
 k++;
 *j=i+k;
 k=*j+i;  }

