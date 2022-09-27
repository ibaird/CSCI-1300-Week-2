// helloYou.cpp

// CSCI 1300 Fall 2022
// Author: Isabella Baird
// Recitation: 100 - Morgan Byers
// Homework 2 - Problem #2

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    
    cout << "Please enter your name below: " << name << endl; // obtaining user input
    
    cin >> name;
    
    cout << "Hello, " << name << "!" << endl;
    
    return 0;
}
