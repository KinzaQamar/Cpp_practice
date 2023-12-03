//This code uses static variables
//03-Dec-2023

//Static members occupies single memory location shared between all the objects

#include <iostream>
using namespace std;

class Static {
    static int count;
    static int num;

    public:
    void input_num (int &num) {
        cout<<endl<<"Enter any number : ";
        cin>>num;
    }

    void multiply (int num) {
        cout<<""<<num<<" * "<<count<<" : "<<num*count<<endl;
        count++;
    }
};

int Static :: count;
int Static :: num;

int main() {

    int num;
    Static s[10];

    s[0].input_num(num);

    for (int i = 0; i < 10; i++)
    {
        s[i].multiply (num); 
    }
    
    return 0;
}