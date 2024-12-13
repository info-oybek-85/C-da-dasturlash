#include <iostream>
using namespace std;
class Nuqta{
  int x,y;
 public:
  Nuqta(int _x,int _y){x=_x; y=_y;}
  Nuqta(){x=0; y=0;}
  Qiymat_xy(int & _x,int & _y){_x=x; _y=y;}
  Nuqta & operator()(int dx, int dy)
 { x+=dx; y+=dy; return *this;};
};
int main(){
 int x,y;
 Nuqta N1,N2;
 // Nuqta sinfining qayta yuklangan funksiyani chaqirish
 // operatorining operator funksiyasini N1 obyekt uchun
 // chaqirish.
 N2=N1(5,10); 
 N2.Qiymat_xy(x,y);
 cout<<"1–chaqirishda: N2.x="<<x<<"  N2.y="<<y<<endl;
 N2=N2(1,2);//qayta yuklangan funksiyani chaqirish operatori 
 N2.Qiymat_xy(x,y);
 cout<<"2–chaqirishda: N2.x="<<x<<"N2.y="<<y<<endl;
 return 0;} 

