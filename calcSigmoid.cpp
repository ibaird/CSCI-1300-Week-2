// calcSigmoid.cpp

// CSCI 1300 Fall 2022
// Author: Isabella Baird
// Recitation: 100 - Morgan Byers
// Homework 2 - Problem #6

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // initialize variables as doubles to compute most precise solutions
    double x;
    double sigmoid;
    
    cout << "Enter a value for x: " << endl; // obtain user input for x
    cin >> x;
    
    sigmoid = 1 / (1 + (exp(-x)));

    // plug user's x-value into sigmoid equation

    // use exp() function to raise e to the power of the negative x-value obtained (e^-x)
    
    
    cout << "The sigmoid for x=" << x << " is " << sigmoid << endl;
    
    return 0;
}
