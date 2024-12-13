#include <iostream>
using namespace std;
class employee {
public:
employee(long, float);
employee(long);
void show_employee(void);
private:
long employee_id;
float salary;
};
employee::employee(long employee_id, float salary) {
employee::employee_id = employee_id;
if (salary < 50000.0) employee::salary = salary;
else 
employee::salary = 0.0;
}
employee::employee(long employee_id){
employee::employee_id = employee_id;
do {
cout << "Maosh kiriting $50000 dan kichik: ";
cin >> employee::salary;
}
while (salary >= 50000.0);
}
void employee::show_employee(void){
cout << "Raqam: " << employee_id << endl;
cout << "Maosh: " << salary << endl;
}
int main() {
cout<<"ishchi"<<endl;
employee worker(101, 10101.0);
worker.show_employee();
cout<<"manager"<<endl;
employee manager(102);
manager.show_employee();
return 0;}

