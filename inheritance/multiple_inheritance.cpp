//This program defines the template code for multiple inheritance.
//07-Dec-2023

#include <iostream>
using namespace std;

class Base1 {
    int property_a;
    string property_b; //private members do not inherit
    
    public:
    float property_c;
    double property_d;

    Base1 (void) {
        property_a = 1;
        property_b = "propertyB";
        property_c = 3.58;
        property_d = 4.556677;
    } 

    void print () {
        cout<<"Printing out the members of the base1 class : "<<endl
            <<"Property A : "<<property_a<<endl<<"Property B : "
            <<property_b<<endl<<"Property C : "<<property_c<<endl
            <<"Property D : "<<property_d<<endl;
            cout<<endl;
    }
};

class Base2 {
    int property_e;
    string property_f; //private members do not inherit
    
    public:
    float property_g;
    double property_h;

    Base2 (void) {
        property_e = 2;
        property_f = "propertyF";
        property_g = 4.56;
        property_h = 7.889966;
    } 

    void print () {
        cout<<"Printing out the members of the base2 class : "<<endl
            <<"Property E : "<<property_e<<endl<<"Property F : "
            <<property_f<<endl<<"Property G : "<<property_g<<endl
            <<"Property H : "<<property_h<<endl;
            cout<<endl;
    }
};

// Syntax to derive a class in multiple inheritance:
// class {derive_class_name} : {{visibility_mode} {base_class_name}}*n

//By default, visibility mode is private

class Derived : public Base1, public Base2 {
    int property_i;

    public:
        Derived (void) {
            property_i = 5;
        }

        void print (void) {
            //property_d = 8.9957694;
            Base1 :: print();
            Base2 :: print();
            cout<<"Printing out the members of the Derived class : "<<endl
            <<"Property I : "<<property_i<<endl;
            cout<<endl;
        }
};

int main () {
    
    Derived d;
    d.property_d = 3.45;
    d.print();

    // Derived_Pri d_pri;
    // //d_pri.property_d = 3.45; //inherited as private member
    // d_pri.print();

    return 0;
}