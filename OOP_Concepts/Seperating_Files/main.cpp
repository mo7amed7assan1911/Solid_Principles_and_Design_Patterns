#include "./Person/person.h"
#include "./Employee/employee.h"
#include "./Teacher/teacher.h"
#include "./Developer/developer.h"

#include <iostream>
#include <string>
using namespace std;


int main(){
    Developer dev1("John", "apple", 25, "C++");
    Teacher   tec1("mo", "Fashen", 35, "Mathematics");

    Person* p1;
    p1 = &dev1;
    p1->introduce();
    
    return 0;
}