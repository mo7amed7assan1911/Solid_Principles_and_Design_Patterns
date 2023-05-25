#include "teacher.h"
#include <iostream>
#include <string>
using namespace std;


Teacher::Teacher(string n, string c, int a, string s):Employee(n, c, a){
    subject = s;
}

void Teacher::set_subject(string s){
    subject = s;
}

string Teacher::get_subject(){
    return subject;
}

void Teacher::introduce(){
    cout << "Hello I am a teacher!" << endl;
    Employee::introduce();
    cout << "I teach " << subject << endl;
}

