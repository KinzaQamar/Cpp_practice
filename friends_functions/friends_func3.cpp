//This program explains another type of example for friend functions
//04-Dec-2023

#include <iostream>
using namespace std;

class Num2; //Forward Declaration

class Num1 {
    int num1;
    friend void swap (Num1 &, Num2 &);

    void input_num1 (int &n) {
        cout<<"Enter First Number : ";
        cin>>num1;
    }
};

class Num2 {
    int num2;
    friend void swap (Num1 &, Num2 &);

    void input_num2 (int &n) {
        cout<<"Enter Second Number : ";
        cin>>num2;
    }
};

void swap (Num1 &x, Num2 &y) {
    x.input_num1(x.num1);
    y.input_num2(y.num2);

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