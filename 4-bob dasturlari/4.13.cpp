#include <iostream>
using namespace std;
int i;
void f() {
	int i;
	::i = 10;
}
int main() {
	f();
	cout<<i;
	return 0;
}

