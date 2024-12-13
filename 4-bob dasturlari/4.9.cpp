#include <iostream>
using namespace std;
class myclass{
	int a, b;
	public:
		friend int sum(myclass x);
		void set_ab(int i, int j) { a = i; b = j; }
};
int sum(myclass x) {
	return x.a + x.b;	//sum() hech qaysi classga tegishli emas. 
}
int main() {
	myclass n;
	n.set_ab(3, 4);
	cout << sum(n);
	return 0;}

