#include <iostream>
using namespace std;
int main() {
   enum Ranglar {Qizil, Tuq_sariq, Sariq, Yashil, Kuk, Zangori, Binafsha};
   Ranglar Rang;
   switch (Rang) {
       case Qizil:
       case  Tuq_sariq :
       case Sariq :
         cout << "Issiq gamma tanlandi.\n";
         break;
       case Yashil :
       case Kuk :
       case Zangori:
       case Binafsha :
         cout << "Sovuq gamma tanlandi.\n";
         break;
    default :
      cout <<"Kamalak bunday rangga ega emas.\n";
  }   return 0;}

