// convertCurrency.cpp

// CSCI 1300 Fall 2022
// Author: Isabella Baird
// Recitation: 100 - Morgan Byers
// Homework 2 - Problem #5

#include <iostream>

using namespace std;

int main()
{
    // initialize variables as integers
    int bolts;
    int gold_coins;
    int gems;
    
    cout << "Enter the number of Bolts: " << endl; // obtain user input
    cin >> bolts;
    
    gems = bolts / 299;
    bolts = bolts % 299;
    /* convert bolts to largest-valued object (gems) using division and 
    the modulo function to get remainder for next calculation
    */
    
    gold_coins = bolts / 23;
    bolts = bolts % 23;
    // convert remaining bolts to gold coins using same process as above
    
    cout << gems << " Gem(s) " << gold_coins << " GoldCoin(s) " << bolts << " Bolt(s)" << endl;
    
    return 0;
    
}
