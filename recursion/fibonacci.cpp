//This example explains the use of recursion function
//1-Dec-2023

#include <iostream>
using namespace std;

int fib_seq_loc (int n){ // 0, 1, 1, 2, 3, 5, 8, ...

    if ( n < 1) {
        cout<<endl<<"No such location : "<<endl;
        return -1;
    }
    
    if ( (n == 1) || (n == 2) ) {
        if (n == 1)
            return 0;
        else
            return 1;
    }

    //Recursion needs base condition
    return fib_seq_loc(n-2) + fib_seq_loc(n-1);
}

int main() {
    
    int num;

    cout<<"Enter any number : ";
    cin>>num;

    cout<<"The number at location "<<num<<" in fibonacci series is : "<<fib_seq_loc(num)<<endl;

    return 0;
}
