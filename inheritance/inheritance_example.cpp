//This is an example of inheritance.
//07-Dec-2023

#include <iostream>
#include <cmath>
using namespace std;

class BasicCalc {
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

        float sin_angle (float angle) {
            return sin(angle);
        }

        float cos_angle (float angle) {
            return cos(angle);
        }

        float tan_angle (float angle) {
            return tan(angle);
        }

        float sec_angle (float angle) {
            return (1/cos(angle));
        }
};

class HybridCalc : private BasicCalc, ScientificCalc {
    float num1, num2, angle;

    public:
        HybridCalc () {}

        HybridCalc (float num1, float num2, float angle) {
            HybridCalc :: num1 = num1;
            HybridCalc :: num2 = num2;
            HybridCalc :: angle = angle;
        }

        void set_num1 (float num) {
            num1 = num;
        }

        void set_num2 (float num) {
            num2 = num;
        }

        void set_angle (float angle) {
            this->angle = angle;
        }

        void calc (char choice) {
            cout<<endl<<"Enter + for sum"<<endl
                    <<"- for sub"<<endl
                    <<"* for mul"<<endl
                    <<"/ for div"<<endl
                    <<"s for sin"<<endl
                    <<"c for cos"<<endl
                    <<"t for tan"<<endl
                    <<"e for sec"<<endl
                    <<"a for all"<<endl<<endl
                    <<"Your choice : ";
            
            cin>>choice;

            switch(choice) {
                case '+':
                    cout<<endl<<"The sum of "<<num1<<" and "<<num2<<" is "<<sum(num1, num2)<<endl;
                    break;
                
                case '-':
                    cout<<endl<<"The sub of "<<num1<<" and "<<num2<<" is "<<sub(num1, num2)<<endl;
                    break;

                case '*':
                    cout<<endl<<"The mul of "<<num1<<" and "<<num2<<" is "<<mul(num1, num2)<<endl;
                    break;

                case '/':
                    cout<<endl<<"The div of "<<num1<<" and "<<num2<<" is "<<div(num1, num2)<<endl;
                    break;
                
                case 's':
                    cout<<endl<<"The sin of angle "<<angle<<" is "<<sin_angle(angle)<<endl;
                    break;
                
                case 'c':
                    cout<<endl<<"The cos of angle "<<angle<<" is "<<cos_angle(angle)<<endl;
                    break;

                case 't':
                    cout<<endl<<"The tan of angle "<<angle<<" is "<<tan_angle(angle)<<endl;               
                    break;

                case 'e':
                    cout<<endl<<"The sec of angle "<<angle<<" is "<<sec_angle(angle)<<endl;
                    break;
                
                case 'a':
                    cout<<endl;
                    cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<sum(num1, num2)<<endl;
                    cout<<"The sub of "<<num1<<" and "<<num2<<" is "<<sub(num1, num2)<<endl;
                    cout<<"The mul of "<<num1<<" and "<<num2<<" is "<<mul(num1, num2)<<endl;
                    cout<<"The div of "<<num1<<" and "<<num2<<" is "<<div(num1, num2)<<endl;
                    cout<<"The sin of angle "<<angle<<" is "<<sin_angle(angle)<<endl;
                    cout<<"The cos of angle "<<angle<<" is "<<cos_angle(angle)<<endl;
                    cout<<"The tan of angle "<<angle<<" is "<<tan_angle(angle)<<endl;               
                    cout<<"The sec of angle "<<angle<<" is "<<sec_angle(angle)<<endl;
                    cout<<endl;
                    break;

                default:
                    cout<<"Choice not included"<<endl;
                    break;
            }
        }       
};

int main ( ) {
    HybridCalc calc;
    float a,b, angle;
    char c;

    calc = HybridCalc(10,3,30);
    calc.calc(c);

    calc.set_num1(100);
    calc.set_num2(200);
    calc.set_angle(90);

    calc.calc(c);

    return 0;
}