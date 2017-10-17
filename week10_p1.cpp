/************************************************
* Brett Waugh
* 17 October 2017
* Fills an array of characters using pointers.
*************************************************/
#include <iostream>

using namespace std;

void setValue(int *, int *);

int main()
{
	// Declarations.
	const int size = 10; // Size of the array will be ten.
	
	int list[size] = {0}; // Initializes the array with ten values.

	int *points = list; // Creates some pointer, points, that points to the beginning of the array. 

	int temp;

	// Input. 
	for (int i = 0; i < size; i++) // Gets the input, calls function setValue. 
	{
		cout << "Enter a number: ";
		cin >> temp;
		setValue(&points[i],&temp);
	}

	// Output.
	for (int j = 0; j < size; j++) // Prints the array using pointer subscripting. 
	{
		cout << points[j] << endl;
	}

	return 0;
}

/* Sets the passed value to an element in the array. */
void setValue(int *p1, int *p2)
{
	*p1 = *p2;
}