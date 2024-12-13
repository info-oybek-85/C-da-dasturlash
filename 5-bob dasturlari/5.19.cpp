#include <iostream>
using namespace std;
int test(int a) {
try{
if(a < 0)
throw a;
else
throw "a";
}catch(int a){
cout<<"Butun son tutildi: " << a<<endl;
}catch (char a){
cout<<"Belgi tutildi: " << a<<endl;
}
return 0;
}
int main() {
cout<<"bir nechta catchlar:"<<endl;
test(10);
test(-1);
return 0;
}

