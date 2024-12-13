#include <iostream>
#include <malloc.h>
using namespace std;
int main(){
 int * pVector;
 if ((pVector=(int*)malloc(10*sizeof(int)))==NULL)  {
  cout<<"Xotira yetarli emas!!!";
  return 1;  }
 // ajratilgan xotira sohasini toʻldirish
 for(int i=0;i<10;i++) *(pVector+i)=i;
 // vektor elementlarini chop etish 
 for(int i=0; i<10; i++) cout<<*(pVector+i)<<endl;
 // ajratilgan xotira boʻlagini qaytarish (oʻchirish)
 free(pVector);
 return 0; }

