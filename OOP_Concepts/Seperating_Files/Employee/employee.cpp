#include "employee.h"
#include <iostream>

using namespace std;


Employee::Employee(string n, string c, int a)
{
    name = n;
    company = c;
    age = a;
}

void Employee::set_name(string n)
{
    name = n;
}

string Employee::get_name()
{
    return name;
}

void Employee::set_company(string c)
{
    company = c;
}

string Employee::get_company()
{
    return company;
}

void Employee::set_age(int a)
{
    age = a;
}

int Employee::get_age()
{
    return age;
}


void Employee::introduce()
{
    cout << "My name is " << name << endl;
    cout << "I work for " << company << endl;
    cout << "I am " << age << " years old" << endl;
}
