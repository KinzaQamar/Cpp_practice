//This program is an example of selection sorting algorithm
//18-Dec-2023

#include <iostream>
using namespace std;

void selection_sort (int arr[], int size) {
    int start = 0;
    int end = size-1;
    int temp;

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout<<"The sorted contents of an array are : "<<endl;
     for (int i = 0; i < size; i++)
    {
        cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
    } 
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

    cout<<"The unsorted contents of an array are : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
    }
    cout<<endl;

    selection_sort(arr, size);  

    return 0;
}