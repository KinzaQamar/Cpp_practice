//This program explains new() and delete() operator with pointers
//08-Dec-2023

#include <iostream>
using namespace std;

int main () {
    int* ptr_int = new int(100);
    cout<<"The value at adress "<<ptr_int<<" is "<<*ptr_int<<endl;

    float* ptr_flt = new float(10.90);
    cout<<"The value at adress "<<ptr_flt<<" is "<<*ptr_flt<<endl;

    string* ptr_str = new string("Kinza");
    cout<<"The value at adress "<<ptr_str<<" is "<<*ptr_str<<endl;

    delete ptr_flt;
    cout<<"The value at adress "<<ptr_flt<<" after deletion is "<<*ptr_flt<<endl;

    int* ptr_arr = new int[2];
    *ptr_arr = 1000;
    *(ptr_arr+1) = *ptr_arr*2;
    cout<<"The value at adress "<<ptr_arr<<" is "<<*ptr_arr<<endl;
    cout<<"The value at adress "<<ptr_arr+1<<" is "<<*(ptr_arr+1)<<endl;

    // delete ptr_arr;
    // cout<<"The value at adress "<<ptr_arr<<" after deletion is "<<*ptr_arr<<endl;
    // cout<<"The value at adress "<<ptr_arr+1<<" after deletion is "<<*(ptr_arr+1)<<endl;

    delete[] ptr_arr;
    cout<<"The value at adress "<<ptr_arr<<" after deletion is "<<*ptr_arr<<endl;
    cout<<"The value at adress "<<ptr_arr+1<<" after deletion is "<<*(ptr_arr+1)<<endl;

    return 0;
}