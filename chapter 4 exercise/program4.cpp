#include <iostream>
using namespace std;
struct employee
{
    int employee_id;
    float salary;
};
int main()
{
    employee employee1;
    employee employee2;
    employee employee3;

    cout << "enter employee id for employee 1";
    cin >> employee1.employee_id;
    cout << "enter salary for employee 1:";
    cin >> employee1.salary;
    cout << "enter employee id for employee 2:";
    cin >> employee2.employee_id;
    cout << "enter employee salary for employee 2:";
    cin >> employee2.salary;
    cout << "enter employee id for employee 3:";
    cin >> employee3.employee_id;
    cout << "enter employeen salary for employee 3:";
    cin >> employee3.salary;

    cout << "employee1 id:" << employee1.employee_id << "salary:" << employee1.salary << endl;
    cout << "employee2 id:" << employee2.employee_id << "salary:" << employee2.salary << endl;
    cout << "employee3 id:" << employee3.employee_id << "salary:" << employee3.salary << endl;
}