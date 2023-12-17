//This program prints butterfly pattern with the help of for loop
//18-Dec-2023

#include <iostream>
using namespace std; //By includeing namespace, we don't have to use std:: for cout and endl

int main() {
 
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }

        int space = 2*num-2*i;
        for (int i = 1; i <= space; i++)
        {
            cout<<" ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }

        int space = 2*num-2*i;
        for (int i = 1; i <= space; i++)
        {
            cout<<" ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}