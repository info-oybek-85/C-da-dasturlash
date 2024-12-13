#include <iostream>
class Nuqta{
  int x,y;
 public:
  Nuqta(int _x,int _y){x=_x; y=_y;}
  Nuqta(){x=0; y=0;}
  Qiymat_X(){return x;}
  Qiymat_Y(){return y;}
  Nuqta & operator->();
};
Nuqta * Nuqta::operator(){
 cout<<"Obʻect elementiga murojaat: ";
 return this;
}
int main(){
 Nuqta N(5,10);
 // Nuqta sinfining qayta yuklangan a’zolarini tanlash 
 // operatorining operator funksiyasini N obyekt uchun
 // chaqirish.
 cout<<"N->x = "<<N->Qiymat_X()<<endl;
 cout<<"N->y = "<<N->Qiymat_Y()<<endl;
 return 0;}

