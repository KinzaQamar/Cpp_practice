//This program explains the use of enum
//30-Nov-2023

#include <iostream>
using namespace std; 

int main() {

    enum fam_age {Mom = 38, Dad = 42, Bro = 12, Sis = 16};

    fam_age member = Mom;

    cout<<"Printing the family member's ages : ";

    cout<<endl<<"The age of Mother  is : "<<Mom;
    cout<<endl<<"The age of Father  is : "<<Dad;
    cout<<endl<<"The age of Brother is : "<<Bro;
    cout<<endl<<"The age of Sister  is : "<<Sis;

    cout<<endl; 
    
    return 0;
}