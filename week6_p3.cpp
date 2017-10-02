/******************************
* Brett Waugh
* 30 September 2017
* Swaps two integers.
*******************************/

#include <iostream>
#include <iomanip>
using namespace std;

void swap(int&, int&);

int main()
{
	// Declarations.
	int num1, num2;

	// Input.
	cout << "Enter the first integer..." << endl;
	cin >> num1; // Gets the first integer.

	cout << "Enter the second integer..." << endl;
	cin >> num2; // Gets the second integer.

	// Output.
	swap(num1, num2); // Calls the function swap. 
	
	cout << "First integer is now " << num1 << endl; // Displays what was the second integer.
	cout << "Second integer is now " << num2 << endl; // Displays what was the first integer. 

	return 0;
}

void swap(int &first, int &second)
{
	int hold = first; // Creates a temp variable and assigns the first integer to it. 
	first = second; // Gives the value of the second variable to the first. 
	second = hold; // The first value is now the second integer. 
}
