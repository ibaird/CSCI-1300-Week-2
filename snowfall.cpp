// snowfall.cpp

// CSCI 1300 Fall 2022
// Author: Isabella Baird
// Recitation: 100 - Morgan Byers
// Homework 2 - Problem #4

#include <iostream>

using namespace std;

int main()
{
    // initializing varialbes as integers
    int breck_initial = 25;
    int vail_initial = 28;
    int copper_initial = 40;
    
    int days;
    int breck_final;
    int vail_final;
    int copper_final;
    
    cout << "How many days in the future would you like a prediction for?" << endl; // obtaining user input
    
    cin >> days;
    
    breck_final = breck_initial + ((days * 10) - (5 * days));
    vail_final = vail_initial + ((days * 14) - (2 * days));
    copper_final = copper_initial + ((days * 5) - (3 * days));

    // use given snowfall and melt rates to caluculate rates for future days
    
    cout << "Breckenridge will have " << breck_final << " inches, Vail will have " << vail_final << " inches, and Copper Mountain will have " << copper_final << " inches." << endl;
    
    return 0;
    
    
}
