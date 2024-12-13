#include <fstream>
#include <iostream>
using namespace std;

int main () {
   char data[100];

   // faylni yozish rejimida ochish.
   ofstream outfile;
   outfile.open("sinov.dat");

   cout << "Faylga yozish" << endl;
   cout << "Ismingizni kiriting: ";
   cin.getline(data, 100);

   // kiritilgan ma’lumotlarni faylga yozish.
   outfile << data << endl;

   cout << "Yoshingizni kiriting: ";
   cin >> data;
   cin.ignore();

   // faylga yana kiritilgan ma’lumotlarni yozing.
   outfile << data << endl;

   // ochilgan faylni yopish.
   outfile.close();

   // faylni oʻqish rejimida ochish.
   ifstream infile;
   infile.open("sinov.dat");

   cout << "Fayldan oʻqish" << endl;
   infile >> data;

   // ekranda ma’lumotlarni chop qilish.
   cout << data << endl;

   // fayldan ma’lumotlarni qayta oʻqish va uni namoyish etish.
   infile >> data;
   cout << data << endl;

   // ochilgan faylni yopish.
   infile.close();

   return 0;
}

