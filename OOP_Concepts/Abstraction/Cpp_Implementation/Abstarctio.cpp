#include <iostream>
using namespace std;

class CalculatorInterface{
    protected:
        int a, b;
    public:
        CalculatorInterface(int x, int y){
            a = x;
            b = y;
        }

        // Pure virtual function
        virtual float calculate()=0;
};

class Add: public CalculatorInterface{
    private:
        int num1, num2;
    public:
        Add(int x, int y): CalculatorInterface(x, y){}

        // Overriding the pure virtual function
        float calculate(){
            return a + b;
        }
};

class Sub: public CalculatorInterface{
    private:
        int num1, num2;
    public:
        Sub(int x, int y): CalculatorInterface(x, y){}

        // Overriding the pure virtual function
        float calculate(){
            return a - b;
        }
};

int main(){
    Add addition(20, 10);
    Sub subtraction(20, 10);


    // Creating a pointer to the base class
    CalculatorInterface* operation;

    // Assigning the pointer to an object of the Add class
    operation = &addition;
    cout << "Obj 1 result from Adding: " << operation->calculate() << endl;

    // Assigning the pointer to an object of the Sub class
    operation = &subtraction;
    cout << "Obj 2 result form Sub: " << operation->calculate() << endl;

    return 0;
}