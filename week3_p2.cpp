/**********************************
* Brett Waugh 
* 13 September 2017
* Takes three numbers from the User
* and displays the numbers sorted
* from least to greatest. 
***********************************/

#include <iostream>

using namespace std;

int main()
{
	// Declarations
	double num1, num2, num3, temp; // Three numbers. 

	// Input
	cout << "Enter a number..." << endl;
	cin >> num1; // Gets the first number. 

	cout << "Enter a number..." << endl;
	cin >> num2; // Gets the second number.

	cout << "Enter a number..." << endl;
	cin >> num3; // Gets the third number. 

	// Sorting
	if (num1 > num2) // Swaps values of num1 and num2. 
	{
		temp = num2;
		num2 = num1;
		num1 = temp; 
	}
	
	if (num2 > num3) // Swap values of num2 and num3. 
	{
		temp = num3;
		num3 = num2;
		num2 = temp;
	}

	if (num1 > num3) // Swap values of num1 and num3. 
	{
		temp = num3;
		num3 = num1;
		num1 = temp;
	}

	if (num1 > num2) // Swaps values of num1 and num2. 
	{
		temp = num2;
		num2 = num1;
		num1 = temp;
	}

	// Output in least to greatest.

	if (num1 < num2 && num1 < num3) // If no numbers are equal and sorted. 
	{
		cout << num1 << " " << num2 << " " << num3 << endl;
	}
	
	if (num1 < num2 && num1 == num3) // If num1 and num3 are equal and sorted. 
	{
		cout << num1 << " " << num3 << " " << num2 << endl;
	}

	if (num1 == num2 && num1 < num3) // If num1 and num2 are equal and sorted. 
	{
		cout << num1 << " " << num2 << " " << num3 << endl;
	}

	if (num1 == num2 && num1 == num3) // If all numbers are equal. 
	{
		cout << num1 << " " << num2 << " " << num3 << endl;
	}

	return 0;
}
