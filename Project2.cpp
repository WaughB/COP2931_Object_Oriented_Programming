/**************************************************************************
* File: Cardtrick.cpp
* Programmer: Brett Waugh
* Date: 29 October 2017
* Course: COP 2931
*
* Purpose:
* Write a program that performs a cardtrick. The program will create a
* random deck of cards, deal them out, pick them up, and determine the
* secret card.
**************************************************************************/

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

// Function prototypes
void BuildDeck(int deck[], const int size);
void PrintDeck(int deck[], const int size);
void PrintCard(int card);
void Deal(int deck[], int play[][3]);
void PickUp(int deck[] , int play[][3] , int column);
void SecretCard(int deck[]);

int main(void)
{

	/* Declare and initialize variables. */
	int column = 0, i = 0;
	int playAgain = 0;
	char peek = 'y';
	char name[20]; // Assumes the name is no longer than 20 characters. 

	/* Declare a fifty-two element array of integers to be used as the deck of cards. */
	int deck[52] = { 0 };

	/* Declare a seven by three array to receive the cards dealt to play the trick. */
	int play[7][3] = { 0 };

	/* Generate a random seed for the random number generator. */
	srand(time(0));

	/* Opening message.  Ask the player for his/her name */
	cout << "Hello, I am a really tricky computer program and " << endl
		<< "I can even perform a card trick.  Here's how." << endl
		<< "To begin the card trick type in your name: ";
	cin >> name;

	/* Capitalize the first letter of the person's name. */
	if (name[0] >= 'a' && name[0] <= 'z') // If the character is a lower case letter.
	{
		name[0] = name[0] - 32; // Makes a lower case letter an upper case letter.
	}

	cout << "Thank you " << name << endl; // Manners maketh the man. 

	do
	{
		/* Build the deck */
		BuildDeck(deck, 52);

		/* Ask if the player wants to see the entire deck. If so, print it out. */
		cout << "Ok " << name << ", first things first.  Do you want to see what " << endl
			<< "the deck of cards looks like (y/n)? ";
		cin >> peek;

		if (peek = 'y')
		{
			PrintDeck(deck, 52);
		}

		cout << endl << name << " pick a card and remember it..." << endl;

		/* Begin the card trick loop. */
		for (i = 0; i < 3; i++)
		{
			/* Begin the trick by calling the function to deal out the first twenty-one cards. */
			Deal(deck, play);

			/* Include error checking for entering which column. */
			do
			{
				/* Ask the player to pick a card and identify the column where the card is. */
				cout << endl << "Which column is your card in (0, 1, or 2)?: ";
				cin >> column;
			} while (column < 0 || column > 2);

			/* Pick up the cards, by column, with the selected column second. */
			PickUp(deck, play, column);

		}

		/* Display the top ten cards, then reveal the secret card. */
		SecretCard(deck);

		/* If the player wants to play again. */
		cout << name << ", would you like to play again (1 = yes, 0 = no)? ";
		cin >> playAgain;
	} while (playAgain == 1);

	/* Exiting message. */
	cout << endl << endl << "Thank you for playing the card trick!" << endl;
	return 0;
} // End of main. 

/* Given in ' Arrays Part 2' . */
void BuildDeck(int deck[], const int size)
{
	int used[52] = { 0 };
	int card = 0, i = 0;

	/* Generate cards until the deck is full of integers. */
	while (i < size)
	{
		/* Generate a random number between zero and fifty-one. */
		card = rand() % 52;

		/* Check the used array at the position of the card.
		If zero, add the card and set the used location to one. If one, generate another number. */
		if (used[card] == 0)
		{
			used[card] = 1; // To update the value to used.
			deck[i] = card;
			i++;
		}
	}
}

/* Completed on 27 Oct. */
void PrintDeck(int deck[], const int size)
{
	int i;

	/* Print out each card in the deck */
	for (i = 0; i < size; i++)
	{
		PrintCard(deck[i]);
		cout << endl;
	}

	cout << "That is the entire deck..." << endl;
}

/* Given in 'Project 2 - Deal()' . */
void Deal(int deck[], int play[][3])
{
	int row = 0, col = 0, card = 0;

	/* Deals cards by passing addresses of cardvalues from
	the deck array to the play array.                   */
	cout << endl;
	cout << "   Column 0           Column 1           Column 2" << endl;
	cout << "=======================================================" << endl;

	for (row = 0; row < 7; row++)
	{
		for (col = 0; col < 3; col++)
		{
			play[row][col] = deck[card];
			PrintCard(deck[card]);
			card++;
		}
		cout << endl;
	}
}

/* Given in 'Project 2 - PrintCard()' . */
void PrintCard(int card)
{
	int rank = 0;
	int suit = 0;

	// Determine the rank of the card and print it out i.e. Queen
	rank = card % 13;


	// Determine the suit of the card and print it out i.e. of Clubs
	suit = card / 13;

	switch (rank)
	{
	case 0:
		cout << " King";
		break;

	case 1:
		cout << "  Ace";
		break;

	case 11:
		cout << " Jack";
		break;

	case 12:
		cout << "Queen";
		break;

	default:
		cout << setw(5)<< rank;
	}

	switch (suit)
	{
	case 0:
		cout << " of Clubs\t\t";
		break;

	case 1:
		cout << " of Hearts\t\t";
		break;

	case 2:
		cout << " of Diamonds\t";
		break;

	case 3:
		cout << " of Spades\t\t";
		break;

	default:
		cout << " ---ERROR IN SUIT ASSIGNMENT--- ";
	}
}

void PickUp(int deck[], int play[][3], int column)
{
	int card = 0, row = 0;

	if (column == 1)
	{
		for (int i = 0; i < 7; i++)
		{
			deck[i] = play[row][0];
			row++;
		}
		row = 0;
		for (int i = 7; i < 14; i++)
		{
			deck[i] = play[row][1];
			row++;
		}
		row = 0;
		for (int i = 14; i < 21; i++)
		{
			deck[i] = play[row][2];
			row++;
		}

	}

	else if (column == 2)
	{
		for (int i = 0; i < 7; i++)
		{
			deck[i] = play[row][0];
			row++;
		}
		row = 0;
		for (int i = 7; i < 14; i++)
		{
			deck[i] = play[row][2];
			row++;
		}
		row = 0;
		for (int i = 14; i < 21; i++)
		{
			deck[i] = play[row][1];
			row++;
		}

	}
	else if (column == 0)
	{
		for (int i = 0; i < 7; i++)
		{
			deck[i] = play[row][1];
			row++;
		}
		row = 0;
		for (int i = 7; i < 14; i++)
		{
			deck[i] = play[row][0];
			row++;
		}
		row = 0;
		for (int i = 14; i < 21; i++)
		{
			deck[i] = play[row][2];
			row++;
		}

	}
}

/* Given from beginning. */
void SecretCard(int deck[])
{
	int card = 0;

	cout << endl << "Finding secret card...";
	for (card = 0; card < 10; card++)
	{
		PrintCard(deck[card]);
		cout << endl;
	}

	cout << endl << "Your secret card is: ";
	PrintCard(deck[card]);
	cout << endl;
}