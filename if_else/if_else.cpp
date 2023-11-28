//This program explains the use of if/else statements through a grading system code
//29-Nov-2023

#include <iostream>
using namespace std; //By includeing namespace, we don't have to use std:: for cout and endl

int main() {
    int marks;

    std::cout<<"Enter your marks : ";
    std::cin>>marks;

    if ((marks > 0) && (marks < 30)) 
    {
        cout<<endl<<"\033[1;31m[FAIL]\033[0m Your grade is F";
    }
    else if ((marks > 30) && (marks < 50))
    {
        cout<<endl<<"\033[1;32m[PASS]\033[0m Your grade is D";
    }
    else if ((marks > 50) && (marks < 60))
    {
        cout<<endl<<"\033[1;32m[PASS]\033[0m Your grade is C";
    }
    else if ((marks > 60) && (marks < 80))
    {
        cout<<endl<<"\033[1;32m[PASS]\033[0m Your grade is B";
    }
    else
    {
        cout<<endl<<"\033[1;32m[PASS]\033[0m Your grade is A";
    }

    cout<<endl;

    return 0;
}