/********************
* Brett Waugh		*
* 24 September 2017	*
* A game of craps.	*
********************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDice();

int main()
{
	// Variable to see if keep playing. 
	int keepPlaying = 1;

	// Variables to keep track of wins and losses.
	int win = 0;
	int loss = 0;

	do {
		// Enumeration with constants that represent game status.
		enum Status { CONTINUE, WON, LOST }; // All caps in constants. 

		int myPoint; // Point if no win or loss first roll.
		Status gameStatus; // Can contain CONTINUE, WON, or LOST.

						   // Randomize random number generator using current time,
		srand(time(0));

		int sumOfDice = rollDice(); // First roll of the dice.

									// Determines game status and point, based on first roll.
		switch (sumOfDice)
		{
		case 7: // Win with seven on first roll.
		case 11: // Win with eleven on first roll.
			gameStatus = WON;
			break;
		case 2: // Lose with two on first roll.
		case 3: // Lose with three on first roll.
		case 12: // Lose with twelve on first roll.
			gameStatus = LOST;
			break;
		default: // Did not win or lose, so remember point.
			gameStatus = CONTINUE; // Game is not over. 
			myPoint = sumOfDice; // Remember the point. 
			cout << "Point is " << myPoint << "." << endl;
			break; // Optional at end of switch.
		} // End of switch.

		  // While game is not complete. 
		while (gameStatus == CONTINUE) // Not WON or LOST
		{
			sumOfDice = rollDice();

			// Determine game status.
			if (sumOfDice == myPoint) // Win by making point. 
				gameStatus = WON;
			else
				if (sumOfDice == 7) // Lose by rolling seven before point. 
					gameStatus = LOST;
		} // End while.

		  // Display won or lost message.
		if (gameStatus == WON)
		{
			cout << "Player wins." << endl;
			win++;
		}
		else
		{
			cout << "Player loses." << endl;
			loss++;
		}

		cout << "Would you like to play again?" << endl;
		cin >> keepPlaying;

	} while (keepPlaying == 1);

	cout << "Results" << endl;
	cout << "W" << win << "\tL" << loss << endl;
	cout << "Thank you for playing.";

} // End of main. 

  // Rolls dice, calculates the sum and displays results.
int rollDice()
{
	// Picks random die values. 
	int die1 = 1 + rand() % 6; // First die roll.
	int die2 = 1 + rand() % 6; // Second die roll.

	int sum = die1 + die2; // Compute sum of die values. 

						   // Display results of this roll.	
	cout << "Player rolled: " << die1 << ", " << die2
		<< "\n" << "Sum: " << sum << endl;
	return sum; // Returns the sum of the dice.
} // End of function rollDice.
