//This example explains the use of arrays with objects
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
    cout<<endl<<"How many student's data you want to enter : ";
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
    
    Class a[2];

    for (int i = 0; i < 2; i++)
    {
        cout<<endl<<"For object "<<i+1<<endl;
        a[i].setmarks();
    }

    return 0;
}