/**********************************
* Brett Waugh 
* 13 September 2017
* Displays a pyramid of astericks.
***********************************/

#include <iostream>

using namespace std;

int main()
{
	// Declarations
	int star_number =4;

	// Output
	for (int i = 0; i < star_number; i++) 
	{
		for (int j = 0; j-1 < i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	return 0;
}
