#include <iostream>
#include <string>
//#include <GenericStack.h>
using namespace std;
int main()
{// int qiymatlar uchun yangi stek yaratish
Stack<int> intStack;
for (int i = 0; i < 10; i++)
intStack.push(i);
while (!intStack.empty())
cout << intStack.pop() << " ";
cout << endl;
// Satrlar uchun yangi stek yaratish
Stack<string> stringStack;
stringStack.push("Chicago");
stringStack.push("Denver");
stringStack.push("London");
while(!stringStack.empty())
cout << stringStack.pop() << " ";
cout << endl;
return 0;}

