//This is another example explaining the use of run time polymorphism as well as use of pointers with derived classes
//10-Dec-2023

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

        virtual void print () {
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
            cout<<"Printing function of Derived class"<<endl;
            Base :: print();
            cout<<"The value of Derived class Property C : "<<property_c
                <<" and Property D : "<<property_d<<endl<<endl;
        }
};

int main() {
    Base *b2[2];
    Derived d1, *d2, d3;

    d1 = Derived(10, 20);
    d1.set_b(90);
    d1.print();

    d3 = Derived(44, 55);
    d3.print();

    b2[0] = &d1;
    // *b2 = &d1; //allowed
    b2[0]->print();
    b2[0]->set_a(8); //same as d1.set_a(8)
    b2[0]->set_b(9);
    b2[0]->print(); //run time function -- do function binding at run time to derived :: print()
    d1.print();

    d2 = &d1;
    d2->print();
    d2->set_d(100);
    b2[0]->set_a(800);
    b2[0]->set_b(900);
    d2->print();

    // *(b2+1) = &d3; //allowed
    b2[1] = &d3;
    b2[1]->print();

    //b2.set_c(7); //Unable to use derived class function

    return 0;
}