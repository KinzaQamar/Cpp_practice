//This program explain the use of constructors through swap example
//04-Dec-2023

#include <iostream>
using namespace std;

class Num2; //Forward Declaration

class Num1 {
    int num1;
    friend void swap (Num1 &, Num2 &);

    public:
        Num1(void); //Default constructor as it contains no argument
};

class Num2 {
    int num2;
    friend void swap (Num1 &, Num2 &);

    public:
        Num2(void); //Default constructor as it contains no argument
};

Num1 :: Num1(void) {
    num1 = 10;
}

Num2 :: Num2(void) {
    num2 = 140;
}

//Constructors has no return type and they invoke automatically when the object is created

void swap (Num1 &x, Num2 &y) {

    cout<<"The value of Num1 is "<<x.num1<<" and Num2 is "<<y.num2<<" before swapping"<<endl;

    int z = x.num1;
    x.num1 = y.num2;
    y.num2 = z;

    cout<<"The value of Num1 is "<<x.num1<<" and Num2 is "<<y.num2<<" after swapping"<<endl;
}

int main () {
    Num1 a;
    Num2 b;

    swap(a, b);

    return 0;
}