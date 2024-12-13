#include <iostream>
using namespace std;
class Nuqta{
 	  int x,y;
 	 public:
 	  Nuqta(){x=0; y=0;}
 	  Nuqta(int _x,int _y){x=_x; y=_y;}
 	  void Nuqta_Qiymati(int & _x,int & _y){_x=x; _y=y;}
 	  Nuqta operator+(Nuqta& ob);
 	  Nuqta operator-(Nuqta& ob);
};
Nuqta Nuqta::operator+(Nuqta& ob){
 	 Nuqta OraliqOb;
 	 OraliqOb.x=x+ob.x;
 	 OraliqOb.y=y+ob.y;
 	 return OraliqOb;
}
Nuqta Nuqta::operator-(Nuqta& ob){
 	 Nuqta OraliqOb;
 	 OraliqOb.x=x-ob.x;
 OraliqOb.y=y-ob.y;
 	 return OraliqOb;
}
int main(){
 	 int x,y;
 	 Nuqta A(100,200), B(50,100),C;
 C=A+B; // qayta yuklangan qo?shish operatori amal qiladi 
 	 C.Nuqta_Qiymati(x,y);
 	 cout<<" C=A+B: "<<"C.x="<<x<<" C.y="<<y<<endl;
	 A=A-B; // qayta yuklangan ayirish operatori amal qiladi
 	 A.Nuqta_Qiymati(x,y);
 	 cout<<" A=A-B: "<<"A.x="<<x<<" A.y="<<y<<endl;
 	 return 0;}

