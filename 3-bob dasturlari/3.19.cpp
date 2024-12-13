# include <iostream>
# include <math.h>
using namespace std;
int main()
{
 float x, y, z, pp, ss;
 int tria (float, float, float, float *, float *);
 cout <<"x="; cin >> x;
 cout <<"y="; cin >> y;
 cout <<"z="; cin >> z;
 if (tria (x, y, z, &pp, &ss)==1) 
 cout <<"Uchburchak yuzasi="<< ss << "va perimetri="<< pp <<endl;
  else 
 cout << "Malumotlar notoʻgʻri kiritilgan!"<< endl;
}
 int tria ( float a, float b, float c, float *pp, float *ss)
{
 float e;
 if (a+b<=c || a+c<=b || b+c<=a) return 0;
 else
  { *pp = a+b+c;
   e=*pp/2; 
  float s=sqrt(e*(e-a)*(e-b)*(e-c));
   return 1;}}

