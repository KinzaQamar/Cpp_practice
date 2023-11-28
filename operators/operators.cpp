// This program explains the use of C++ operators
// 29-Nov-2023

#include <iostream>

int main() {
    int num1, num2;

    std::cout<<"Enter first number : ";
    std::cin>>num1;

    // '<<' is an insertion operator while '>>' is an extraction operator

    std::cout<<"Enter second number : ";
    std::cin>>num2;
    std::cout<<std::endl;

    std::cout<<"Arithmetic Operators examples :"<<std::endl;
    std::cout<<"The result of num1 + num2 : "<<num1+num2<<std::endl;
    std::cout<<"The result of num1 - num2 : "<<num1-num2<<std::endl;
    std::cout<<"The result of num1 * num2 : "<<num1*num2<<std::endl;
    std::cout<<"The result of num1 / num2 : "<<num1/num2<<std::endl;
    std::cout<<"The result of num1 % num2 : "<<num1%num2<<std::endl;
    std::cout<<"The result of num1++      : "<<num1++<<std::endl;
    std::cout<<"The result of num1--      : "<<num1--<<std::endl;
    std::cout<<"The result of num2++      : "<<num2++<<std::endl;
    std::cout<<"The result of num2--      : "<<num2--<<std::endl;
    std::cout<<"The result of ++num1      : "<<++num1<<std::endl;
    std::cout<<"The result of --num1      : "<<--num1<<std::endl;
    std::cout<<"The result of ++num2      : "<<++num2<<std::endl;
    std::cout<<"The result of --num2      : "<<--num2<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Comparison Operators examples :"<<std::endl;
    std::cout<<"The result of num1 == num2 : "<<(num1==num2)<<std::endl;
    std::cout<<"The result of num1 != num2 : "<<(num1!=num2)<<std::endl;
    std::cout<<"The result of num1 <= num2 : "<<(num1<=num2)<<std::endl;
    std::cout<<"The result of num1 >= num2 : "<<(num1>=num2)<<std::endl;
    std::cout<<"The result of num1 > num2  : "<<(num1>num2)<<std::endl;
    std::cout<<"The result of num1 < num2  : "<<(num1<num2)<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Logical Operators examples :"<<std::endl;
    std::cout<<"The result of ((num1!=num2) && (num1>num2)) : "<<((num1!=num2) && (num1>num2))<<std::endl;
    std::cout<<"The result of ((num1!=num2) || (num1>num2)) : "<<((num1==num2) || (num1<num2))<<std::endl;

    return 0;
}