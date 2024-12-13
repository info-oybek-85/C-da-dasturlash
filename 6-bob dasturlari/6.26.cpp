	#include <iostream>
	using namespace std;;
	class Satr	{
 	  union 	  {
	   char ch;
	   char buf[81];
	  };
	 public:
	  Satr(char c='\0'): ch(c) {
        cout<<"Satr sinfining belgili konstruktori\n";
	  }
	  Satr(char * s){
        cout<<"Satr sinfining satrli konstruktori\n";
	   strcpy(buf,s);
	  }
	  ~Satr(){cout<<"Satr::~Satr()"<<endl;} 
	  // new operatorining joylashuvchi sintaksisi
	  void* operator new(size_t, void * buffer)
	  { return buffer; }	  
	};
	char satr_buffer[sizeof(Satr)]; // xotira buferi
int main(){
	 // Satrni buferga joylashtirish
	 Satr * krst=new(satr_buffer) Satr('C++');
	 cout<<"satr_buffer"<<satr_buffer<<endl;
	 // Destruktorni oshkor ravishda chaqirish	
	 krst->Satr::~Satr();
	 // ʻcʻ belgisini satr boshiga joylashtirish
 krst=new(satr_buffer)Satr('c');
	 cout<<"satr_buffer[0]="<<satr_buffer[0]<<endl;
	 cout<<"Buferning yangi qiymati"<<endl;
	 cout<<"satr_buffer="<<satr_buffer<<endl;
	 // Destruktorni oshkor ravishda chaqirish	
	 krst->Satr::~Satr();
	 return 0;	}

