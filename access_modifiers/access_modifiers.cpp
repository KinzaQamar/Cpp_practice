//This program explains the use of class access modifiers and also the introduction to how to declare classes
//02-Dec-2023

#include <iostream>
using namespace std;

class Company {
    
    private:
        int salary, eid;

    public:
        string name;
        int num;

    void setdetails (int salary, int eid, 
                     int num, string name);

    void getdetails ();
};

void Company :: setdetails (int salary, int eid, int num, string name) {

    Company::salary = salary;
    Company::eid    = eid;
    Company::num    = num;
    Company::name   = name;
}

void Company :: getdetails () {
    cout<<"Here are the details of "<<Company::name<<" :"<<endl;
    cout<<"Employee ID : "<<Company::eid<<endl;
    cout<<"Salary      : "<<Company::salary<<endl;
    cout<<"Phone Num   : "<<Company::num<<endl;   
}

int main() {

    Company c;
    c.setdetails(19000, 143, 9200021, "Kinza");
    c.getdetails();

    return 0;
}