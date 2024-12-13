#include <iostream>
using namespace std;
class book_series{
public:
  static int show_count() { return page_count;};
private:
  float price;
  static int page_count;
};
int book_series::page_count=256;
int main(){
cout << "page_count ning joriy qiymati " << book_series::show_count() <<"ga teng"<< endl;
return 0;
}

