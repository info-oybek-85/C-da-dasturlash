///3-usul. Ko?rsatkichlarga ko?rsatkich ko?rinishida aniqlangan dinamik massivlarni ishlatish bilan:
#include <iostream>
using namespace std;
float sum(int n,float **x) {
 float s=0.0;
 for(int i=0;i<n;i++)for(int j=0;j<n;j++)s+=x[i][j]; 	 return s;
}
    int main(){
     float **ptr;
     int n;
     cin>>n;
     ptr=new float *[n]; 
for(int i=0;i<n;i++){
      ptr[i]=new float [n];
      for(int j=0;j<n;j++)
       ptr[i][j]=(float)((i+1)*10+j);
     } 
     cout<<sum(n,ptr);
for(int i=0; i<n;i++) delete ptr[i];
     delete[]ptr; }    
