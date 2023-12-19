//This program is an example of sum of all the sub-arrays of a given array
//19-Dec-2023

#include <iostream>
using namespace std;

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

    cout<<"The contents of an array are : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
    }
    cout<<endl;
    
    int sum, count;

    for (int i = 0; i < size; i++)
    {
        sum = 0;
        count = 0;
        cout<<"Calculating sum for element "<<i+1<<endl;

        for (int j = i; j < size; j++)
        {
            sum += arr[j];
            cout<<"The sum of sub-array "<<++count<<" is "<<sum<<endl;
        }
        cout<<endl;
    }

    return 0;
}