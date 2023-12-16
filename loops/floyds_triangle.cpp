//This program prints Floyd's triangle pattern with the help of for loop
//17-Dec-2023

#include <iostream>
using namespace std; //By includeing namespace, we don't have to use std:: for cout and endl

int main() {
 
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int count = 1;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

    return 0;
}