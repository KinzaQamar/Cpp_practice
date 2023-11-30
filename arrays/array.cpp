//This program explains the use of arrays and how to input/output values to array
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

    cout<<endl;

    return 0;
}