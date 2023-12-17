//This program prints numbers in a palindrome pattern with the help of for loop
//18-Dec-2023

#include <iostream>
using namespace std; //By includeing namespace, we don't have to use std:: for cout and endl

int main() {
 
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    for (int i = 1; i <= num; i++)
    {   
        int j;
        for (j = 1; j <= num-i; j++)
            cout<<"  ";

        int k = i;
        for (; j <= num; j++)
            cout<<k--<<" ";
        
        k = 2;
        for(; j <= num+(i-1); j++) 
            cout<<k++<<" ";

        cout<<endl;
    }

    return 0;
}