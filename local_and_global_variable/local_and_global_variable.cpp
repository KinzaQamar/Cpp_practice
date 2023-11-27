#include <iostream>

int glob_var = 10;

void print_glob_var () {
    std::cout<<"glob_var : "<<glob_var<<std::endl;
}

int main() {
    print_glob_var ();
   
    //Local and Global variable could have same names but inside main the precedence will be given to local named varible
    int glob_var = 89;
    std::cout<<"Printing glob_var from main : "<<glob_var;

    return 0;
}