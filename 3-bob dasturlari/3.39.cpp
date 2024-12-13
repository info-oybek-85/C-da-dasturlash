#include <iostream>
using namespace std;
int main (){ 
 int n,m;
 int i,j; float s;
cout<<"\n n="; cin>>n; // matritsa satrlari soni
cout<<"\n m="; cin>>m; //matritsa ustunlari soni 
 float *b=new float[m];
 float *c=new float[n]; 
// koʻrsatkichlar massiviga xotira ajratish
 float **a=new float *[n] ; 
 for(i=0;i<n;i++)  // har bir satr uchun 
a[i]=new float[m]; 	//dinamik xotira ajratish
 for(j=0;j<m;j++)cin>>b[j];
 for(i=0;i<n;i++)
  for(j=0;j<m;j++)cin>>a[i][j];
 for(i=0;i<n;i++) {
  for(j=0,s=0;j<m;j++)s+=a[i][j]*b[j];
  c[i]=s; }
 for(i=0;i<n;i++)cout<<"\t c["<<i<<"]="<<c[i]; 
 delete[]b; 
 delete[]c;
 for (i=0;i<n;i++) delete[]a[i];
 delete[]a; }
