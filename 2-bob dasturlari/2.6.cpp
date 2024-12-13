   #include <iostream>
   using namespace std;
   int main()   {
    char Javob =' ';
    cout<<"Jarayon davom etsinmi? ('y','Y','h','H'): ";
    cin>> Javob;
    switch (Javob)      {
        case 'Y' :
        case 'y'  :
        case 'h'  :
        case 'H' :
          cout<<"Jarayon davom etadi!\n";
          break;
        default :
          cout <<"Jarayon tygadi!\n";
          return 0;    }
     ///…. // Jarayon 
     return 0;}

