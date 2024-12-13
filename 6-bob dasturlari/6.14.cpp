#include <iostream>
using namespace std;
class Nuqta{
 	  int x,y;
 	 public:
 	  Nuqta(){x=0; y=0;}
 	  Nuqta(int _x,int _y){x=_x; y=_y;}
 	  void Nuqta_Qiymati(int & _x,int & _y){_x=x; _y=y;}
 	  friend class Nuqta operator+(Nuqta& ob1, Nuqta& ob2);
 	  friend class Nuqta operator+(Nuqta& ob,int n);
 	  friend class Nuqta operator+(int n, Nuqta& ob);
};
Nuqta operator+(Nuqta& ob1,Nuqta& ob2){
 	 Nuqta OraliqOb;
 	 OraliqOb.x=ob1.x+ob2.x;
 	 OraliqOb.y=ob1.y+ob2.y;
 	 return OraliqOb;
}
Nuqta operator+(Nuqta& ob,int n){
 	 Nuqta OraliqOb;
 	 OraliqOb.x=ob.x+n;
 	 OraliqOb.y=ob.y+n;
 	 return OraliqOb;
}
Nuqta operator+(int n, Nuqta& ob){
 	 Nuqta OraliqOb;
 	 OraliqOb.x=ob.x+n;
 	 OraliqOb.y=ob.y+n;
 	 return OraliqOb;	
}
int main(){
 	 int x,y;
 	 Nuqta A(100,200), B(50,100),C;
 	 C=A+B;
 	 C.Nuqta_Qiymati(x,y);
 	 cout<<" C=A+B: "<<"C.x="<<x<<" C.y="<<y<<endl;
 	 C=A+30;
 	 C.Nuqta_Qiymati(x,y);
 	 cout<<" C=A+30: "<<"C.x="<<x<<" C.y="<<y<<endl;
 	 C=30+A;
 	 C.Nuqta_Qiymati(x,y);
 	 cout<<" C=30+A: "<<"C.x="<<x<<" C.y="<<y<<endl;
 	 return 0;
}

