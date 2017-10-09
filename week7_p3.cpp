/***********************************************************************
* Brett Waugh
* 9 October 2017
* Rolls two die a number of times and displays the results as a table.
************************************************************************/
#include <iostream>

using namespace std;

int rollDie();

int main()
{
	// Declarations. 
	int dieRolls[7][7] = { 0 };

	int numberOfRolls=0;

	// Input.
	cout << "How many times would you like to roll the dice? ";
	cin >> numberOfRolls; // Gets how many rolls the User wants. 

	// Rolling dice.
	for (int i = 0; i < numberOfRolls; i++)
	{
		dieRolls[rollDie()][rollDie()]++; // Rolls the dice, adds one to that spot.
	}

	// Output.
	for (int j = 1; j < 7; j++) // Adjusts column.
	{
			for (int k = 1; k < 7; k++) // Adjusts row.
			{
				cout << dieRolls[j][k] << "\t";
			}
			cout << endl;
	}

	return 0;
}

/* Rolls a die. */
int rollDie() 
{
	return 1 + rand() % 6; // Returns a random number between one and six. 
}