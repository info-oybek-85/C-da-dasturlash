#include <iostream>
using namespace std;
int len(char s[])   //massivni parametr sifatida ishlatish
{
 int m=0; 
 while(s[m++]);
 return m-1; }
int main (){
 char z[]="Ushbu satr uzunligi =";
 cout<<z<<len(z); }

