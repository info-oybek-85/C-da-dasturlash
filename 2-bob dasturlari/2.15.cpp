#include <iostream>
#include <math.h>
using namespace std;
int main() {
 	unsigned int Pul;         //Pul- kiritiladigan pul miqdori
	unsigned n3,m5;         //n-3 so?mliklar ,    m-5 so?mliklar soni
	bool xato=false;         //Pul qiymatini kiritishdagi hatolik
	do	{    if(xato)cout<<"Pul qiymati 7 dan kichik!";
	xato=true;                  // keyingi takrorlalanish xato hisoblanadi 
	cout<<"\nPul qiymatini kiriting (>7): ";
	cin>>Pul;  
          }
	while(Pul<=7);         // Toki  7 dan katta son kiritilguncha
	n3=0;  		  //Birorta ham 3 so?mlik yo?q
	do {	m5=0; 	            // Birorta ham 5 so?mlik yo?q
	do	{	      if (3*n3+5*m5==Pul)
	      cout<<n3<<" ta 3 so?mlik+"<<m5<<" ta 5 so?mlik\n";
	      m5++;   	                   // 5 so?mliklar 1 taga oshiriladi
} 
while(3*n3+5*m5<=Pul);
	n3++;  		         //3  so?mliklar bittaga oshiriladi 
 } while(3*n3<=Pul);
return 0;}

