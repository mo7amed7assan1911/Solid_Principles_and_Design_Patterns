#pragma once
#include "../Employee/employee.h"
#include <iostream>
#include <string>
using namespace std;

class Teacher: public Employee{
    private:
        string subject;
    public:
        Teacher(string n, string c, int a, string s);
        void set_subject(string s);
        string get_subject();

        void introduce();

};