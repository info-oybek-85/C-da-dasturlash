#include <iostream>
#include <math.h>
using namespace std;
int **rmatr(int n,int m){
 int ** ptr;
   	 ptr=new int *[n];
   	 for(int i=0;i<n;i++)  {
       ptr[i]=new int[m];
for(int j=0;j<m;j++) ptr[i][j]=0; }
    	 return ptr;}
int sum(int n,int m,int **ix){
 float s=0;
 for(int i=0;i<n;i++)
 for(int j=0;j<m;j++) s+=ix[i][j]; 
 return s; }
int main(){
 int n,m;
   	 cin>>n>>m;
   	 int **matr;
   	 matr=rmatr(n,m);
   	 for(int i=0;i<n;i++) {
  cout<<endl<<i<<" - satr:";
  for (int j=0;j<m;j++) cout<<"\t"<<matr[i][j];
   	 }
 cout<<endl<<"Summa="<<sum(n,m,matr);
  	 for(int i=0;i<n;i++) delete matr[i];
 delete[]matr;  }

