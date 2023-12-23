//This program finds out the longest pattern in a character array
//20-Dec-2023

#include <iostream>
#include <string>
using namespace std;

int main () {
    string str;
    cout<<"Enter the sentence : ";
    getline(cin, str);

    int curr_len = 0, max_len = 0, i = 0, max_st = 0, curr_st = 0;

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            if (curr_len > max_len) 
                max_len = curr_len;
            curr_len = 0;
        }
        else 
            curr_len++;
        
        if (str[i] == '\0')
            break;
        
        i++;
    } 

    cout<<"The maximum length of a word in a sentence is " <<max_len<<endl;

    return 0;
}