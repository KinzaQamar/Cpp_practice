//This program is an example of selection sorting algorithm
//19-Dec-2023

#include <iostream>
using namespace std;

void bubble_sort (int arr[], int size) {
    int temp;
    int count = 1;

    while (count < size) {
        for (int i = 0; i < size-count; i++)
        {
            if (arr[i] > arr[i+1]) {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        count++;
    }

    cout<<"The sorted contents of an array are : "<<endl;
     for (int i = 0; i < size; i++)
    {
        cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
    } 
}

int main() {
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    int arr[size];

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

    bubble_sort(arr, size);

    return 0;
}