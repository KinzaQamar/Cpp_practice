//This is a basic program that will do reading and writing from a file
//11-Dec-2023

// These are some useful classes for working with files in C++

// 1. fstreambase
// 2. ifstream --> derived from fstreambase
// 3. ofstream --> derived from fstreambase

#include<iostream>
#include<fstream>

using namespace std;

int main() {
    string st[2];

    st[0] = "Welcome to basic file operations program";
    ofstream wr("sample.txt");
    wr<<st[0];
    wr.close(); //Disconnecting this file with wr object to do read operation

    ifstream rd("sample.txt");
    // rd>>st[1]; //Only print the first word it reads and terminates over new line or space
    getline(rd, st[1]); //For printing full line 
    cout<<st[1]<<endl;

    return 0;
}