#include <iostream>
using namespace std;
class Asosiy{
 public:
  Asosiy(int _x) {x=_x;}
  virtual int Qiymat_X(){return x;}
  virtual void Chop_X();
 private:
  int x;};
void Asosiy :: Chop_X() {cout<<"Asosiy::x="<<Qiymat_X()<<"\n"; }
class Hosila1: public Asosiy{
 public:
  Hosila1(int _x): Asosiy(_x){}
  void Chop_X();};
void Hosila1:: Chop_X() {cout<<"Hosila1::x="<<Qiymat_X()<<"\n";}
class Hosila2: public Asosiy{
 public:
  Hosila2(int _x): Asosiy(_x){}
  void Chop_X();
};
void Hosila2:: Chop_X() {cout<<"Hosila2::x="<<Qiymat_X()<<"\n"; }
int main(int argc, char* argv[]){
 Asosiy * asosiy=new Asosiy(10);
 Hosila1 * hos1=new Hosila1(20);
 Hosila2 * hos2=new Hosila2(30);
 asosiy->Chop_X();
 asosiy=hos1;
 asosiy->Chop_X();
 asosiy=hos2;
 asosiy->Chop_X();
 return 0;}

