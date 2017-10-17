/************************************************
* Brett Waugh
* 17 October 2017
* Returns an uppercase version of a message.
*************************************************/
#include <iostream>

using namespace std;

int main()
{
	// Declarations.
	char dream[] = { "Take me to Clearwater beach!" }; // Stored as "Take me to Clearwater beach!\0"

	// Changes the lower case value to an upper case value. 
	for (int i = 0; i < strlen(dream); i++) // Cycles through the length of the array.
	{
		if (dream[i] >= 'a' && dream[i] <= 'z') // If the character is a lower case letter.
		{
			dream[i] = dream[i] - 32; // Makes a lower case letter an upper case letter.
		}
		else // If the character is not a lower case letter.
		{
			continue;
		}
	}

	// Output.
	cout << dream << endl; // Prints the capitalized version of the array. 

	return 0;
}