#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream meningfaylim;
  meningfaylim.open ("misol.txt");
  meningfaylim << "Bu matn faylga yozish uchun.\n";
  meningfaylim.close();
  return 0; }

