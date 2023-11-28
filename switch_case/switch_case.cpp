//This program explains the use of switch case statements through a grading system code
//29-Nov-2023

#include <iostream>
using namespace std; //By includeing namespace, we don't have to use std:: for cout and endl

int main() {
    char grade;

    std::cout<<"Enter your grade : ";
    std::cin>>grade;

    switch (grade)
    {
        case 'A' :
            cout<<endl<<"You obtained marks between 80 to 100";
            break;

        case 'B' :
            cout<<endl<<"You obtained marks between 60 to 80";
            break;

        case 'C' :
            cout<<endl<<"You obtained marks between 50 to 60";
            break;

        case 'D' :
            cout<<endl<<"You obtained marks between 30 to 50";
            break;
    
        default:
            cout<<endl<<"\033[1;31m[FAIL]\033[0m You obtained marks below 30";
            break;
    }

    cout<<endl;

    return 0;
}