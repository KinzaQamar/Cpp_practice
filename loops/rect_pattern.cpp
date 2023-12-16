//This program prints the rectangle pattern with the help of for loop
//17-Dec-2023

#include <iostream>
using namespace std; //By includeing namespace, we don't have to use std:: for cout and endl

int main() {
 
    int rows, cols;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    cout<<"Enter the number of coloumns : ";
    cin>>cols;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}