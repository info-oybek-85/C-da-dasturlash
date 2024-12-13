#include <iostream>
using namespace std;
class Proper {
	public:
		static int ob_counter;
		static int get_ob() { return ob_counter; }
};
int Proper::ob_counter;
int main() {
	cout<<Proper::ob_counter++<<endl;
	cout<<Proper::get_ob()<<endl;
    	return 0;}

