/************************
* Brett Waugh		
* 24 September 2017	
* Takes in a number
* then returns the number
* in reverse.
*************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int reverse(int); // Prototyp of function. 

int main()
{
	// Declarations.
	int original; // Placeholder for entered number. 

	// Input.
	cout << "Enter the number to reverse: " << endl;
	cin >> original; 

	// Output
	cout << "Number reversed is: " << reverse(original) << endl; // Displays the number in reverse. 

	return 0;
} 

// A function that returns the smallest of the three numbers entered.
int reverse(int number)
{
	// Declarations.
	int remainder, reversed =0;

	// Calculation. 
	while (number != 0) // Uses mod to get each number. 
	{
		remainder = number % 10;
		reversed = reversed * 10 + remainder;
		number /= 10;
	}

	return reversed; // Returns the number in reverse. 
}
