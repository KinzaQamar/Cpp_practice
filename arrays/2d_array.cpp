//This program explains the use of 2d array
//19-Dec-2023

#include <iostream>
using namespace std; 

int main() {

    int row, col;

    cout<<"Enter the number of rows of the array : ";
    cin>>row;
    cout<<"Enter the number of coloumns of the array : ";
    cin>>col;
    cout<<endl;
    
    int array[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
        {
            cout<<"Value for array["<<i<<"]["<<j<<"] : ";
            cin>>array[i][j];           
        }
    }
    
    cout<<endl;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
        {
            cout<<array[i][j]<<" ";           
        }
        cout<<endl;
    }

    cout<<endl;

    return 0;
}