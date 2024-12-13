#include <iostream>
using namespace std;
class employee 
{
public:
employee(long, float);
void show_employee(void);
private:
long employee_id;
float salary;
};
employee::employee(long empl_id, float sal) 
{
employee_id = empl_id;
if (salary < 50000.0)
salary = sal;
else 
salary = 0.0;
}
void employee::show_employee(void)
{
cout << "Raqam: " << employee_id << endl;
cout << "Maosh: " << salary << endl;
}
int main() 
{
employee worker(101, 10101.0);
cout<<"ishchi"<<endl;
worker.show_employee();
return 0;}

