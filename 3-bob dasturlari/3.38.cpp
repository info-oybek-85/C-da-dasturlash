#include <iostream>
#include <malloc.h>
using namespace std;
int main(){
 int n;
 float * pMatr, s=0;
 cout<<"A(n,n): n=";
 cin>>n;
 if((pMatr=(float*)malloc(n*n*sizeof(float)))==NULL)  {
  cout<<"Xotira yetarli emas!!!";
  return 1;  }
 for(int i=0;i<n;i++)
  for(int j=0;j<n;j++)cin>>*(pMatr+i*n+j);
 for(int i=0;i<n;i++)
  for(int j=i+1;j<n;j++)s+=*(pMatr+i*n+j);
 cout<<"Matritsa bosh diagonalidan yuqoridagi";
 cout<<"elementlar yigʻindisi S="<<s<<endl;
 return 0;}  

