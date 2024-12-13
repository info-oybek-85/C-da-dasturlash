// fayl hajmini olish
#include <iostream>
#include <fstream>
using namespace std;
int main () {
  streampos begin,end;
  ifstream meningfaylim ("yozish.txt", ios::binary);
  begin = meningfaylim.tellg();
  meningfaylim.seekg (0, ios::end);
  end = meningfaylim.tellg();
  meningfaylim.close();
  cout << "hajmi: " << (end-begin) << " bayt.\n";
  return 0;
}

