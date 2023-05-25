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
        float calculate(){
            return a + b;
        }
};

class Sub: public CalculatorInterface{
    private:
        int num1, num2;
    public:
        Sub(int x, int y): CalculatorInterface(x, y){}
        float calculate(){
            return a - b;
        }
};

int main(){
    Add obj1(20, 10);
    cout << "Obj 1 result from Adding: " << obj1.calculate() << endl;

    Sub obj2(20, 10);
    cout << "Obj 2 result form Sub: " << obj2.calculate() << endl;

    return 0;
}