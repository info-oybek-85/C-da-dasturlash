#include <iostream>
using namespace std;
int main(){
int i=10,A[100];
      int j=10;
      int x=A[(10+10)/2];
      do {
          while(A[i]<x) ++i;
          while(A[j]>x) --j;
          if(i<=j){
              int temp=A[i];
              A[i]=A[j];
              A[j]=temp;
              i++; j--;
          }
      } while(i<=j);
}
