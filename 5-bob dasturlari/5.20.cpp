#include <iostream>  
#include <exception>  
using namespace std;  
class UzIstisno : public exception{  
    public:  
        const char * what() const throw()  {  
             return " Nolga bo?lishga urinish!\n";  
        }  
};  
int main(){  
    try  
    {  
        int x, y;  
        cout << "Ikkita raqam kiriting : \n";  
        cin >> x >> y;  
        if (y == 0)  
        {  
            UzIstisno z;  
            throw z;  
        }  
        else  
        {  
            cout << "x / y = " << x/y << endl;  
        }  
    }  
    catch(exception& e)  
    {  
        cout << e.what();  
    }  
}

