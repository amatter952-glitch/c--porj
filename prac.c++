#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    int salary;

public:
    Employee(string n, int s)
    {
        name = n;
        salary = s;
    }

    virtual void displayInfo()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Manager : public Employee
{
public:
    Manager(string n, int s) : Employee(n, s)
    {
    }

    void displayInfo() override
    {
        cout << "Manager Name: " << name << endl;
        cout << "Manager Salary: " << salary << endl;
    }
};

void passEmployeeInfo(Employee &emp)
{
    emp.displayInfo();
}

int main()
{
    Manager m("Ahmed", 10000);

    passEmployeeInfo(m);

    return 0;
}
