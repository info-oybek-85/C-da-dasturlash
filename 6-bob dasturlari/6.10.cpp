#include <iostream>
using namespace std;
class Jonivor{ 
 public:
  Jonivor(char * nomi)  {
    Nomi=new char[15];
    strcpy(Nomi,nomi);
   };
   virtual void Ovozi()=0;
   virtual void Ozuqasi()=0;
 protected:
   char * Nomi;
};
class Kuchuk : public Jonivor{
 public:
  Kuchuk(char * nomi):Jonivor(nomi){};
  void Ovozi(){cout<<Nomi<<" ovozi: Vov"<<endl;}
  void Ozuqasi(){cout<<Nomi<<" ozuqasi: Goʻsht"<<endl;}
};
class Mushuk: public Jonivor{
 public:
  Mushuk(char * nomi):Jonivor(nomi){};
  void Ovozi(){cout<<Nomi<<" ovozi: Miyov"<<endl;}
  void Ozuqasi(){cout<< Nomi<<" ozuqasi: Sut"<<endl;}
};
int main(){
 Mushuk mushuk("Baroq");
 Kuchuk kuchuk("Tuzik");
 mushuk.Ovozi();
 mushuk.Ozuqasi();
 kuchuk.Ovozi();
 kuchuk.Ozuqasi();}

