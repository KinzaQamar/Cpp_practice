// This program explains the difference of global and local variables
// Edit : 29-Nov-2023

#include <iostream>

int glob_var = 10;

void print_glob_var () {
    std::cout<<"glob_var : "<<glob_var<<std::endl;
}

int main() {
    print_glob_var ();
   
    //Local and Global variable could have same names but inside main the precedence will be given to local named varible
    int glob_var = 89;
    std::cout<<"Printing glob_var of main scope : "<<glob_var;
    std::cout<<std::endl<<"Printing glob_var from main scope : "<<::glob_var; // '::' is scope resolution operator

    return 0;
}