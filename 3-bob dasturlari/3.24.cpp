#include <iostream>
using namespace std;
int main(){
 const int n=4,m=5;
 float a[m][n],b[n],c[m]; 
 int i,j; float s;
 for(i=0;i<m;i++)
  for(j=0;j<n;i++)cin>>a[i][j];
 for(i=0;i<m;i++)cin>>b[i];
 for(i=0;i<m;i++) {
  for (j=0,s=0;j<n;j++)
  s+=a[i][j]*b[j];
  c[i]=s;  }
 for (i=0;i<m;i++)cout<<"\t c["<<i<<"]="<<c[i]; 
 return 0; }

