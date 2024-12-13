//Fayl tarkibini boshqa faylga nusxalash uchun dastur.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin;
    fin.open("yozish.txt");
    ofstream fout;
    fout.open("nusxafayl.txt");
    char ch;
    while(!fin.eof())    {
        fin.get(ch);
        fout << ch;
    }
    fin.close();
    fout.close();
    cout<<"Nusxa olish jarayoni tugadi!"<<endl;
    return 0;
}

