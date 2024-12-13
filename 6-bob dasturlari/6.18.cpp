#include <iostream>
using namespace std;
class Nuqta{
  int x,y;
 public:
  Nuqta(int _x,int _y){x=_x; y=_y;}
  Nuqta(){x=0; y=0;}
  Qiymat_xy(int & _x,int & _y){_x=x; _y=y;}
  Nuqta & operator++();  // prefiks inkrement uchun
  Nuqta operator++(int); // postfiks inkrement uchun
  Nuqta & operator--();  // prefiks dekrement uchun
  Nuqta operator--(int); // postfiks dekrement uchun
};
Nuqta & Nuqta::operator++(){
 x++;
 y++;
 return *this;
}
Nuqta Nuqta::operator++(int){
 Nuqta Oraliq=*this;
 ++*this;
 return Oraliq;
}
Nuqta & Nuqta::operator--(){
 x--;
 y--;
 return *this;
}
Nuqta Nuqta::operator--(int){
 Nuqta Oraliq=*this;
 --*this;
 return Oraliq;
}

int main(){
 int a,b;
 Nuqta N1(-10,20), N2(15,25),N3;
 ++N1; 	//prefiks inkrement operatorini chaqirish
 N1.Qiymat_xy(a,b);
 cout<<"(++N1).x="<<a<<" (++N1).y="<<b<<endl;
 N1++; 	//postfiks inkrement operatorini chaqirish
 N1.Qiymat_xy(a,b);
 cout<<"(N1++).x="<<a<<" (N1++).y="<<b<<endl;
 N3=--N2; //prefiks dekrement operatorini chaqirish
 N3.Qiymat_xy(a,b);
 cout<<"N3=--N2; => N3.x="<<a<<" N3.y="<<b<<endl;
 //postfiks dekrement operatorini chaqirish
 (N3=N1--).Qiymat_xy(a,b); 
 cout<<"(N3=N1--).x="<<a<<" (N3=N1--).y="<<b<<endl;
 N1.Qiymat_xy(a,b);
 cout<<"N1.x="<<a<<" N1.y="<<b<<endl;
 N2.Qiymat_xy(a,b);
 cout<<"N2.x="<<a<<" N2.y="<<b<<endl;
 return 0;
}

