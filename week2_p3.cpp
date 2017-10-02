/********************************
* Brett Waugh
* 2 September 2017
* Calculates the average of 
* three numbers. 
*********************************/
#include <iostream>

using namespace std;

int main()
{
    // Declarations
    double number1, number2, number3;
    double sum, average; // Placeholders for the sum and average. 
    
    // Input
    cout << "Enter the first number...\n";
    cin >> number1; // Gets the first number. 
    
    cout << "Enter the second number...\n";
    cin >> number2; // Gets the second number. 
    
    cout << "Enter the third number...\n";
    cin >> number3; // Gets the third number.
    
    // Calculations
    
    sum = number1 + number2 + number3; // Calculates the sum. 
    average = sum / 3; // Calculates the average. 
    
    cout << "The average of the three numbers is " << average << endl;

    return 0;
}
