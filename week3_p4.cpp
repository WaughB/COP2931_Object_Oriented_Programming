/**********************************
* Brett Waugh 
* 13 September 2017
* Creates a chart from zero to 
* one hundred degrees Fahrenheit
* with the corresponding tempeture
* in Celsuis.
***********************************/

#include <iostream>

using namespace std;

int main()
{
	// Declarations
	double fahr, celsuis; // Converting from Fahrenheit to Celsuis.

	cout << "Fahrenheit\t\t\t\tCelsuis" << endl; // Formatting for table header. 

	for (int fahr = 0; fahr < 100+1; fahr++) // From 0 too 100 degrees Fahrenheit. 
	{
		cout << fahr << "\t\t\t\t"; // Displays the tempeture in Fahrenheit and formats. 
		celsuis = (fahr - 32) / 1.8; // Calculates the degrees in Celsuis.
		cout << celsuis << endl; // Prints degrees in Celsuis. 
	}

	return 0;
}
