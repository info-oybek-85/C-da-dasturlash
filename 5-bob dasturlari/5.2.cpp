#include <iostream>
using namespace std;
int main() { 
 string s1="01234567893456ab2csef", s2="456",
        s3="ghk";
 cout<<"s1="<<s1<<endl;
 cout<<"s2="<<s2<<endl; 
 cout<<"s3="<<s3<<endl; 
 if(s2.compare(s3)>0)cout<<"s2>s3"<<endl;
 if(s2.compare(s3)==0)cout<<"s2=s3"<<endl;
 if(s2.compare(s3)<0)cout<<"s2<s3"<<endl;
 if(s1.compare(4,6,s2)>0)cout<<"s1[4-9]>s2"<<endl;
 if(s1.compare(5,2,s2,1,2)==0)
   cout<<"s1[5-6]=s2[1-2]"<<endl;
 }

