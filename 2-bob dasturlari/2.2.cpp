#include <iostream>
#include <math.h>
using namespace std;
	int main()
	{	   int a,b,c;
	   float D,x1,x2;
	   cout <<"ax^2+bx+c=0 tenglama ildizini topish dastursi! ";
	   cout<<"\n a - koeffistientni kiriting:";
	   cin>>a;
 	   cout<<"\n b - koeffistientni kiriting:";
	   cin>>b;
	   cout<<"\n c - koeffistientni kiriting:";
	   cin>>a;
	   D = b*b-4 * a * c;
	   if (D<0){
                 cout << "Tenglama haqiqiy ildizlarga ega emas";
	       return 0;}   
	    if (D==0){
                  cout << "Tenglama yagona ildizga ega:  ";
	        x1=x2= -b / (2 * a);
	        cout<<"\n    x= "<<x1;
                  return 0;
	      } else {
                  cout <<"Tenglama ikkita ildizga ega:";
	        x1 = (- b + sqrt(D)) / (2 * a);
	        x2 = (- b - sqrt(D)) / (2 * a);
                  cout<<"\n x1=  "<<x1;
                  cout<<"\n x2= "<<x2; }
            return 0; }

