#include <iostream>
using namespace std;
float sum(int n,float *x) //bu ikkinchi usul
{ 
 float s=0;
 for (int i=0;i<n;i++)s+=x[i];
 return s;}
int main(){
 float E[]={1.2,2.0,3.0,4.5,-4.0};
 cout<<sum(5,E);}

