//This example explains the difference between call by value and call by reference argument through swapping of two variable
//1-Dec-2-23

#include <iostream>
using namespace std;

void swapValue  (int, int);
void swapPtr    (int*, int*);
void swapRefVar (int &, int &);

int main() {
    
    int num1, num2;

    cout<<"Enter num1 : ";
    cin>>num1;

    cout<<"Enter num2 : ";
    cin>>num2;

    swapValue(num1, num2);
    cout<<endl<<"The value of num1 and num2 after swapValue function is : "<<num1<<" and "<<num2<<" respectively."<<endl<<endl;

    cout<<"Enter num1 again : ";
    cin>>num1;

    cout<<"Enter num2 again : ";
    cin>>num2;

    cout<<endl<<"Entered values for num1 and num2 : "<<num1<<" and "<<num2<<" respectively."<<endl;

    swapPtr(&num1, &num2);
    cout<<endl<<"The value of num1 and num2 after swapPtr function is : "<<num1<<" and "<<num2<<" respectively."<<endl<<endl;

    cout<<"Enter num1 again : ";
    cin>>num1;

    cout<<"Enter num2 again : ";
    cin>>num2;

    cout<<endl<<"Entered values for num1 and num2 : "<<num1<<" and "<<num2<<" respectively."<<endl;

    swapRefVar(num1, num2);
    cout<<endl<<"The value of num1 and num2 after swapRefVar function is : "<<num1<<" and "<<num2<<" respectively."<<endl;

    return 0;
}

void swapValue (int a, int b) {

    int temp =  a;
    a = b;
    b = temp;
}

void swapPtr (int* a, int* b) {

    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapRefVar (int &a, int &b){

    int temp =  a;
    a = b;
    b = temp;
}
