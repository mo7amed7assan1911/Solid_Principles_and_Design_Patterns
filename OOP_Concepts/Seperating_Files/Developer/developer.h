#include "../Employee/employee.h"
#include <iostream>
#include <string>
using namespace std;

class Developer : public Employee
{
    private:
        string programmingLanguage;

    public:
        Developer(string n, string c, int a, string lang);

        void set_programmingLanguage(string lang);
        string get_programmingLanguage();

        void introduce();
};