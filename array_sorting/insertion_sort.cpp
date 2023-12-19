//This program is an example of iinsertions sorting algorithm
//19-Dec-2023

#include <iostream>
using namespace std;

void insertion_sort (int arr[], int size) {
    int curr;
    int j;

    for (int i = 1; i < size; i++) {
        curr = arr[i];
        j = i-1;
        while (arr[j] > curr && j>=0) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
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

    insertion_sort(arr, size);

    return 0;
}