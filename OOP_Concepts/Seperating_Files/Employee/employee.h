#pragma once
#include "../Person/person.h"

#include <iostream>
#include <string>
using namespace std;


class Employee : public Person
{
private:
    string name;
    string company;
    int age;
public:
    Employee(string n, string c, int a);
    void set_name(string n);
    string get_name();
    void set_company(string c);
    string get_company();
    void set_age(int a);
    int get_age();

    void introduce();
};
