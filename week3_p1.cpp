/**********************************
* Brett Waugh 
* 13 September 2017
* Calculates the average grade for
* a class of no more than ten 
* students. 
***********************************/

#include <iostream>

using namespace std;

int main()
{
	// Declarations
	int students =0; // Number of students.
	double grade[10]; // Assumes a class of ten students.
	double average_grade; // Holders for the class average.
	double temp = 0; // Holder for the temp variable. 
	double sum_grade = 0; // Holder for the sum of class grades. 

	// Input
	while (temp != -1 && students < 10) // Checks to make sure sentinel is not triggered and class isn't full. 
	{
		cout << "Enter the grade of the student." << endl;
		cin >> temp;
		grade[students] = temp; // Assigns the holding variable to the grade at that students number.
		students++; // Increments students so that 
	}
	
	if (temp == -1)
	{
		students--; // To account for the break.
	}

	// Calculation
	for (int i = 0; i < students; i++)
	{
		sum_grade = grade[i] + sum_grade; // Summation of grade in the class. 
	}

	average_grade = sum_grade / students; // Calculates the average grade for the class.

	// Output
	cout << "The class average is " << average_grade << endl; // Displays the class average. 
	cout << "The number of students in the class is " << students << endl; // Displays the number of students in the class. 

	return 0;
}
