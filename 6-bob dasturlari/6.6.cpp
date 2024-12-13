#include <iostream>
using namespace std;
class Asosiy{
 public:
  virtual void Virtual_Fun(){cout<<"Asosiy::Virtual_Fun()\n";}
};
class Hosila: public Asosiy{
 public:
  virtual void Virtual_Fun(){cout<<"Hosila::Virtual_Fun()\n";}
};
int main(){
Asosiy * pAsosiy =new Hosila;
 // Hosila sinfidan Virtual_Fun() funksiyasini chaqirish
 pAsosiy->Virtual_Fun();
 //Asosiy sinfidan Virtual_Fun() funksiyasini chaqirish 
 pAsosiy->Asosiy::Virtual_Fun();
 return 0;}

