//This program prints 180 degrees rotated pyramid pattern with the help of for loop
//17-Dec-2023

#include <iostream>
using namespace std; //By includeing namespace, we don't have to use std:: for cout and endl

int main() {
 
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if ( j <= num-i )
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}