//This program contains the c++ instructions for dynamic initialization of constructor
//05-Dec-2023

#include <iostream>
using namespace std;

//Constructors are used to initialize the object 

class Point1 {
    int ix1, iy1;
    float fx1, fy1;

    public:
        Point1() {};

        Point1(int x, int y) {
            ix1 = x;
            iy1 = y;
            fx1 = float(x);
            fy1 = float(y);
        } //Parameterized constructor as it contains arguments

        Point1(float x, float y) {
            ix1 = int(x);
            iy1 = int(y);
            fx1 = x;
            fy1 = y;        
        } //Parameterized constructor as it contains arguments

        void print() {
            cout<<"The integer coordinates of point are  (x,y) : ("<<ix1<<","<<iy1<<")"<<endl;
            cout<<"The floating coordinates of point are (x,y) : ("<<fx1<<","<<fy1<<")"<<endl;
        }
};

//Constructors has no return type and they invoke automatically when the object is created

int main () {
    Point1 p1, p2;
    int x, y;

    cout<<"Enter integer x and y coodinates:"<<endl;
    cout<<"x : ";
    cin>>x;
    cout<<"y : ";
    cin>>y;

    p1 = Point1(x , y);
    p1.print();

    float a, b;

    cout<<endl;
    cout<<"Enter floating x and y coodinates:"<<endl;
    cout<<"x : ";
    cin>>a;
    cout<<"y : ";
    cin>>b;

    p2 = Point1(a , b);
    p2.print();

    return 0;
}