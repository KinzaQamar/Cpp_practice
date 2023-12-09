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

        void setdata (int a, int b, string c) {
            cout<<"Enter the value for property a : ";
            cin>>a;
            property_a = a;
            cout<<"Enter the value for property b : ";
            cin>>b;
            property_b = b;
            cout<<"Enter the value for property c : "; 
            cin>>c;  
            property_c = c;          
        }

        void print () {
            cout<<"The value of property a, b and c is "<<property_a<<", "<<property_b<<" and "<<property_c<<" respectively "<<endl;
        }
};

int main () {
    int size;
    cout<<"Enter the size of array to store objects : ";
    cin>>size;

    //Pointer with array of objects
    Base *ptr_arr = new Base[size];

    //Initialization code
    for (int i = 0; i < size; i++)
    {
       *(ptr_arr + i) = Base(1+i, 2+i, "PROPERTY C");
    }
    
    //Print
    int a, b;
    string c;

    for (int i = 0; i < size; i++)
    {
        //Set values
        (ptr_arr + i)->setdata(a, b, c);
        (ptr_arr + i)->print();
    }

    return 0;
}