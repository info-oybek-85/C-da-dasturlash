#include <iostream>
using namespace std;
void vector_01(int n,int*x,int * y) {
//bu ikkinchi usul 
 for (int i=0;i<n;i++)
  y[i]=x[i]>0?1:0; }
int main(){
 int a[]={1,2,-4,3,-5,0,4};
 int c[7];
 vector_01(7,a,c);
 for(int i=0;i<7;i++) cout<<"\t"<<c[i]; }

