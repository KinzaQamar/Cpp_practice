// This program explains the decimal numbers literals
// 29-Nov-2023

#include <iostream>
#include <typeinfo>

int main() {
    float num1;
    double num2;

    std::cout<<"Enter first number : ";
    std::cin>>num1;

    // '<<' is an insertion operator while '>>' is an extraction operator

    std::cout<<"Enter second number : ";
    std::cin>>num2;
    std::cout<<std::endl;

    std::cout<<"Entered num1 as : "<<num1<<std::endl;
    std::cout<<"Entered num2 as : "<<num2<<std::endl;
    std::cout<<std::endl;

    //By default, if you pass any decimal number as an argument to the function then C++ considers it as double
    std::cout<<"The type of number 45.67  is : "<<typeid(45.67).name()<<std::endl;
    std::cout<<"The type of number 45.67f is : "<<typeid(45.67f).name()<<std::endl;
    std::cout<<std::endl;    

    return 0;
}