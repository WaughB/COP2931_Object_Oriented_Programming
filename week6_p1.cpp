/********************************
* Brett Waugh
* 30 September 2017
* Determines the greatest common
* denominator of two integers.
*********************************/

#include <iostream>
#include <iomanip>
using namespace std;

int GCD(int, int);

int main()
{
	// Declarations. 
	int num1, num2; 

	// Input.
	cout << "Finds the greatest common denominator of two non-zero integers." << endl; // Heading.

	cout << "What is the first number?" << endl; // Gets the first integer.
	cin >> num1;

	cout << "What is the second number?" << endl; // Gets the second integer. 
	cin >> num2;

	// Output.
	cout << "The greatest common divisor is " << GCD(num1, num2) << endl; // Calls function and displays results. 

	return 0;
}

int GCD(int first, int second)
{
	int divisor=1; // Always a common multiple of zero. 
	
	for (int i = 1; i < first+1; i++)
	{
		if (first % i == 0 && second % i == 0)
		{
			divisor = i; // Assigns divisor to that value. 
		}
		else // If there is no other common multiple. 
		{
			divisor = 1; // Always a common multiple of zero. 
		}
	}

	return divisor;
}
