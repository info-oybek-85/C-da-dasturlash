#include <iostream>
using namespace std;
class Nuqta{
  int x,y;
 public:
  Nuqta(int _x,int _y){x=_x; y=_y;}
  Nuqta(){x=0; y=0;}
  Qiymat_xy(int & _x, int & _y){_x=x; _y=y;}
  bool operator==(Nuqta ob);
  bool operator&&(Nuqta ob);
};
bool Nuqta::operator==(Nuqta ob){
 return (x==ob.x && y==ob.y);
}
bool Nuqta::operator&&(Nuqta ob){
 return (x && ob.x) && (y && ob.y);
}
int main(){
 Nuqta Nuqta1(10,20), Nuqta2(10,25),
   Nuqta3(10,20),Nuqta4;
 if(Nuqta1==Nuqta2)
   cout<<"Nuqta1 va Nuqta2 o?zaro teng.\n";
 else cout<<"Nuqta1 va Nuqta2 o?zaro teng emas.\n";
 if(Nuqta1==Nuqta3)
  cout<<"Nuqta1 va Nuqta3 o?zaro teng.\n";
 else cout<<"Nuqta1 va Nuqta3 o?zaro teng emas.\n";
 if(Nuqta1 && Nuqta2) cout<<"Nuqta1 && Nuqta2 rost.\n";
 else cout<<"Nuqta1 && Nuqta2 yolg?on.\n";
 if(Nuqta1 && Nuqta4) cout<<"Nuqta1 && Nuqta4 rost.\n";
 else cout<<"Nuqta1 && Nuqta4 yolg?on.\n";
 return 0;  }

