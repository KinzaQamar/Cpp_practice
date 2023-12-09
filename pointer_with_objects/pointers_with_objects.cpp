//This class explains the use of pointer with objects and introduce arrow operator
//09-Dec-2023

#include<iostream>
using namespace std;

class Base {
    int property_a, property_b;

    public:
        string property_c;

        Base () {}

        Base (int a, int b, string c) {
            property_a = a;
            property_b = b;
            property_c = c;
        }

        void print () {
            cout<<"The value of property a, b and c is "<<property_a<<", "<<property_b<<" and "<<property_c<<" respectively "<<endl;
        }
};

int main () {
    Base b;
    b = Base(1000, 2000, "Property C");
    b.print();

    Base *ptr = &b;
    // (*ptr).property_c = "PTR_C"; Same work as below statement
    ptr->property_c = "PTR_C";
    (*ptr).print();

    Base *ptr1 = new Base;
    *ptr1 = Base(100, 200, "Kinza");
    (*ptr1).print();

    //Pointer with array of objects
    Base *ptr_arr = new Base[2];
    *ptr_arr = Base(10, 20, "Maths");
    (*ptr_arr).print();
    
    *(ptr_arr+1) = Base(1, 2, "Islamic Studies");
    (ptr_arr+1)->print();
    // *(ptr_arr+1).print(); //not working

    return 0;
}