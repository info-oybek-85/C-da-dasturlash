#include <iostream>
using namespace std;
class Nuqta{
  int x,y;
 public:
  Nuqta(int _x,int _y){x=_x; y=_y;}
  Nuqta(){x=0; y=0;}
  Qiymat_xy(int & _x,int & _y){_x=x; _y=y;}
  bool operator==(Nuqta ob);
  Nuqta & operator=(Nuqta & ob);
};
bool Nuqta::operator==(Nuqta ob){
 return (x==ob.x && y==ob.y);
}
Nuqta & Nuqta::operator=(Nuqta & ob){
 if (this==&ob) return *this;
 x=ob.x;
 y=ob.y;
 return *this;
}
int main(){
 int a,b;
 Nuqta Nuqta1(10,20), Nuqta2(20,25), Nuqta3;
 Nuqta3=Nuqta2;
 if(Nuqta2==Nuqta3)
  cout<<"Nuqta2 va Nuqta3 o?zaro teng.\n";
 else cout<<"Nuqta2 va Nuqta3 o?zaro teng emas.\n";
 Nuqta3=Nuqta2=Nuqta1;
 if(Nuqta1==Nuqta3)
  cout<<"Nuqta1 va Nuqta3 o?zaro teng.\n";
 else cout<<"Nuqta1 va Nuqta3 o?zaro teng emas.\n";
 Nuqta3.Qiymat_xy(a,b);
 cout<<"Nuqta3.x="<<a<<" Nuqta3.y="<<b<<endl;
 return 0;} 

