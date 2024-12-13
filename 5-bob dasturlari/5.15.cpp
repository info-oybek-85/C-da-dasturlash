
#include <iostream>  
using namespace std;  
float bolinish (int x, int y) {  
   if( y == 0 ) {  
throw "Nolga bo?lishga urinildi!";  
   }  
   return (x/y);  
}  
int main () {  
   int i = 25;  
   int j = 0;  
   float k = 0;  
   try {  
      k = bolinish (i, j);  
      cout << k << endl;  
   }catch (const char* e) {  
      cerr << e << endl;  
   }  
   return 0;  
}

