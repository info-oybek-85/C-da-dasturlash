#include <iostream>
using namespace std;
class book_series{
public:
static int page_count;
private:
float price;
};
int book_series::page_count;
int main(){
book_series::page_count = 256;
cout << "page_count ning joriy qiymati " << book_series::page_count <<"ga teng"<<endl;
return 0;
}

