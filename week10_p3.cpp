/************************************************
* Brett Waugh
* 17 October 2017
* Swaps two integer values using pointers.
*************************************************/
#include <iostream>

using namespace std;

void SwapIntegers(int *p1, int *p2);

int main()
{
	// Declarations.
	int first, second; // Creates two integers. 

	// Input.
	cout << "Please enter the first integer: ";
	cin >> first;

	cout << "Please enter the second integer: ";
	cin >> second;

	// Function call.
	SwapIntegers(&first, &second);

	// Output.
	cout << "First value is now: " << first << endl; // Prints first value.
	cout << "Second value is now: " << second << endl; // Prints second value. 

	return 0;
}

/* Swaps the two integers using pointers. */
void SwapIntegers(int *p1, int *p2)
{
	int temp; // Variable used to help transfer values.

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}