//Matn faylidan o?qish va uni namoyish etish uchun dastur
#include<fstream>
#include<iostream>
using namespace std;

int main(){
    ifstream fin;
    fin.open("yozish.txt");
    char ch;
    while(!fin.eof())
    {
         fin.get(ch);
         cout << ch;
    }
    fin.close();
    return 0;
}

