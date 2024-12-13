#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main(){ 
 string s1="01234567893456ab2csef", s2="456",s3="ghk2";
 int i,j;
 i=s1.find(s2); 
 j=s1.rfind(s2); 
 cout<<i; // i=4
 cout<<j; // j=11
 cout<<s1.find('3') <<endl; // natija 3
 cout<<s1.rfind('3') <<endl;// natija 10
 cout<<s1.find_first_of(s3)<<endl; // natija 2
 cout<<s1.find_last_of(s3)<<endl; 	// natija 16
 cout<<s1.find_first_not_of(s2)<<endl; // natija 14
 cout<<s1.find_last_not_of(s2)<<endl; // natija 20
}

