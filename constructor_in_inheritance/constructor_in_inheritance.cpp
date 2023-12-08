//This program defines the hierarchy of constructors with inheritance
//08-Dec-2023

#include <iostream>
using namespace std;

/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/

class Base1 {
    int property_a;
    string property_b; //private members do not inherit
    
    public:
    Base1 (int a, string b) {
        cout<<"Welcome to Base1 class constructor :"<<endl;
        property_a = a;
        property_b = b;
    } 

    void print () {
        cout<<"Printing out the members of the base1 class : "<<endl
            <<"Property A : "<<property_a<<endl<<"Property B : "
            <<property_b<<endl;
            cout<<endl;
    }
};

class Base2 {
    int property_e;
    string property_f; //private members do not inherit
    
    public:
    Base2 (int a, string b) {
        cout<<"Welcome to Base2 class constructor :"<<endl;
        property_e = a;
        property_f = b;
    } 

    void print () {
        cout<<"Printing out the members of the base2 class : "<<endl
            <<"Property E : "<<property_e<<endl<<"Property F : "
            <<property_f<<endl;
            cout<<endl;
    }
};

// Syntax to derive a class in multiple inheritance:
// class {derive_class_name} : {{visibility_mode} {base_class_name}}*n

//By default, visibility mode is private

class Derived1 : public Base2, public Base1 { //Multiple inheritance
    int property_i;

    public:
        //If the base class contains constructor with arguments then the derived class constructor should pass the arguments to base
        //class constructor
        Derived1 (int a, int b, int c, string d, string e) : Base1(a, d), Base2(b, e) {
            cout<<"Welcome to Derived1 class constructor :"<<endl<<endl;
            property_i = c;
        }

        void print (void) {
            Base1 :: print();
            Base2 :: print();
            cout<<"Printing out the members of the Derived1 class : "<<endl
            <<"Property I : "<<property_i<<endl;
            cout<<endl;
        }
};

class Derived2 : public Base1, virtual public Base2 { //Multiple inheritance
    int property_i;

    public:
        //If the base class contains constructor with arguments then the derived class constructor should pass the arguments to base
        //class constructor
        Derived2 (int a, int b, int c, string d, string e) : Base1(a, d), Base2(b, e) {
            cout<<"Welcome to Derived2 class constructor :"<<endl<<endl;
            property_i = c;
        }

        void print (void) {
            Base1 :: print();
            Base2 :: print();
            cout<<"Printing out the members of the Derived2 class : "<<endl
            <<"Property I : "<<property_i<<endl;
            cout<<endl;
        }
};

class Derived3 : public Base1{ //single inheritance
    int property_i;

    public:
        //If the base class contains constructor with arguments then the derived class constructor should pass the arguments to base
        //class constructor
        Derived3 (int a, int b, string e) : Base1(a, e) {
            cout<<"Welcome to Derived3 class constructor :"<<endl<<endl;
            property_i = b;
        }

        void print (void) {
            Base1 :: print();
            cout<<"Printing out the members of the Derived3 class : "<<endl
            <<"Property I : "<<property_i<<endl;
            cout<<endl;
        }
};

class Derived4 : public Derived3{ //Multilevel inheritance Base1 --> Derived3 --> Derived4
    int property_i;

    public:
        //If the base class contains constructor with arguments then the derived class constructor should pass the arguments to base
        //class constructor
        Derived4 (int a, int b, int c, string e) : Derived3(a, b, e) {
            cout<<"Welcome to Derived4 class constructor :"<<endl<<endl;
            property_i = c;
        }

        void print (void) {
            Base1 :: print();
            cout<<"Printing out the members of the Derived4 class : "<<endl
            <<"Property I : "<<property_i<<endl;
            cout<<endl;
        }
};

int main () {
    
    Derived1 d1(100, 200, 200, "Base1_propertry", "Base2_property");
    d1.print();

    Derived2 d2(1003, 2050, 2004, "Base1_propertry", "Base2_property");
    d2.print();

    Derived3 d3(1001, 2002, "Base1_property");
    d3.print();

    Derived4 d4(1000, 2000, 3000, "Base1_property");
    d4.print();

    return 0;
}