//This is a program that will do reading and writing from a file using open and eof functions
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
    // ofstream wr("sample.txt"); //connection to file thru constructor
    ofstream wr;
    wr.open("sample.txt");
    wr<<st[0]<<endl<<"Using open() and eof(), we will do file IO"
      <<endl<<"Let's write all 26 English language alphabets"
      <<endl<<"A B C D"
      <<endl<<"  E F G H" 
      <<endl<<"    I J K L"
      <<endl<<"      M N O P" 
      <<endl<<"        Q R S T"
      <<endl<<"          U V W X"
      <<endl<<"            Y Z";

    wr.close(); //Disconnecting this file with wr object to do read operation

    ifstream rd;
    rd.open("sample.txt");

    // rd>>st[1]; //Only print the first word it reads and terminates over new line or space
    // getline(rd, st[1]); //For printing full line 

    while(rd.eof() == 0){
        getline(rd, st[1]);
        cout<<st[1]<<endl;
    }

    return 0;
}