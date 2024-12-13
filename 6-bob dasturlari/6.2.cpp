#include <iostream> 
#include <string.h> //strcpy() uchun
#include <stdio.h> //printf() uchun
#include <conio.h> //_getch() uchun
using namespace std;
class book_series{
book_series();
public:
static void show_book(void); /*Funksiyani statis elеmеntini chop etish uchun, ushbu atribut qoʻshiladi*/
static int page_count;
private:
char title [64];
char author[64];
float price; };
int book_series::page_count; /*Oʻzgaruvchini global oʻzgaruvchi sifatida e’lon qilish*/ 
void book_series::show_book (void){
printf("Sahifalar soni=%d\n",page_count); }
int main(void){
book_series::page_count = 256; 
book_series::show_book();_getch(); }

