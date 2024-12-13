// to?liq ikkilik faylni o?qish
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  streampos hajm;
  char * xotirablock;

  ifstream fayl ("misol.bin", ios::in|ios::binary|ios::ate);
  if (fayl.is_open())
  {
    hajm = fayl.tellg();
    xotirablock = new char [hajm];
    fayl.seekg (0, ios::beg);
    fayl.read (xotirablock, hajm);
    fayl.close(); 

    cout << " butun fayl tarkibi xotirada";

    delete[]xotirablock;
  }
  else cout << " Faylni ochib bo?lmadi!";
  return 0;
}

