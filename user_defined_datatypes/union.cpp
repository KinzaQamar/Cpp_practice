//This program explains the use of unions
//30-Nov-2023

#include <iostream>
using namespace std; 

//Union is similar to structures but provides memory optimization

struct company {
    string name;
    int eid;
    int salary;
};

union sal_cur {
    int dollar;
    int rupees;
    int dirham;
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

    union sal_cur currency;

    currency.rupees = 123456;
    currency.dollar = 345;
    currency.dirham = 1245;

    cout<<endl<<c1.name<<"'s salary in rupees is "<<currency.rupees<<endl; //Print 1245 as we have updates currency.dollar after updating currency.rupees
    
    return 0;
}