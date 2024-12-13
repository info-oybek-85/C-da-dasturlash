#include <iostream>
using namespace std;
class Proper {
	public:
		static int ob_counter;};
int Proper::ob_counter;
int main() {
	Proper a;
	cout<<Proper::ob_counter++<<endl;
	cout<<a.ob_counter<<endl;
    	return 0;}

