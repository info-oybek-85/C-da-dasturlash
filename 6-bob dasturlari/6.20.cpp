#include <iostream>
using namespace std;
class Nuqta{
  int x,y;
 public:
  Nuqta(int _x,int _y){x=_x; y=_y;}
  Nuqta(){x=0; y=0;}
  Qiymat_xy(int & _x,int & _y){_x=x; _y=y;}
  Nuqta & operator++(int); 
};
Nuqta & Nuqta::operator++(int n){
 if (n!=0) {
  x+=n;
  y+=n; }
 else {
  x++;
  y++; }
  return *this;}
int main(){
 Nuqta N1(10,20);
 N1.operator++(100);	//100 soniga inkrement
 return 0;} 

