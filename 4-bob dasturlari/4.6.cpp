#include <iostream>
using namespace std;
class book_series{
public:
  book_series(float);
  void show_book(void);
  void set_pages(int) ;
private:
  static int page_count;
  float price;
};
int book_series::page_count;
void book_series::set_pages(int pages){
  page_count = pages;
}
book_series::book_series(float price){
  book_series::price = price;
}
void book_series:: show_book (void){
  cout << "Narx: " << price << endl;
  cout << "Betlar: " << page_count << endl;
}
int main() {
  book_series programming(213.95);
  book_series word(19.95);
  word.set_pages(256);
  programming.show_book ();
  word.show_book() ;
  cout << endl << "page_count ning o?zgarishi " << endl;
  programming.set_pages(512);
  programming.show_book();
  word.show_book();
return 0;
}

