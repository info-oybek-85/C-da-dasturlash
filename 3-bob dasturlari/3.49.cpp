#include "iostream"
using namespace std;
float summa (int k,...)
{ float p=0;
int *prt=&k;
if(*prt==0.0) cout<<" 0 ";
for(; *prt; prt++) { p+=*prt; }
return p; }
int main(){ 
cout<<"\n "<<summa(10,20,30,40,0.0);
cout<<"\n "<<summa(1,2,3,4,0.0);
}

