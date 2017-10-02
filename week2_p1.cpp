/********************************
* Brett Waugh
* 2 September 2017
* Takes in two numbers and
* determines if they are equal,
* less than, or greater than
* each other. 
*********************************/
#include <iostream>

using namespace std;

int main()
{
    // Declarations
    double number1, number2; // Number type not specified. 
    
    // Input
    cout << "Please enter the first number...\n";
    cin >> number1;
    
    cout << "Please enter the second value...\n";
    cin >> number2;
    
    // Calculation
    
    if (number1 > number2) // If the first is greater than the second. 
        {
            cout << "The first number is greater than the second.\n";
        }
    else if (number1 < number2) // If the first is less than the second.
        {
            cout << "The first number is smaller than the second.\n";
        }
    else // If both numbers are equal. 
        {
            cout << "The two numbers are equal.\n";
        }
        
    return 0;
}
