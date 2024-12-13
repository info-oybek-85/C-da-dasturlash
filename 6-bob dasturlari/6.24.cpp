	#include <iostream>
	#include <stdio.h>
	using namespace std;
	// Global new operatorini qayta aniqlash
	void* operator new(size_t size)	{
 	 cout<<"Xotiradan "<<size;
 cout<<"bayt ajratishga soʻrov boʻldi\n ";
	 return malloc(size);
	}
	void  operator delete(void *p)	{
 	 cout<<"Xotirani boʻshatish!\n";
  	 free(p); 
	}
	// Global new operatorini qayta yuklash
void* operator new(size_t size, char * fname, int line){
 	 cout<<fname<<"faylining "<<line<<"-qatorida \n";
 cout<<size<< "bayt ajratishga soʻrov boʻldi!\n ";
	 return malloc(size);
	}
int main(){
	 char fayl_nomi[]="new_quyk.cpp";
	 int qator=5; 
 // Global new operatorini chaqirish
	 long * pInt = new long;
	 // Global delete operatorini chaqirish
	 delete pInt;
	 // Qayta yuklangan new operatorini chaqirish
	 pInt = new(fayl_nomi, qator) long;
	 // Global delete operatorini chaqirish
	 delete pInt;	
	 return 0;	}

