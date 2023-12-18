//This program is an example of linear searching algorithm
//18-Dec-2023

#include <iostream>
using namespace std;

int linear_search (int arr[], int size, int key) {
    
    cout<<"The searched element is : "<<key<<endl;
    
    for (int i = 0; i < size; i++)
    {
        if( arr[i] == key) {
            cout<<"The index of "<<key<<" is "<<i<<endl;
            return i;
        }
    }

    return -1;
}

int main () {
    int size, arr[size];
    cout<<"Enter the size of array : ";
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout<<"arr["<<i<<"] : ";
        cin>>arr[i];
    }

    cout<<endl;

    cout<<"The contents of an array are : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
    }
    cout<<endl;

    cout<<endl<<linear_search(arr, size, arr[size-1])<<endl;  

    return 0;
}