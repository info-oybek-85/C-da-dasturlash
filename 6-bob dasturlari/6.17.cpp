#include <iostream>
using namespace std;
class Nuqta{
  int x,y;
 public:
  Nuqta(int _x,int _y){x=_x; y=_y;}
  Nuqta(){x=0; y=0;}
  Qiymat_xy(int & _x,int & _y){_x=x; _y=y;}
  Nuqta operator+();
  Nuqta operator-();
};
Nuqta  Nuqta::operator+(){
 x=+x;
 y=+y;
 return *this;
}
Nuqta Nuqta::operator- (){
 x=-x;
 y=-y;
 return *this;
}
int main(){
 int a,b;
 Nuqta N1(-10,20);
 N1=+N1;		//qayta yuklangan plyus operatorini chaqirish 
 N1.Qiymat_xy(a,b);
 cout<<"N1.x="<<a<<" N1.y="<<b<<endl;
 N1=-N1;		//qayta yuklangan plyus operatorini chaqirish 
 N1.Qiymat_xy(a,b);
 cout<<"N1.x="<<a<<"N.y= "<<b<<endl;
return 0;
} 

