# include <iostream>
# include <math.h>
# include <conio.h>
using namespace std;
// uchburchak tomonini topish funksiyasi
float line(float x1, float x2, float y1, float y2)
{ float p=sqrt((x1-x2)*(x1-x2)+ (y1-y2)*(y1-y2)); 
  return p; }
// uchburchak qurib boʻladimi? funksiyasi
int uch ( float a, float b, float c)
{ if ( a+b>c && b+c>a && c+a>b ) return 1;
else return 0; }
// uchburchakning yuzini topish funksiyasi
float s (float a, float b, float c)
{ float p, s ;
p=( a+b+c )/2; s = sqrt (p*(p-a)*(p-b)*(p-c));
return s; }
int main ( )
{ float x1,x2,x3,y1,y2,y3,p1,p2,p3; 
cin >> x1>> x2>> x3>> y1>> y2>> y3;
p1 = line (x1, x2, y1, y2);
p2 = line (x1, x3, y1, y3);
p3 = line (x2, x3, y2, y3);
int t = uch (p1, p2, p3);
if ( t == 1) 
{ float yuza=s(p1, p2, p3); cout <<"yuza = "<<yuza<<endl;}
else cout <<"uchburchak qurib boʻlmaydi !!!"<< endl;
getch();
} 
 


