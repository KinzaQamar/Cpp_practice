//This program is about nesting of member functions and how you can do it
//02-Dec-2023

#include <iostream>
using namespace std;

class Company {
    
    private:
        int salary, eid;
        void getdetails ();

    public:
        string name;
        int num;

    void setdetails (int salary, int eid, 
                     int num, string name);
};

void Company :: getdetails () {
    cout<<"Here are the details of "<<Company::name<<" :"<<endl;
    cout<<"Employee ID : "<<Company::eid<<endl;
    cout<<"Salary      : "<<Company::salary<<endl;
    cout<<"Phone Num   : "<<Company::num<<endl;   
}

void Company :: setdetails (int salary, int eid, int num, string name) {

    Company::salary = salary;
    Company::eid    = eid;
    Company::num    = num;
    Company::name   = name;

    getdetails(); //nested in set details
}

int main() {

    Company c;
    c.setdetails(19000, 143, 9200021, "Kinza");

    return 0;
}