//This program defines the template code for signle inheritance.
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

class Derived_Pub : public Base {
    int property_c;

    public:
        Derived_Pub (void) {
            property_c = 5;
        }

        void print (void) {
            //property_d = 8.9957694;
            Base :: print();
            cout<<"Printing out the members of the Derived_Pub class : "<<endl
            <<"Property C : "<<property_c<<endl;
            Base :: print();
            cout<<endl;
        }
};

class Derived_Pri : private Base {
    int property_c;

    public:
        Derived_Pri (void) {
            property_c = 5;
        }

        void print (void) {
            property_d = 8.9957694;
            Base :: print();
            cout<<endl;
            cout<<"Printing out the members of the Derived_Pri class : "<<endl
            <<"Property C : "<<property_c<<endl;
            cout<<endl;
        }
};

int main () {
    
    Derived_Pub d_pub;
    d_pub.property_d = 3.45;
    d_pub.print();

    Derived_Pri d_pri;
    //d_pri.property_d = 3.45; //inherited as private member
    d_pri.print();

    return 0;
}