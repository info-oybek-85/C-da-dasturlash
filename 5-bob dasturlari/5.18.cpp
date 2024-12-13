#include <iostream>
using namespace std;
int main(){
int x = 1;
try {
cout << "Try Bloki: "<<endl;
if(x < 10){
throw "ABC";
}}
catch (int x ) {
cout << "Catch Bloki: n"<<endl;
}
catch(...){//Odatiy (default) catch
cout << "Odatiy Istisno"<<endl;
}
return 0;
}

