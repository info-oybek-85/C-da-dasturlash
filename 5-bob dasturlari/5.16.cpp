#include <iostream>
#include <fstream>
using namespace std;
class Hello{
// о ʻzining yo ʻqotilgani haqida axborot beruvchi sinf
public:
Hello(){cout <<"Hello!" <<endl;}
~Hello(){cout<< "Bye!" <<endl;}
};
void fl(){
ifstream ifs("INVALID FILE NAME"); //Faylni ochamiz
if (!ifs) {
cout<< "xatolikni qayd etamiz"<< endl;
throw "Fayli ochishdagi xatolik ";}
}
void f2(){
Hello H; // Lokal obyekt yaratilmoqda
fl(); //xatolikni yuzaga keltiruvchi funksiya chaqirilmoqda
}
int main (){
try{
cout<< " try-blоkkа kirish "<< endl;
f2();
cout <<"try-blokdan chiqish " << endl;
}
catch(int i){
cout<< "int istisnoni qayta ishlagich chaqirildi-" <<i<< endl;
return -1;
}
catch (const char * p){
cout <<"const char* istisnoni qayta ishlagich chaqirildi-" << p << endl;
return -1;
}
catch(...){
cout << "Barcha istisnolarni qayta ishlagich chaqirildi —"<< endl;
return -1;}
return 0; // Hammasi yaxshilik bilan tugadi
}

