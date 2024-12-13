#include <iostream>
#include <malloc.h>
using namespace std;
int main(int argc, char* argv[]){
 const int FISh_uzunligi=50;
 string * Talaba;
 char * Satr=(char*)malloc(FISh_uzunligi);
 unsigned int talabalar_soni;
 char son[3];
 do {
  cout<<"Talabalar sonini kiriting: ";
  cin>>son; }
  while((talabalar_soni=atoi(son))<=0);
 Talaba =new string[talabalar_soni];
 cin.ignore();
 for(int i=0; i<talabalar_soni; i++) {
  cout<<i+1<<"-talabaning Familya ismi sharifi: ";
  cin.getline(Satr,50);
  Talaba[i].assign(Satr);  }
 bool almashdi=true;
 for(int i=0; i<talabalar_soni-1 && almashdi; i++) {
almashdi=false;
  for(int j=i; j<talabalar_soni-1; j++)
   if(Talaba[j].compare(Talaba[j+1])>0)   {
    almashdi=true;
    strcpy(Satr,Talaba[j].data());
    Talaba[j].assign(Talaba[j+1]);
    Talaba[j+1].assign(Satr);    }  }
 cout<<"Alfavit bo?yicha tartiblangan ro?yxat:\n";
 for(int i=0; i<talabalar_soni; i++)
  cout<<Talaba[i]<<endl;
 delete [] Talaba; free(Satr); return 0; }

