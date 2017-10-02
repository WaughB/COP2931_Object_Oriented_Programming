/*********************************
* Brett Waugh
* 30 September 2017
* Determines the Fibonacci number
* at a given place in the Fibonacci
* Series
***********************************/

#include <iostream>
#include <iomanip>
using namespace std;

int Fibonacci(int);

int main()
{
	// Declarations.
	int repetition;

	// Input.
	cout << "Which Fibonacci number would you like?" << endl;
	cin >> repetition; // Gets which number in the sequence the User wants.

	// Output.
	cout << "Fibonacci Numbers" << endl; // Header.
	cout << Fibonacci(repetition) << endl; // Calls Fibonacci function. 

	return 0;
}

int Fibonacci(int count) // Recursively calculates the Fibonacci number.
{
	if (count == 0) 
		return 0;

	if (count == 1)
		return 1;

	return Fibonacci(count -2) + Fibonacci(count -1); 
}
