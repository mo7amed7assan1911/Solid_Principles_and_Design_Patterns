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
    cout << "Enter two numbers: " << endl;
    int a, b;
    cin >> a >> b;

    cout << "Enter your operation [+, -]: " << endl << endl;
    char op;
    cin >> op;

    Add addition(a, b);
    Sub subtraction(a, b);


    // Creating a pointer to the base class
    CalculatorInterface* operation;

    if(op == '+'){
        operation = &addition;}
    else if(op == '-'){
        operation = &subtraction;}
    else{
        cout << "Invalid operation" << endl;
        return 0;
    }
    
    // Assigning the pointer to an object of the Add class
    cout << "The equation: " << a << " " << op << " " << b << " = " << operation->calculate() << endl;
    return 0;
}