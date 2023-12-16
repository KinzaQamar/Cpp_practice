//This program prints inverted pyramid pattern with the help of for loop
//17-Dec-2023

#include <iostream>
using namespace std; //By includeing namespace, we don't have to use std:: for cout and endl

int main() {
 
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}