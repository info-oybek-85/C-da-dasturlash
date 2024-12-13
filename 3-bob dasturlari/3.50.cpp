#include "iostream"
int Summa(char ,int,...);
using namespace std;
int main(){
cout<<"1="<<Summa('i',3,10,20,30)<<endl;
cout<<"2="<<Summa('f',3,10.0,20.0,5.0)<<endl;
cout<<"3="<<Summa('d',3,10,20,30)<<endl;
}
int Summa(char z, int k,...){
switch(z){
case 'i':{
int * ptr=&k+1; 
int s=0;
for(;k--;ptr++) s+=*(ptr);
return(int)s;
}
case 'f':{
float*ptr=(float *)(&k+1); float s=0.0;
for(;k--;ptr++) s+=*(ptr);
return s;
}
default:{
cout<<"\n parametr hato berilgan ";
return 9999999.0;
break;
}}}          

