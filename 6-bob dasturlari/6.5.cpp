#include <iostream>
using namespace std;
class Asosiy{
 public:
  virtual void Virtual_Fun(){cout<<"Asosiy::Virtual_Fun()\n"; }
  void NoVirtual_Fun(){cout<<"Asosiy::NoVirtual_Fun()\n";}
};
class Hosila: public Asosiy{
 public:
  virtual void Virtual_Fun(){ cout<<"Hosila::Virtual_Fun()\n";}
  void NoVirtual_Fun(){cout<<"Hosila::NoVirtual_Fun()\n";}
};
int main(){
 Hosila hosila;
 Hosila * pHosila = &hosila;
 Asosiy * pAsosiy = &hosila;
  // Hosila sinfidan Virtual_Fun() funksiyasini chaqirish
 pAsosiy->Virtual_Fun();
  //Asosiy sinfidan NoVirtual_Fun() funksiyasini chaqirish
 pAsosiy->NoVirtual_Fun();
 // Hosila sinfidan Virtual_Fun() funksiyasini chaqirish 
 pHosila->Virtual_Fun();
  // Hosila sinfidan NoVirtual_Fun() funksiyasini chaqirish
 pHosila->NoVirtual_Fun();
 return 0;}


