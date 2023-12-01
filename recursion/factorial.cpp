//This example explains the use of recursion function
//1-Dec-2023

#include <iostream>
using namespace std;

int factorial (int n) {
    //Recursion needs base condition
    if (n < 1) {
        return 1;
    }
    return n * factorial(n-1);
}

int main() {
    
    int num;

    cout<<"Enter any number : ";
    cin>>num;

    cout<<"The factorial of number "<<num<<" is : "<<factorial(num)<<endl;

    return 0;
}
