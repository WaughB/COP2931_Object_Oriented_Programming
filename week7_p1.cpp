/****************************************************************
* Brett Waugh
* 9 October 2017
* Program will determine if two arrays have the same contents.
*****************************************************************/
#include <iostream>
#include <array>

using namespace std;

int main()
{
	// Declarations. 
	double list1[10], list2[10];

	double temp1, temp2;

	int arraySize = sizeof(list1) / sizeof(list1[0]); // Determines the size of the array.

	// Input.
	cout << "---First Array---" << endl;
	for (int i = 0; i < arraySize; i++) // Cycles through list1[] to get all elements. 
	{
		cout << "Element " << i+1 << ": ";
		cin >> list1[i];
	}

	cout << "---Second Array---" << endl;
	for (int i = 0; i < arraySize; i++) // Cycles through list2[] to get all elements. 
	{
		cout << "Element " << i+1 << ": ";
		cin >> list2[i];
	}
	
	// Sort the first array. 
	for (int i = 0; i < arraySize; i++)
	{
		for (int j = 0; j < arraySize-1; j++)  
		{
			if (list1[j] < list1[i]) 
			{
				temp1 = list1[i];
				list1[i] = list1[j];
				list1[j] = temp1;
			}
		} 
	} // First array has been sorted.

	// Sort the second array.
	for (int i = 0; i < arraySize; i++)
	{
		for (int j = 0; j < arraySize-1; j++)
		{
			if (list2[j] < list2[i])
			{
				temp2 = list2[i];
				list2[i] = list2[j];
				list2[j] = temp2;
			}
		}
	} // Second array has been sorted.

	// Checks to see if arrays are identical.
	for (int h = 0; h < arraySize; h++)
	{
		if (list1[h] == list2[h])
			continue;
		else
		{
			// At least one element was did not match, arrays are not identical. 
			cout << "Arrays are not identical." << endl;
			return 0;
		}
	}
	// All elements matched, arrays are identical.
	cout << "Arrays are identical." << endl;
	return 0;
}