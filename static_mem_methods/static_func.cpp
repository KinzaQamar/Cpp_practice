//This code uses static functions
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

    static void multiply (int num) {
        cout<<""<<num<<" * "<<count+1<<" : "<<num*(count+1)<<endl;
        count++;
    }
};

int Static :: count;
int Static :: num;

int main() {

    int num;
    Static s;

    s.input_num(num);

    for (int i = 0; i < 10; i++)
    {
        Static::multiply(num); 
    }
    
    return 0;
}