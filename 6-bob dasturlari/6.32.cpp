#include <iostream>

using namespace std;
// f() funksiya shablonining birinchi tipi.
template <class X> void f(X a)
{
cout << "Inside f(X a)\n";
}
// f() funksiya shablonining ikkinchi tipi.
template <class X, class Y> void f(X a, Y b)
{cout << "Inside f(X a, Y b)\n";}
int main(){
Original i, j: 10 20
Original x, y: 10.1 23.3
Original a, b: x z
int tipi uchun maxsus swapargs funksiyasi.
swapargs funksiya shabloni chaqirildi.
swapargs funksiya shabloni chaqirildi.
Swapped i, j: 20 10
Swapped x, y: 23.3 10.1
Swapped a, b: z x
{f(10); // calls f(X)
f(10, 20); // calls f(X, Y)
return 0;}