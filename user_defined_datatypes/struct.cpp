//This program explains the use of structures
//30-Nov-2023

#include <iostream>
using namespace std; 

struct company {
    string name;
    int eid;
    int salary;
};

int main() {

    struct company c1;
    
    cout<<"Enter the name of the employee of C1 company : ";
    cin>>c1.name;

    cout<<"Enter the employee ID of "<<c1.name<<" : ";
    cin>>c1.eid;

    cout<<"Enter the salary of "<<c1.name<<" : ";
    cin>>c1.salary;

    cout<<endl<<c1.name<<"'s employee ID is "<<c1.eid<<" and salary is "<<c1.salary<<endl;
    
    return 0;
}