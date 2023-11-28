//This program explains the use of for loop through a multiplication table code
//29-Nov-2023

#include <iostream>
using namespace std; //By includeing namespace, we don't have to use std:: for cout and endl

int main() {
 
    int num;

    cout<<"This is a multiplication table program : ";
    cin>>num;
    cout<<endl;

    for (int i = 1; i <= 10; i++)
    {
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    }

    return 0;
}