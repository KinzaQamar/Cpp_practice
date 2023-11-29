//This program explains the use of continue statement by printing even numbers
//30-Nov-2023

#include <iostream>
using namespace std; 

int main() {
 
    int num;

    cout<<"How many even numbers you want to see on the screen : ";
    cin>>num;
    cout<<endl;

    int count = 0;

    for (int i = 0; i <= num; i++)
    {
        if (i%2 != 0) {
            continue;
        }
        else
        {   
            count++;
            cout<<"Even number "<<count<<" is : "<<i<<endl;
        }
    }

    return 0;
}