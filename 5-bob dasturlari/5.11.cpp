#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;
class Talaba{
    int admno;
    char name[50];
public:
    void setData()    {
        cout << "\nKirish raqamini kiriting ";
        cin >> admno;
        cin.ignore(1000,'\n');
        cout << "Talaba ismini kiriting ";
        cin.getline(name,50);
    }
    void showData()    {
        cout << "\nKirish raqami : " << admno;
        cout << "\nTalaba ismi : " << name;
    }
    int retAdmno()    {
        return admno;
    }};
// ikkilik faylga yozish funksiyasi.
void write_record(){
    ofstream outFile;
    outFile.open("talaba.dat", ios::binary | ios::app);
    Talaba obj;
    obj.setData();
    outFile.write((char*)&obj, sizeof(obj));
    outFile.close();
}
// fayl yozuvlarini koʻrsatish funksiyasi
void display(){
    ifstream inFile;
    inFile.open("talaba.dat", ios::binary);
    Talaba obj;
    while(inFile.read((char*)&obj, sizeof(obj)))    {
        obj.showData();
    }
    inFile.close();
}
//ikkilik fayldan qidirish va namoyish qilish funktsiyasi
void search(int n){
    ifstream inFile;
    inFile.open("talaba.dat", ios::binary);
    Talaba obj;
    while(inFile.read((char*)&obj, sizeof(obj)))    {
        if(obj.retAdmno() == n)        {
            obj.showData();
        }    }
    inFile.close();
}
// yozuvni oʻchirish funktsiyasi
void delete_record(int n){
    Talaba obj;
    ifstream inFile;
    inFile.open("talaba.dat", ios::binary);
    ofstream outFile;
    outFile.open("vaqtincha.dat", ios::out | ios::binary);
    while(inFile.read((char*)&obj, sizeof(obj)))    {
        if(obj.retAdmno() != n)        {
            outFile.write((char*)&obj, sizeof(obj));
        }   }
    inFile.close();
    outFile.close();
    remove("talaba.dat");
    rename("vaqtincha.dat", "talaba.dat");
}
// yozuvni oʻzgartirish uchun funksiya
void modify_record(int n){
    fstream file;
    file.open("talaba.dat",ios::in | ios::out);
    Talaba obj;

    while(file.read((char*)&obj, sizeof(obj)))    {
        if(obj.retAdmno() == n)        {
            cout << "\nTalaba haqidagi yangi ma’lumotlarni kiriting";
            obj.setData();
            int pos = -1 * sizeof(obj);
            file.seekp(pos, ios::cur);
            file.write((char*)&obj, sizeof(obj));
        }    }
    file.close();}
int main(){
    //4 ta yozuvni faylda saqlash
    for(int i = 1; i <= 4; i++)
       write_record();
    //Barcha yozuvlarni koʻrsatish
    cout << "\nYozuvlar roʻyxati";
    display();
    //Yozuvni qidirish
    cout << "\nQidiruv natijasi";
   search(100);
    //Yozuvni oʻchirish
    delete_record(100);
    cout << "\nYozuv oʻchirildi";
    //Yozuvni oʻzgartirish
    cout << "\n101 yozuvini oʻzgartirish ";
    modify_record(101);
    return 0;

}

