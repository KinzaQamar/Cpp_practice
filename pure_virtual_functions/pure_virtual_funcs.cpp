//This program explains the concept of abstract classes and pure virtual functions
//10-Dec-2023

#include <iostream>
using namespace std;

//An abstract class is a class that is designed to be specifically used as a base class.
//We cannot create objects of abstract classes.
//Abstract class should have atleast one pure virtual function.
//Will get error if pure virtual function is not going to use in derived class

class Base {
    protected:
        int property_a;
        float property_b;
    
    public:
        virtual void display() = 0; // Do nothing
};

class Derived : public Base {
    double property_c;
    string property_d;

    public:
        Derived () {}

        void set (int a, float b, double c, string d) {
            property_a = a;
            property_b = b;
            property_c = c;
            property_d = d;
        }

        void display () {
            cout<<endl;
            cout<<"The value of Base class Property A : "<<property_a
                <<" and Property B : "<<property_b<<endl
                <<"The value of Derived class Property C : "<<property_c
                <<" and Property D : "<<property_d<<endl<<endl;
        }
};

int main () {
    Derived d;
    d.set(1000, 344.5, 45.756849361435, "Kinza");
    d.display();

    return 0;
}