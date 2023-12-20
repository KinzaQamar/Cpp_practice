//This program finds out if the pattern is palindrome or not using character array
//20-Dec-2023

#include <iostream>
using namespace std;

int main () {
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    char arr[size+1];
    cout<<"Enter the pattern of the array : ";
    cin>>arr;

    bool flag = 1;

    for (int i = 0; i < size; i++) {
        if (arr[i] != arr[size-1-i]) {
            flag = 0;
            break;
        }
    }

    if (!flag) 
        cout<<arr<<" pattern is a palindrome!"<<endl;

    return 0;
}