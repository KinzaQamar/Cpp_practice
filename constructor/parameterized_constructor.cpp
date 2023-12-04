//This program explain the use of parameterized constructor 
//04-Dec-2023

#include <iostream>
#include <cmath>
using namespace std;

class Point2; //Forward Declaration

//Constructors are used to initialize the object 

class Point1 {
    int x1, y1;
    friend float distance (Point1 , Point2);

    public:
        Point1(int x, int y) {
            x1 = x;
            y1 = y;
        } //Parameterized constructor as it contains arguments
};

class Point2 {
    int x2, y2;
    friend float distance (Point1 , Point2);

    public:
        Point2(int x, int y) {
            x2 = x;
            y2 = y;
        } //Parameterized constructor as it contains arguments
};

//Constructors has no return type and they invoke automatically when the object is created

float distance (Point1 p1, Point2 p2) {

    cout<<"P1 : ("<<p1.x1<<" , "<<p1.y1<<")"<<endl;
    cout<<"P2 : ("<<p2.x2<<" , "<<p2.y2<<")"<<endl;
    
    int x = pow((p2.x2 - p1.x1), 2);
    int y = pow((p2.y2 - p1.y1), 2);
    int d = sqrt(x+y);

    cout<<endl<<"The distance between P1 and P2 is : "<<d<<endl;

    return d;
}

int main () {
    Point1 p1(1 , 0);
    Point2 p2(70, 0);
    distance(p1, p2);

    return 0;
}