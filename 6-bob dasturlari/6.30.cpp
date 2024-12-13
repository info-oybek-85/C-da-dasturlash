#include <iostream>
using namespace std;
// Funksiya shabloni e’lon qilinishi...
template <class X> void swapargs(X &a, X &b){
X temp;
temp = a;
a = b;
b = temp;}
int main()
{int i=10, j=20;
double x=10.1, y=23.3;
char a='x', b='z';
cout << "Original i, j: " << i << ' ' << j << '\n';
cout << "Original x, y: " << x << ' ' << y << '\n';
cout << "Original a, b: " << a << ' ' << b << '\n';
swapargs(i, j); // swap funksiyasi butun tip uchun (int)
swapargs(x, y); // swap funksiyasi haqiqiy tip uchun (float)
swapargs(a, b); // swap funksiyasi simvol tip uchun (char)
cout << "Swapped i, j: " << i << ' ' << j << '\n';
cout << "Swapped x, y: " << x << ' ' << y << '\n';
cout << "Swapped a, b: " << a << ' ' << b << '\n';
return 0;}

