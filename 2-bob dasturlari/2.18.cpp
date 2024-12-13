#include <iostream> 
 using namespace std; 
int main(){
        int n = 5, s=0; 
        int i, j; 
        for(i =1; i<5; i++) 
             {
                   cout<<endl;
                  cout<<"i = "<<i<<endl;
                  for(j =1; j<5; j++)
                     {
                           cout<<"j = "<<j<<" ";
                           if(i*j > n) goto A; 
                           s ++ ;
                          cout<<"s = "<<s<<" ";
                     }
             }   
   A:
  cout<<endl;
   cout<< "Oxirgi natija ="<<s; 
   return 0;}

