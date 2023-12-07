//This example explain the use of virtual base class
//07-Dec-2023

#include <iostream>
using namespace std;

class base {
    public:
        int a;
        base (void) {
            a = 100;
        }

        void print() {
            cout<<"The value of property a : "<<a<<endl;
        }
};

class derived1 : virtual public base {
    protected:
    int b;

    public:
        derived1 (void) {
            b = 200;
        }

        void print() {
            base :: print();
            cout<<"The value of property b : "<<b<<endl;
        }
};

class derived2 : virtual public base {
    protected:
    int c;

    public:
        derived2 (void) {
            c = 300;
        }

        void print() {
            base :: print();
            cout<<"The value of property c : "<<c<<endl;
        }
};

class derived3 : public derived1, public derived2 {
    protected:
    int d;

    public:
        derived3 (void) {
            d = 400;
        }

        void print() {
            derived1 :: print ();
            derived2 :: print ();
            cout<<"The value of property d : "<<d<<endl;
        }
};

int main () {
    derived3 d;
    d.a = 1000;
    d.print();
    return 0;

}