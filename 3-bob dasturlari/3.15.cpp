# include <iostream>
# include <math.h>
# include <conio.h>
# define pi 3.1415
using namespace std;
void yuza (int a, int b, int al, float& c, float& s)
{ c = sqrt(a*a+b*b-2*a*b*cos(al*pi/180));
  s = a*b*sin(al*pi/180)/2;  }
int main ( )
{ int a1=10, b1=30, a2=40, b2=40, a3=30,b3=50,al1=85, al2=145, al3=125; 
float c1, c2, c3, s1, s2, s3, s4, s, sol, p;
yuza (a1, b1, al1, c1, s1); // yuza (10, 30, 85, c1, s1) deb yozsa ham boʻladi 
yuza (a2, b2, al2, c2, s2); 
yuza (a3, b3, al3, c3, s3);
p = (c1+ c2 + c3) / 2; 
s4 = sqrt ( p*(p - c1)*(p - c2)*(p - c3)); 
s = s1+s2+s3+s4;
s = s/100; sol = s * 8560; //    (som)
cout <<"er yuzasi="<< s << endl;
cout << "soliq="<<sol<<endl;
getch( ); }
