//This program defines the template code for multilevel inheritance.
//06-Dec-2023

#include <iostream>
using namespace std;

class Base {
    int property_a;
    string property_b; //private members do not inherit
    
    public:
    float property_c;
    double property_d;

    Base (void) {
        property_a = 0;
        property_b = "propertyB";
        property_c = 0.00;
        property_d = 0.00000;
    } 

    void print () {
        cout<<"Printing out the members of the base class : "<<endl
            <<"Property A : "<<property_a<<endl<<"Property B : "
            <<property_b<<endl<<"Property C : "<<property_c<<endl
            <<"Property D : "<<property_d<<endl;
    }
};

// Syntax to derive a class:
// class {derive_class_name} : {visibility_mode} {base_class_name}

//By default, visibility mode is private

class Derived_A : Base {
    int property_e;

    public:
        double property_f;

    public:
        Derived_A (void) {
            property_e = 100;
            property_f = 10.3;
        }

        void print (void) {
            Base :: print();
            cout<<"Printing out the members of the Derived_A class : "<<endl
            <<"Property E : "<<property_e<<endl<<"Property F : "<<property_f<<endl;
        }
};

class Derived_B : Derived_A {
    int property_g;

    public:
        double property_h;

    public:
        Derived_B (void) {
            property_g = 200;
            property_h = 20.3;       
        }

        void print (void) {
            Derived_A :: print();
            cout<<"Printing out the members of the Derived_B class : "<<endl
            <<"Property G : "<<property_g<<endl<<"Property H : "<<property_h<<endl;
        }
};

int main () {
    Derived_B d;
    d.print();

    return 0;
}