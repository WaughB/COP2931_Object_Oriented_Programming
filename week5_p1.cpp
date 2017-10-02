/*********************
* Brett Waugh		
* 24 September 2017	
* Returns the minimum
* of three numbers.
***********************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double smallest(double, double, double);

int main()
{
	// Declarations.
	double num1, num2, num3;

	// Input.
	cout << "What are your three numbers? (Leave space between each one)" << endl;
	cin >> num1 >> num2 >> num3;

	// Output.
	cout << "The lowest number is: " << smallest(num1, num2, num3) << endl;

	return 0;
} 

// A function that returns the smallest of the three numbers entered.
double smallest(double first, double second, double third)
{
	double minimum = first; // Gives minimum a default value to test against.

	if (second < minimum) // Compares to the second value.
		minimum = second;

	if (third < minimum) // Compares to the third value.
		minimum = third;

	return minimum; // Returns the lowest number. 
}
