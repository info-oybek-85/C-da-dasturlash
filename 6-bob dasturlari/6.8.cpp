#include <iostream>
#include <stdlib.h>
#include <ctype.h>
using namespace std;
class Ruyxat{
 public:
  Ruyxat(){Boshi=Oxiri=Keyingi=0;}
  virtual void Joylash(int n)=0;
  virtual bool Olish(int& n)=0;
  void Qiymat_n(int n){Son=n;}
  int n_Qiymat(){return Son;}
  Ruyxat * Boshi;
  Ruyxat * Oxiri;
  Ruyxat * Keyingi;
 private:
  int Son;
};
class Navbat: public Ruyxat{
 public:
  void Joylash(int n);
  bool Olish(int& n);
};
void Navbat::Joylash(int n){
 Ruyxat * Yangi;
 Yangi=new Navbat;  	 // Navbatning yangi elementini yaratish
 Yangi->Qiymat_n(n);
 Yangi->Keyingi=NULL;
 if(Oxiri) Oxiri->Keyingi=Yangi;  // Elementni navbatning oxiriga joylash
 Oxiri=Yangi;
 if(!Boshi) Boshi=Yangi;
}
bool Navbat::Olish(int& n){
 Ruyxat * Element;
 if(!Boshi){n=0; return false;}
 n=Boshi->n_Qiymat();
 Element=Boshi;
 Boshi=Boshi->Keyingi;
 delete Element;
 return true;
}
class Stek: public Ruyxat{
 public:
  void Joylash(int n);
  bool Olish(int& n);
};
void Stek::Joylash(int n){
 Ruyxat * Yangi;
 Yangi=new Stek;      	// Stekning yangi elementini yaratish
 Yangi->Qiymat_n(n);
 Yangi->Keyingi=NULL;
 if(Boshi) Yangi->Keyingi=Boshi;	// Elementni stek boshiga joylash
 Boshi=Yangi;
 if(!Oxiri) Oxiri=Yangi;
}
bool Stek::Olish(int& n){
 Ruyxat * Element;
 if(!Boshi){n=0; return false;}
 n=Boshi->n_Qiymat();
 Element=Boshi;
 Boshi=Boshi->Keyingi;
 delete Element;
 return true;
}
int main(){
 Ruyxat * ruyxat;
 Navbat navbat;
 Stek stek;
 int son;
 char stek_navbat;
 cout<<"Sonlarni navbat va stekka joylash:\n";
 do {
  cout<<"Sonni kiriting(0-tamom): ";
  cin>>son;
  if(son)  {
   do{
    cout<<"Joylshtirish? Stekka(S) yoki Navbatga(N):";
    cin>>stek_navbat;
   }
    while (stek_navbat!='S' && stek_navbat!='s' 
               && stek_navbat!='N' && stek_navbat!='n');
 switch(stek_navbat) {
  case 'S': case 's': ruyxat=&stek; break;
  case 'N': case 'n': ruyxat=&navbat;
 }
 ruyxat->Joylash(son);
 }
}
while (son);
for(;;){
  do  {
   cout<<"O?qish?  Stekdan(S) yoki Navbatdan(N):\n";
   cout<<"Dasturdan chiqish (Q):\n";
   cin>>stek_navbat;
  } 
    while(stek_navbat!='S' && stek_navbat!='s' &&
             stek_navbat!='N' && stek_navbat!='n' &&
             stek_navbat!='Q' && stek_navbat!='q');
 switch(stek_navbat) {
  case 'S':
  case 's': ruyxat=&stek; break;
  case 'N': case 'n': ruyxat=&navbat; break;
  case 'Q':case 'q': return 0;
 }
 if(ruyxat->Olish(son)) cout<<son<<endl;
 else cout<<"Ro?yxat bo?sh!"<<endl; }}

