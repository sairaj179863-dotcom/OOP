//Assignment 8 OOP

#include<iostream>
#include<string>
using namespace std;

class person
{
    public:
    string employee_name;
    int employee_id;
    void display()
    {
        cout<<"employee name is: "<<employee_name<<endl;
        cout<<"employee id is: "<<employee_id<<endl;

    }
};
class employee:public person
{
    public:
    string employee_designation;
    int employee_salary;
    void show()
    {
    
    cout<<"employee designation is: "<<employee_designation<<endl;
    cout<<"employee salary is: "<<employee_salary<<endl;
    }
};
class manager:public employee
{
    public:
    string employee_department;
    void print()
    {
        cout<<"employee department is: "<<employee_department<<endl;
    }
};
int main()
{
    manager m1;
    m1.employee_department="IT";
    m1.employee_designation="manager";
    m1.employee_name="sairaj";
    m1.employee_id=3463;
    m1.employee_salary=123456;
    m1.display();
    m1.show();
    m1.print();
    return 0;

}
