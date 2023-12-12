//This is an example of C++ Inheritance.
//11-Dec-2023

#include <iostream>
#include <cmath>
using namespace std;

template <class T>
class BasicCalc {
    public:
        BasicCalc () {}

        T sum (T num1, T num2) {
            return num1 + num2;
        }

        T sub (T num1, T num2) {
            return num1 - num2;
        }

        T mul (T num1, T num2) {
            return num1 * num2;
        }

        T div (T num1, T num2) {
            return num1 / num2;
        }
};

int main () {
    BasicCalc <int> int_calc;
    BasicCalc <float> float_calc;
    BasicCalc <double> double_calc;

    int res0[4];
    float res1[4]; 
    double res2[4];

    res0[0] = int_calc.sum(10,10);
    res0[1] = int_calc.sub(10,10);
    res0[2] = int_calc.mul(10,10);
    res0[3] = int_calc.div(10,10);

    res1[0] = float_calc.sum(1.10,1.20);
    res1[1] = float_calc.sub(1.10,1.20);
    res1[2] = float_calc.mul(1.10,1.20);
    res1[3] = float_calc.div(1.10,1.20);

    res2[0] = double_calc.sum(10.45676575,108.78678609);
    res2[1] = double_calc.sub(10.45676575,108.78678609);
    res2[2] = double_calc.mul(10.45676575,108.78678609);
    res2[3] = double_calc.div(10.45676575,108.78678609);

    cout<<"The result of integer sum : "<<res0[0]<<endl;
    cout<<"The result of integer sub : "<<res0[1]<<endl;
    cout<<"The result of integer mul : "<<res0[2]<<endl;
    cout<<"The result of integer div : "<<res0[3]<<endl;
    cout<<endl;

    cout<<"The result of float sum : "<<res1[0]<<endl;
    cout<<"The result of float sub : "<<res1[1]<<endl;
    cout<<"The result of float mul : "<<res1[2]<<endl;
    cout<<"The result of float div : "<<res1[3]<<endl;
    cout<<endl;

    cout<<"The result of doubles sum : "<<res2[0]<<endl;
    cout<<"The result of doubles sub : "<<res2[1]<<endl;
    cout<<"The result of doubles mul : "<<res2[2]<<endl;
    cout<<"The result of doubles div : "<<res2[3]<<endl;
    cout<<endl;

    return 0;
}