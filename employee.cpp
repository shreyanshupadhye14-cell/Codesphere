#include<iostream>
using namespace std;

class Employee
{
private:
    int emp_id;
    string branch;
    string designation;
    float basic_salary;

public:
    void inputData()
    {
        cout << "Enter Employee ID: ";
        cin >> emp_id;

        cout << "Enter Branch: ";
        cin >> branch;

        cout << "Enter Designation: ";
        cin >> designation;

        cout << "Enter Basic Salary: ";
        cin >> basic_salary;
    }

    void calculateSalary()
    {
        float hra, da, total_salary;

        hra = basic_salary * 0.20;
        da = basic_salary * 0.10;
        total_salary = basic_salary + hra + da;

        cout << "\nEmployee Details\n";
        cout << "Employee ID: " << emp_id << endl;
        cout << "Branch: " << branch << endl;
        cout << "Designation: " << designation << endl;
        cout << "Basic Salary: " << basic_salary << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Total Salary: " << total_salary << endl;
    }
};

int main()
{
    Employee e;

    e.inputData();
    e.calculateSalary();

    return 0;
}
    