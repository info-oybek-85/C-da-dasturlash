#include <iostream>
#include <string>
using namespace std;
template <typename T>
T maxValue(const T& value1, const T& value2)
{
if (value1 > value2)
return value1;
else
return value2;
}
int main(){
cout << "1 va 3 ning kattasi: " << maxValue(1, 3) << endl;
cout << "1.5 va 0.3 ning kattasi: "
<< maxValue(1.5, 0.3) << endl;
cout << "ʻA’ va ʻNʻ ning kattasi: "
<< maxValue('A', 'N') << endl;
cout << " \"NBC\" va \"ABC\" ning kattasi: "
<< maxValue(string("NBC"), string("ABC")) << endl;
return 0;}

