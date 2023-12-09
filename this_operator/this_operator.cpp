//This program explains the use of this pointer through function return statements
//09-Dec-2023

#include<iostream>
using namespace std;

class Base{
    int a;

    public:
        Base() {}

        void set_a (int a) {
            this->a = a;
        }

        int get_a (void) {
            return this->a;
        }

        Base& get_obj (Base &obj) {
            a = obj.a;
            return *this;
        }
};

int main () {
    Base b1, b2, b3;
    b1.set_a(10);
    cout<<"The value of b1's property a is : "<<b1.get_a()<<endl;

    b2.get_obj(b1).set_a(100);
    b3 = b1.get_obj(b2);
    cout<<"The value of b1's property a is : "<<b1.get_a()<<endl;
    cout<<"The value of b2's property a is : "<<b2.get_a()<<endl;
    cout<<"The value of b3's property a is : "<<b3.get_a()<<endl;
    
    return 0;
}