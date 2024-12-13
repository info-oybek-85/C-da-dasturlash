#include <iostream>
using namespace std;
class Sum {
	int a, b;
	public: 	int plus() { cout<<a + b;}
			void set_nums(int x, int y) { a = x; b = y; }
};
void f(Sum x) { // a obyekti x obyektiga nusxa olindi
	x.set_nums(4,5); 
	x.plus(); 
}
int main() {
	Sum a;
	f(a); // a obyekti f() funksiyasiga yuborildi
	a.set_nums(3,2);
	a.plus();
     return 0;
}

