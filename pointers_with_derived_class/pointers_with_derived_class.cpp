//This example explain the use of compile time polymorphism as well as use of pointers with derived classes
//09-Dec-2023

#include <iostream>
using namespace std;

class Base {
    int property_a;

    public:
        int property_b;

        Base() {}

        Base (int a, int b) {
            property_a = a;
            property_b = b;
        }

        void set_a (int a) {
            property_a = a;
        }

        void set_b (int b) {
            property_b = b;
        }

        void print () {
            cout<<"The value of Base class Property A : "<<property_a
                <<" and Property B : "<<property_b<<endl;
        }
};

class Derived : public Base {
    int property_c;

    public:
        int property_d;

        Derived () {}

        Derived (int c, int d) {
            property_c = c;
            property_d = d;
        }

        void set_c (int c) {
            property_c = c;
        }

        void set_d (int d) {
            property_d = d;
        }

        void print () {
            Base :: print();
            cout<<"The value of Derived class Property C : "<<property_c
                <<" and Property D : "<<property_d<<endl;
        }
};

int main() {
    Base *b2;
    Derived d1, *d2;

    d1 = Derived(10, 20);
    d1.set_b(90);
    d1.print();

    b2 = &d1;
    b2->print();
    b2->set_a(8);
    b2->set_b(9);
    b2->print(); //Compile time function -- do function binding at compile time to base :: print()

    d2 = &d1;
    d2->print();
    d2->set_d(100);
    b2->set_a(800);
    b2->set_b(900);
    d2->print();

    // b2.set_c(7); //Unable to use derived class function

    return 0;
}