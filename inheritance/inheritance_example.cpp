//This is an example of inheritance.
//07-Dec-2023

#include <iostream>
#include <cmath>
using namespace std;

class BasicCalc {
    //float num1, num2;
    public:
    BasicCalc () {}

    float sum (float num1, float num2) {
        return num1 + num2;
    }

    float sub (float num1, float num2) {
        return num1 - num2;
    }

    float mul (float num1, float num2) {
        return num1 * num2;
    }

    float div (float num1, float num2) {
        return num1 / num2;
    }
};

class ScientificCalc {
    public: 
    ScientificCalc () {}

    float sin (float angle) {
        return sin(angle);
    }

    float cos (float angle) {
        return cos(angle);
    }

    float tan (float angle) {
        return tan(angle);
    }

    float sec (float angle) {
        return sec(angle);
    }

};

class HybridCalc : private BasicCalc, ScientificCalc {
    float res;

    public:
    float num1, num2, angle;

    HybridCalc () {}

    HybridCalc (float num1, float num2, float angle) {
        HybridCalc :: num1 = num1;
        HybridCalc :: num2 = num2;
        HybridCalc :: angle = angle;
    }

    float calc (char choice) {
        cout<<endl<<"Enter + for sum"<<endl
                  <<"- for sub"<<endl
                  <<"* for mul"<<endl
                  <<"/ for div"<<endl
                  <<"s for sin"<<endl
                  <<"c for cos"<<endl
                  <<"t for tan"<<endl
                  <<"e for sec"<<endl;
        
        cin>>choice;

        switch(choice) {
            case '+':
                res = sum(num1, num2);
                cout<<endl<<"The sum of "<<num1<<" and "<<num2<<" is "<<res<<endl;
                break;
            
            case '-':
                res = sub(num1, num2);
                cout<<endl<<"The sub of "<<num1<<" and "<<num2<<" is "<<res<<endl;
                break;

            case '*':
                res = mul(num1, num2);
                cout<<endl<<"The mul of "<<num1<<" and "<<num2<<" is "<<res<<endl;
                break;

            case '/':
                res = div(num1, num2);
                cout<<endl<<"The div of "<<num1<<" and "<<num2<<" is "<<res<<endl;
                break;
            
            case 's':
                res = sin(angle);
                cout<<endl<<"The sin of angle "<<angle<<" is "<<res<<endl;
                break;
            
            case 'c':
                res = cos(angle);
                cout<<endl<<"The cos of angle "<<angle<<" is "<<res<<endl;
                break;

            case 't':
                res = tan(angle);
                cout<<endl<<"The tan of angle "<<angle<<" is "<<res<<endl;
                break;

            case 'e':
                res = sec(angle);
                cout<<endl<<"The sec of angle "<<angle<<" is "<<res<<endl;
                break;
            
            default:
                cout<<"Choice not included"<<endl;
        }

        return res;
    }
    
};

int main ( ) {
    HybridCalc calc;
    float a,b, angle;
    char c;

    calc = HybridCalc(10,3,0);
    calc.calc(c);

    return 0;
}