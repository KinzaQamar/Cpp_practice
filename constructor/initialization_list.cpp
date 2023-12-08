//This program defines the intitalization list constructors.
//This program another way to initialize values of a class through a constructor 
//08-Dec-2023

#include <iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

class base {
    int prop1, prop2;

    public:
    base () {}
    // base (int a, int b) : prop1(a), prop2(b) {
    // base (int a, int b) : prop1(a), prop2(b+prop1) {
    base (int a, int b) : prop1(a+prop2), prop2(b) {
        cout<<"Calling constructor of base class"<<endl<<endl;
        cout<<"The value of property 1 is : "<<prop1<<endl<<
              "The value of property 2 is : "<<prop2<<endl;
    }
};

int main () {
    base b;
    b = base(100,200);
}