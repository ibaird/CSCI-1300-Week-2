#include <iostream>
using namespace std;

// program to check if a number is greater than 0

int main()
{
    int num = 0;
    cout << "Enter a number: ";
    cin >> num;

    if(num > 0) // no semicolon
    {
        cout << num << " greater than 0" << endl;
    }
    else // no paranthesis, no semicolon
    {
        cout << num << " less than 0" << endl;
    }

    // program to check if class is over

    double time = 0; // initialize to 0 to avoid garbage later
    time = 9.47; // can also accept user input 

    if(time >= 9.55)
    {
        cout << "Yay, class is over!" << endl;
     }
    else
    {
        cout << " Booooo" << endl;
    }

    // can also have "else if" to add as many conditions as you want, but end with an else to catch all other values
    // doesn't have to end in an else (won't give a compile time error), but it is a good idea to end with else

    //using multiple "if" statements will evaluate and print different results (if results are false, will not print statement)
    // if/if else will only execute one funciton (this is correct if multiple coditions depend on each other)

    // have last else statement an informative statement (ie. we don't have that option, try again")

    // if you want to nest conditional (if) statements, you must create a new cin variable
    return 0;
}
