#include <iostream>
#include <string.h>
using namespace std;
class Asosiy{
 public:
  Asosiy(char * nom){strcpy(Nom,nom);}
  virtual void Fun(char c)  {
   cout<<"Virtual "<<Nom<<"::Fun "<<c<<" parametrini qabul qildi.\n";
   }
protected:
  char Nom[20];
};
class Hosila1: public Asosiy{
 public:
  Hosila1(char * nom):Asosiy(nom){}
  void Fun(const char * s){cout<<Nom<<"::Fun "<<s<<" parametrini qabul qildi.\n";}
  void Fun(int n){cout<<Nom<<"::Fun "<<n<<" parametrini qabul qildi.\n";}
  virtual void Fun(char c)
  {
   cout<<"Virtual "<<Nom<<"::Fun "<<c<<" parametrini qabul qildi.\n";
  }
};
class Hosila11: public Hosila1{
 public:
  Hosila11(char * nom):Hosila1(nom){}
  void Fun(const char * s){cout<<Nom<<"::Fun "<<s<<" parametrini qabul qildi.\n";}
  void Fun(double d){cout<<Nom<<"::Fun "<<d<<" parametrini qabul qildi.\n";}
  virtual void Fun(char c)  {
   cout<<"Virtual "<<Nom<<"::Fun "<<c<<" parametrini qabul qildi.\n";
  }
};
int main(){
 Asosiy asosiy("Asosiy");
 Hosila1 hosila1("Hosila1");
 Hosila11 hosila11("Hosila11");
 asosiy.Fun('X');
 hosila1.Fun('Y');
 hosila1.Fun(10);
 hosila1.Fun("Hos1");
 hosila11.Fun('Z');
 hosila11.Fun(10.1234);
 hosila11.Fun("Hos11");
 return 0;}

