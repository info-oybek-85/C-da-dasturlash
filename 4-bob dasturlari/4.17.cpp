#include <iostream>
using namespace std;
class XY { 
	public: int a, b;
		void sum();
};
// obyekt massivini yaratish
XY a[10], b[3] = {1, 2, 3};
//obyekt a’zolariga murojaat qilish
a[0].a = 5; a[0].b = 8;
a[0].sum();
a.b = 10;	< -- errorrrrrrrrr, chunki a massiv

//Quyidagi misolda obyektla rmassivi yaratiladi va ushbu obyektlar orqali set_num() funksiyasiga qiymat joʻnatiladi. Bunda har obyektda alohida alohida qiymatlar saqlanadi.
class c1 {
	int a;
	public:	int get_num() { return a;}
			void set_num(int x) { a = x; }
};
int main() {
	c1 a[3]; 		// a obyektdan 3 ta yaratildi, yani massiv hosil boʻldi
	for(int i=0; i<3; i++)
		a[i].set_num(i); 	// obyekt a’zolariga murojaat qilish
    return 0;
}

