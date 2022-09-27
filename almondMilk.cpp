// almondMilk.cpp

// CSCI 1300 Fall 2022
// Author: Isabella Baird
// Recitation: 100 - Morgan Byers
// Homework 2 - Problem #3

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // initializing variables
    double length;
    double height;
    double volume;
    double ounces;
    
    cout << "What is the side length of the base of the carton in inches?" << endl; // obtaining user input
    
    cin >> length;
    
    
    cout << "What is the height of the carton in inches?" << endl; // obtaining user input
    
    cin >> height;
    
    
    volume = length * length * height; // computing carton's volume using user inputs in the formula for volume 
    
    ounces = volume * 0.55; // converting volume to ounces
    
    
    cout << fixed << setprecision(1) << "The carton has a volume of " << ounces << " ounces." << endl;
    
    return 0;
}
