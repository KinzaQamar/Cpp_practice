//This program explains the use of pointers with arrays
//30-Nov-2023

#include <iostream>
using namespace std; 

int main() {

    int size;

    cout<<"Enter the size of the array : ";
    cin>>size;
    cout<<endl;
    
    int array[size];

    for (int i = 0; i < size; i++) {
        cout<<"Value for array["<<i<<"] : ";
        cin>>array[i];
    }

    for (int i = 0; i < size; i++) {
        cout<<endl<<"Value of array["<<i<<"] : "<<array[i];
    }

    cout<<endl<<endl;

    //Use of pointer with array
    int* p = array; // ---> same as int* p = &array[0]

    for (int i = 0; i < size; i++) {
        cout<<"The address of array["<<i<<"] is : "<<(p+i)<<endl;
        cout<<"The value   at array["<<i<<"] is : "<<*(p+i)<<endl<<endl;
    }
    
    return 0;
}