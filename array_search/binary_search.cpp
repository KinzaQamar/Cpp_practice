//This program is an example of binary searching algorithm
//18-Dec-2023

#include <iostream>
using namespace std;

int binary_search (int arr[], int size, int key) {
    int start = 0;
    int end = size;
    int mid;
    
    cout<<"The searched element is : "<<key<<endl;
    
    while(start<=end) {
        mid = (start+end)/2;

        if( arr[mid] == key ) {
            cout<<"The index of element "<<key<<" is "<<mid<<endl;
            return mid;
        }
        else if ( arr[mid] < key )
            start = mid+1;
        else
            end = mid-1;
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

    cout<<endl<<binary_search(arr, size, arr[size-1])<<endl;  

    return 0;
}