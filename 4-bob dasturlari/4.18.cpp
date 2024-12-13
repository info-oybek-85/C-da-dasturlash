#include <iostream>
using namespace std;
class c1 {
	int a;
	public:	int get_num() { return a;}
			c1(int x){ a = x; }
};
int main() {
	c1 a[3] = {1,2,3};
	c1 *p;
	p = a;
	for(int i=0; i<3; i++)
		cout<<(p+i)->get_num();
 	return 0;
}

