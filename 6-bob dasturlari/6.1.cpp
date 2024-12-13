#include <iostream> //kiritish chiqarish oqimi uchun
#include <stdio.h> //printf() uchun
#include <conio.h> //_getch() uchun
using namespace std;
class book_series{
public:
book_series(char *, char *, float);
void show_book(void); void set_pages(int);
private:
static int page_count; /*bu umumiy elеmеnt hisoblanadi*/
char title[64]; char author[64];
float price; };
int book_series::page_count; /*sinfdan tashaoidaumumiy oʻzgaruvchini e’lon qilish*/
void book_series::set_pages(int pages){
page_count = pages; }
book_series::book_series(char *title, char *author, float price){ /*Sinfning konstruktori*/
strcpy(book_series::title, title); /*string sinfiga ulanish uchun zarur boʻlgan, strcpy() funksiyasi*/
strcpy(book_series::author, author);
book_series::price = price; }
void book_series:: show_book (void){
printf("Sarlavha: %s\n",title); printf("Muallif:%s\n",author);
printf("Narx: %.2f\n",price); 
printf("Sahifalar: %d\n",page_count); }
int main(){
book_series programming("Studiing C++", "Author1", 22.95);
/*programming obyektini konstruktor yordamida yaratish*/
book_series word( "Studiing to work with Word for Windows 7", "Author2", 19.95); /*word obyektini konstruktor yordamida yaratish*/
word.set_pages(256); /*Word oʻеktining sahifalari soni bеriladi, bu programmingga ham ta’sir qiladi */
programming.show_book ();
word.show_book() ;
programming.set_pages(512); /*page_countni oʻzgartirish*/
programming.show_book(); /*obyekt ma’lumotlarini ekranga chiqarish*/
word.show_book(); /*obyekt ma’lumotlarini ekranga chiqarish*/
_getch(); }

