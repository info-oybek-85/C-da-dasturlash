#include <iostream>
using namespace std;
int main(){
int x = 1;
try{
cout << "Try Bloki: "<<endl;
if(x < 10){
throw x;
}}
catch (int x ) {
cout << "Catch Bloki: "<<endl;
}
cout<<"kodning oxiri: (catch blokdan keyin) "<<endl;
return 0;
}

