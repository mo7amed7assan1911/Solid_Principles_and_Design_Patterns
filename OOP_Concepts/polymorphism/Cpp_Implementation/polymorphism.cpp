#include <iostream>
using namespace std;


class AverageCalculator{
    protected:
        int total = 100;

    public:
        AverageCalculator(int t) {total = t;}

        float calculate(int degree){
            return float(degree)/total;
        }

        void set_toal(int t) {total = t;}
        int get_total() {return total;}

};

class AverageCalculatorPercentage: public AverageCalculator{
    private:
        int percentage = 100;

    public:
        AverageCalculatorPercentage(int t, int p): AverageCalculator(t) {
            percentage = p;
        }

        float calculate(int degree){
            float x =  AverageCalculator::calculate(degree);
            return x*percentage;
        }
        
};

int main(){
    cout<<"Hello world!" << endl;
    int s1=70;
    AverageCalculatorPercentage subj1(100, 100);
    AverageCalculator subj2(100);
    
    // Polymerfism concept
    // The same fucntion with same name and same parameters get different results
    // based on the object of class that calls it.
    cout<<subj1.calculate(s1)<<endl; // returns 70
    cout<<subj2.calculate(s1)<<endl; // returns 0.7

    return 0;
}