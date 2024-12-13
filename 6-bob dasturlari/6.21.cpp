#include <iostream>
using namespace std;
class BS_Massiv{
  int MaxIndex;
  int * kButun;
 public:
  BS_Massiv(int Elem_Soni);
 ~BS_Massiv(){delete kButun;}    	  
  int & operator[](int index);
};
BS_Massiv::BS_Massiv(int Elem_Soni){
  kButun=new int(Elem_Soni);
 MaxIndex=Elem_Soni;
}
int & BS_Massiv::operator[](int index){
 static int iXato=-1;
 if(index>=0 && index<MaxIndex) return kButun[index];
 else  {
  cout<<"Xato: Massiv chegarasidan chiqish roʻy berdi!";
  cout<<endl; 
  return iXato; }
}
main(){
 BS_Massiv vector(5);
 for(int i=0; i<5; i++)
  vector[i]=i;
for(int i=0; i<=5; i++)
 cout<<"vector["<<i<<"]="<<vector[i]<<endl;
return 0;} 

