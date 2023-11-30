#include <iostream>
using namespace std;

int sum (int, int); //Function prototyping

int main() {
    int num1, num2;

    cout<<"Enter first number : ";
    cin>>num1;

    cout<<"Enter second number : ";
    cin>>num2;

    cout<<endl<<"The result of num1 + num2 : "<<sum(num1, num2)<<endl;

    return 0;
}

int sum (int a, int b) {
    int sum = a + b;
    return sum;
}