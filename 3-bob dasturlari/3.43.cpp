#include <iostream>
using namespace std;
//butun turdagi massivga ko?rsatkich qaytaradigan. funksiya 
int * massiv_ulash(int,int*,int,int*);
     int main(){
 int c[]={-1,2,5,10},d[]={1,7,8};
 int * h;
 h=massiv_ulash(5,c,3,d);
for(int i=0;i<8;i++) cout<<"\t"<<h[i];
 delete[]h; }
     int * massiv_ulash(int n,int *a ,int m,int *b){
 int * x=new int[n+m];
 int ia=0,ib=0,ix=0;
 while (ia<n && ib<m)
  a[ia]>b[ib]?x[ix++]=b[ib++]:x[ix++]=a[ia++];
 while(ib<m)x[ix++]=b[ib++]; 
 while(ia<n)x[ix++]=a[ia++]; 
 return x; }

