#include <iostream>
using namespace std;
int main(){
 int a=0,b=4,c=90; char z='\t';
 a=b; cout<<a<<z; 		// a=4
 a=b+c+c+b; cout<<a<<z;// a= 4+90+90+4 = 188
 a=b-2; cout<<a<<z;	// a=2
 a=b*3; cout<<a<<z;	// a=4*3 = 12
 a=c/(b+6); cout<<a<<z;// a=90/(4+6) =9
 cout<<a%2<<z;		// 9%2=1
 a+=b; 	cout<<a<<z;	// a=a+b = 9+4 =13
 a*=c-50;	cout<<a<<z;	//a=a*(c-50)=13*(90-50)=520
 a-=38;	cout<<a<<z;	// a=a-38=520-38=482
 a%=8;  	cout<<a<<z;	// a=a%8=482%8=2
 return 0;}

