
// Matnli faylga yozish
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream meningfaylim ("misol.txt");
  if (meningfaylim.is_open())
  {
    meningfaylim<< "Bu birinchi qatorga yozildi.\n";
    meningfaylim<< "Bu keyingi qatorga yozildi. \n";
    meningfaylim.close();
  }
  else cout << "Faylni ochib bo?lmadi!";
  return 0;
}

