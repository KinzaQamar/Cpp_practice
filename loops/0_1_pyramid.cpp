//This program prints pyramid of zeros and ones pattern with the help of for loop
//17-Dec-2023

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
            if (( (i + j )%2 ) == 0)
                cout<<1<<" ";
            else
                cout<<0<<" ";
        }
        cout<<endl;
    }

    return 0;
}