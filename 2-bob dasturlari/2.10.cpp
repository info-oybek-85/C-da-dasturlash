#include <iostream>
#include <math.h>
using namespace std;
int main(){
        const int m=20;
        int n[m];
        int i,j,f;
       for(i=0; i<=m; i++)
       n[i]=1;
       for(i=2; i<=m/2; i++)	{
		if (n[i]==1){
			for(j=i+1; j<=m; j++)
			if (n[j]==1)
			if (j%i==0)
				n[j]=0;		}	}
	for(i=2; i<=m; i++)	{
		if (n[i]==1)
		cout<<i<<"=Tub son"<<endl;
		else
			cout<<i<<"=Murakkab son"<<endl;
	}return 0; }

