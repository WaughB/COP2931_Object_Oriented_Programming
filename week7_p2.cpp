/****************************************************************
* Brett Waugh
* 9 October 2017
* Program will determine if two arrays have the same contents.
*****************************************************************/
#include <iostream>
#include <array>

using namespace std;

double calcAvg(double[],int);

int main()
{
	// Declarations. 
	double grades[10], average; // Array for the class and the class average. 

	int below =0, above=0; // How many students are below the average, how many students are above or equal to the average.

	int arraySize = sizeof(grades) / sizeof(grades[0]); // Determines the size of the array.
	
	// Input.
	cout << "Please enter the grades for the class." << endl; // Header.

	for (int i = 0; i < arraySize; i++) // Cycles through to get all the grades. 
	{
		cout << "Student " << i+1 << " : ";
		cin >> grades[i];
	}

	// Calls calcAvg function.
	average = calcAvg(grades, arraySize);

	// Get above or below amounts.
	for (int j = 0; j < arraySize; j++)
	{
		if (grades[j] < average)
			below++;
		else
			above++;
	}

	// Output.
	cout << "--------------------------------------------------------------------------------" << endl;
	cout << "Class average is " << average << "%." << endl; // Displays class average.

	cout << "There are " << below << " students below the average and "
		<< above << " students equal to or above average." << endl; // Displays the below, equal, above amounts. 

	for (int k = 0; k < arraySize; k++) // Displays the whole class information. 
	{
		cout << "Student " << k+1 << ": " << grades[k] << "%." << endl;
	}

	return 0;
}

/* Calculates the class average. */
double calcAvg(double input[], int size) 
{
	double sum=0.0;

	for (int i = 0; i < size; i++)
	{
		sum += input[i];
	}

	return sum / size;
}