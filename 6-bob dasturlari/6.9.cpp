#include <iostream>
using namespace std;
class Asosiy{
  int * px;
 public:
  Asosiy(int _x) {px=new int; *px=_x; }
 /*virtual*/~Asosiy() { cout<<"Asosiy sinf destruktori ishladi!\n"; delete px; }
};
class Hosila: public Asosiy{
  int * pxx;
 public:
  Hosila (int n):Asosiy(n) { pxx=new int; *pxx=n*n;  }
 ~Hosila() { cout<<"Hosila sinf destruktori ishladi!\n";  delete pxx; }
};
int main(){
  Asosiy * pAsosiy=new Hosila(5);
  delete pAsosiy;
  return 0;}

