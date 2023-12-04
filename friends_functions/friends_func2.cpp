//This program explains the example of friend function
//04-Dec-2023

#include <iostream>
using namespace std;

//Forward Declaration
class Table;

class Set_Num {

    int n;
    //friend int Table :: mul (Set_Num); //Use this statment when you only need to access private property outside the class
    friend class Table; //For accessing private methods or when more functions of other classes 
                        //wants to access the private property of the Set_Num class

    void setnum (int &n) {
        cout<<"Enter any number : ";
        cin>>n;
        cout<<endl;
    } 
};

class Table {

    public:
        void mul (Set_Num num);
};

void Table :: mul (Set_Num num) {
    num.setnum(num.n);

    for (int i = 1; i <= 10; i++)
    {
        cout<<""<<num.n<<" * "<<i<<" : "<<num.n*i<<endl;
    }
};

int main () {
    Set_Num num;
    Table t;
    t.mul(num);
    return 0;
}