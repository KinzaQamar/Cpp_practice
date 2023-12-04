//This program explains the example of friend function
//04-Dec-2023

#include <iostream>
using namespace std;

class Friend_function {

    int n;
    friend Friend_function Friend (Friend_function f1);

    void setnum (int &n) {
        cout<<"Enter any number : ";
        cin>>n;
        cout<<endl;
    }

    public:
        int factorial (int n) {
            //Recursion needs base condition
            if (n < 1) {
                return 1;
            }
            return n * factorial(n-1);
        }   
};

Friend_function Friend (Friend_function f1) {
    f1.setnum(f1.n);
    cout<<"The factorial of number "<<f1.n<<" is : "<<f1.factorial(f1.n)<<endl;
    return f1;
}

int main () {
    Friend_function ff1, ff2;
    ff2 = Friend(ff1);
    return 0;
}