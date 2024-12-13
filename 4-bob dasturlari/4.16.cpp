#include <iostream>
using namespace std;
class Sum {
	int a, b;
	public: 	int plus() { cout<<a + b;}
			void set_nums(int x, int y) { a = x; b = y; }
};
int main() {
	Sum a , b;
	a.set_nums(3,2);
	b = a; // a obyekt b obyektga o?zlashtirildi
	b.plus();
     return 0;
}

