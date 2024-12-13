#include <iostream>
using namespace std;
int main()
{
const int n=30;
 int temp[n];
 int i,s,temp_urtacha;
 cout << "Kunlik haroratni kiriting:\n";
 for (i=0;i<n;i++){
cout << "\n temp["<<i<<"]="; 
  cin >> temp[i]; }
 for (i=0,s=0; i<n;i++)s+=temp[i];
 temp_urtacha=s/n;
 cout << "Kunlik harorat :\n";
 for(i=0;i<n;i++)cout<< "\t temp["<<i<<"]="<<temp[i]; 
 cout<<"Oydagi oʻrtacha harorat= "<<temp_urtacha;
 return 0; }

