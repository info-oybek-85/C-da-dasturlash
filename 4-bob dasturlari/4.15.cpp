#include <iostream>
using namespace std;
class Sum {
	int a, b;
	public: 	int plus() { cout<<a + b;}
			void set_nums(int x, int y) { a = x; b = y; }
};
Sum f() {
	x.set_nums(4,5); 
	return x; // Funksiya Sum tipdagi obyekt qaytaradi
}
int main() {
	Sum a;
	a = f(); // a obyektga f() dan qaytgan obyekt oʻzlashtirildi
	a.plus();
     return 0;
}

