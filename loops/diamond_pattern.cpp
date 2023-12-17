//This program prints diamond pattern with the help of for loop
//18-Dec-2023

#include <iostream>
using namespace std; //By includeing namespace, we don't have to use std:: for cout and endl

int main() {
 
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num-i; j++)
            cout<<" ";

        for (int k = 1; k <= 2*i-1; k++)
            cout<<"*";

        cout<<endl;
    }

    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= num-i; j++)
            cout<<" ";

        for (int k = 1; k <= 2*i-1; k++)
            cout<<"*";

        cout<<endl;
    }

    return 0;
}