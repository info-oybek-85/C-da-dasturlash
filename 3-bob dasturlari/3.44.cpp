#include <iostream>
using namespace std;
float sum(int n,float *p[]){
 float s=0.0;
 for(int i=0;i<n;i++)
 for(int j=0;j<n;j++)
 s+=p[i][j];//”*p[i][j]” emas,chunki massivga murojaat 
 return s; }
    	int main()  	{
      float x[][4]={{11,-12,13,14},{21,22,23,24},     
       {31,32,33,34},{41,42,43,44}};
 float *ptr[4];
 for(int i=0;i<4;i++) ptr[i]=(float *)&x[i];
 cout<<sum(4,ptr)<<endl; }

