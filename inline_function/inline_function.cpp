//This example explains the use of inline function
//1-Dec-2023

#include <iostream>
using namespace std;

inline int product (int a, int b){
    return a*b;
}

int main() {
    
    int num1, num2;

    cout<<"Enter num1 : ";
    cin>>num1;

    cout<<"Enter num2 : ";
    cin>>num2;

    cout<<"The result of "<<num1<<" * "<<num2<<" is : "<<product(num1, num2)<<endl; // compiler replaces the function code here at compile time

    return 0;
}
