#include <iostream>
using namespace std;
class Asosiy{
 public:
  Asosiy(){};
  virtual ~Asosiy()=0;    // Sof virtual destruktor
};
Asosiy::~Asosiy(){}   // Destruktorni aniqlash
class Hosila: public Asosiy{
 public:
  Hosila(){};
 ~Hosila(){};
};
int main(){
 Hosila * pHosila = new Hosila;
 delete pHosila;}  

