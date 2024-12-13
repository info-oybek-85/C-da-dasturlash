#include <iostream>
using namespace std;
class Asosiy{
  int x;
 public:
  virtual void Qiymat(int _x)  {  x=_x;  cout<<"Asosiy::x = "<<x<<"\n";  }
  virtual void Chop_Qilish(Asosiy * pOb)  { Qiymat(10); }
};
class Hosila: public Asosiy{
  int x,y;
 public:
  virtual void Qiymat(int _x,int _y)  {
   x=_x; y=_y;
   cout<<"Hosila::x = "<<x<<" Hosila::y = "<<y<<"\n";
  }
  virtual void Chop_Qilish(Asosiy * pOb)  { Qiymat(15,20); }
};
int main(){
 Asosiy * pOb1=new Asosiy;
 Asosiy * pOb2=new Hosila;
 // Asosiy sinfidan virtual Chop_Qilish()  funksiyasini chaqirish
 pOb1->Chop_Qilish(pOb1);
 // Hosila sinfidan virtual Chop_Qilish() funksiyasini chaqirish
 pOb2->Chop_Qilish(pOb1);
 // Hosila sinfidan virtual Chop_Qilish() funksiyasini chaqirish
 pOb2->Chop_Qilish(pOb2);
 return 0;}

