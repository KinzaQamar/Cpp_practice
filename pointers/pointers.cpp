//This program explains the use of pointers
//30-Nov-2023

#include <iostream>
using namespace std; 

int main() {

    int a = 10;

    //Pointer is a data type which stores the address of other data types 
    int* b = &a; // --> & is the operator use to refer the address 
    cout<<"The address of a is : "<<b<<endl;
    cout<<"The value at b is : "<<*b<<endl; //--> * is the dereferencing operator
    
    return 0;
}