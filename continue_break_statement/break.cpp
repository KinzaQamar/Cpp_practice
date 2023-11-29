//This program explains the use of break statement through an infinite loop example
//30-Nov-2023

//This example subtract the user desired number by 1 until it will become 0

#include <iostream>
using namespace std; 

int main() {
 
    int num;

    cout<<"Enter any number : ";
    cin>>num;
    cout<<endl;

    int count = 0;

    for (int i = 0; ;i++)
    {
        if ( num < 0) {
            break;
        }
        else {
            num = num - i;
            cout<<"Entered number now become : "<<num<<" at "<<i<<" iteration"<<endl;
        }
    }

    return 0;
}