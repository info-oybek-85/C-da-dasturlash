// Matnli fayldan oʻqish
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string uq_matn;
  ifstream meningfaylim ("yozish.txt");
  if (meningfaylim.is_open())
  {
    cout<<"Matnli fayldan oʻqilgan ma’lumotlar:"<<endl;
    while ( getline (meningfaylim, uq_matn) )
    {
      cout << uq_matn << "\n";
    }
    meningfaylim.close();
  }

  else cout << " Faylni ochib boʻlmadi!"; 

  return 0;
}

