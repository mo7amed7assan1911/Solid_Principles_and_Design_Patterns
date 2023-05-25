#include "developer.h"
#include <iostream>
#include <string>
using namespace std;


Developer::Developer(string n, string c, int a, string lang): Employee(n, c, a)
{
    programmingLanguage = lang;
}

void Developer::set_programmingLanguage(string lang)
{
    programmingLanguage = lang;
}

string Developer::get_programmingLanguage()
{
    return programmingLanguage;
}

void Developer::introduce()
{
    cout << "Hello I am a developer!" << endl;
    Employee::introduce();
    cout << "I write " << programmingLanguage << " language code" << endl;
}