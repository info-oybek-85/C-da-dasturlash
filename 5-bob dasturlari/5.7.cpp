#include <iostream> 
#include <stdio.h> 
# include <string.h> 
using namespace std;5
// Yangi fayl yaratish va unga sonlarni yozish funksiyasi;
int Fayl_tuzish()
{  
 FILE *f;
 double x;
 // «f» fayl yangidan hosil qilish uchun ochilmoqda; 
 if((f=fopen("Haqiqiy.son", "wb+"))==NULL) return 0;
 char *satr=new char[10];
 int n=1;
 do {
  cout<<"Haqiqiy sonni kiriting: ";
  gets(satr);
  if(strlen(satr))  
{ x=atof(satr);
   fwrite (&x,sizeof(double),n,f);  } } 
while(strlen(satr)); 
// kiritilgan satr boʻsh boʻlmasa, takrorlanish davom etadi;
  fclose(f); 
  return  1; }
// Oʻrta arifmetikdan kichik sonlar miqdorini hisoblash funksiyasi;
 int Kichiklar_soni()
 {
  FILE*f;                                                                                                                                                                               double x;                                                     
 f=fopen("Haqiqiy.son", "rb+");
 double s=0; // s - f fayl elementlari yigʻindisi;
  while(!feof(f))
  {
   if (fread(&x,sizeof(double),1,f)) s+=x;  
  }
  long sonlar_miqdori=ftell(f)/sizeof (double);
  s/=sonlar_miqdori;    // s- oʻrta arifmetik;
  cout<<"Fayldagi sonlar oʻrta arifmetigi="<<s<<endl;
  fseek(f,SEEK_SET,0); // fayl boshiga kelinsin;
  int k=0;
  while (fread(&x,sizeof(x),1,f))
  {
   k+=(x<s); //oʻrta arifmetikdan kichik elementlar soni;
  }
   fclose(f);
   return k;
  } 
  int main()
  {
   if(Fayl_tuzish())
   {
    cout<<"Haqiqiy.son faylidagi \n";
    int Kichik=Kichiklar_soni();
    cout<<"Oʻrta arifmetikdan kichik  sonlar miqdori=";       cout<<Kichik;
   }
   else   // f faylini yaratish muvafaqiyatsiz boʻldi.
   cout<<"Haqiqiy.son faylini ochish imkoni boʻlmadi!!!";                                                      return 0;
} 

