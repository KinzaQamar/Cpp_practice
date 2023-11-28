// This program explains the concept of type-casting
// 29-Nov-2023

#include <iostream>
#include <typeinfo>

int main() {
    float num1 = 99.996667896;
    double num2 = 100.8749213567890642;

    std::cout<<"The value of num1 is : "<<num1;
    std::cout<<std::endl<<"The value of num2 is : "<<num2;
    std::cout<<std::endl<<"Type casting of num1 to integer : "<<int(num1);
    std::cout<<std::endl<<"Type casting of num2 to Long : "<<float(num2);

    return 0;
}