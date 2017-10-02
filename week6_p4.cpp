/********************************
* Brett Waugh
* 30 September 2017
* Adds the given numbers together
* to get a sum. 
*********************************/

#include <iostream>
#include <iomanip>
using namespace std;

int AddUp(int);

int main()
{
	// Declarations.
	int value, result;

	// Input.
	cout << "Type an integer to add to sum...(to quit enter zero)" << endl;
	cin >> value; // Gets first value to add. 

	while (value != 0) // Continues unless value is zero.
	{
		result = AddUp(value); // Calls AddUp.
		cout << "Sum: " << result << endl; // Displays sum.
		cin >> value; // Gets next value to add. 
	}

	return 0;
}

int AddUp(int num)
{
	static int sum = 0; // Static variable for the sum. 
	sum += num; // Updates sum.
	
	return sum;
}
