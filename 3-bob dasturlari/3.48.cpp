#include "iostream"
#include "math.h"
using namespace std;
int kvadrat_ildiz(float a,float b,float c, float & x1, float & x2){
float d; d=b*b-4*a*c;
if(d<0) return 0;
if(d==0){ x1=x2=-b/(2*a); return 1;
} else { x1=(-b+sqrt (d))/(2*a);
x2=(-b-sqrt(d))/(2*a); return 2;
     }}
int main(){
float a,b,c,d,x1,x2;
cout<<"ax^2+bx+c=0 tenglama ildizini topish. ";
cout<<"\n a-koeffisiyentini kiriting="; cin>>a;
cout<<"\n b-koeffisiyentini kiriting="; cin>>b;
cout<<"\n c-koeffisiyentini kiriting="; cin>>c;
switch (kvadrat_ildiz(a, b,c, x1,  x2))
{
case 0: cout<<" Tenglama haqiqiy ildizga  ega emas!";break;
case 1: cout<<" Tenglama yagona ildizga ega:";
cout<<"\n x="<<x1;break;
default: cout<<" Tenglama ikkita ildizga ega : "; 
cout<<"\nx1="<<x1; cout<<"\nx2="<<x2;}
return 0;
}

