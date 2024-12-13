	#include <iostream>
	using namespace std;
	// Global new operatorini qayta aniqlash
	void *operator new(size_t sizeb, void * krst)	{
 	 cout<<"Obyekt koʻrstatilgan adresga joylandi\n";
	 return krst;
	}
	void  Tizimni_tekshirish()	{
 	 cout<<"Tizim normal ishlaypti!\n";
  	}
	class Nuqta{
    	  int x,y;
	 public:
       Nuqta(int _x,int _y){
	   x=_x; y=_y;
        cout<<"Obyektlar berilgan qiymatlar bilan";
        cout<<"initsializatsiyalandi.\n ";
   cout<<"x= "<<x<<"y= "<<y<<"\n ";
	  }
       Nuqta(){
	   x=0; y=0;
        cout<<"Obyektlarni kelishuv boʻyicha";
        cout<<"initsializatsiyalandi.\n";
   cout<<"x= "<<x<<"y= "<<y<<"\n ";
	  }
	  ~Nuqta() {cout<<"Nuqta::~Nuqta() ishladi\n";}
	}
	// Global obyekt
	Nuqta nuqta;
	int main(){
	 // Qandaydir ishni bajarish
	 Tizimni_tekshirish();
	 // Endi obyektni initsializatsiyalash mumkin!
	 Nuqta * krst=new(nuqta) Nuqta(10,20);
	 krst->Nuqta::~Nuqta();
	 return 0;	}

