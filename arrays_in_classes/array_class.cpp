//This example explains the use of arrays as member property
//2-Dec-2023

#include <iostream>
using namespace std;

class Class {

    int roll_no[200];
    float marks[200];
    int students;
    void getdata (void);

    public:
    void setmarks (void);
};

void Class :: setmarks (void) {
    cout<<"How many student's data you want to enter : ";
    cin>>students;
    cout<<endl;

    for (int i = 0; i < students; i++)
    {
        cout<<"Enter the roll number of student no "<<i+1<<" : ";
        cin>>roll_no[i];
        cout<<"Enter the marks of student no "<<i+1<<" : ";
        cin>>marks[i];
        cout<<endl;
    }

    getdata();
}

void Class :: getdata (void) {    
    for (int i = 0; i < students; i++)
    {
        cout<<"The marks of roll no "<<roll_no[i]<<" is : "<<marks[i]<<endl;
    }
}

int main () {
    
    Class a;
    a.setmarks();

    return 0;
}