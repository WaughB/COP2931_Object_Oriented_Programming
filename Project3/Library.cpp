/************************************************************************************************* 
* File: Library.cpp
* Programmer: Brett Waugh
* Class: COP 2931
* Description: This program simulates the checking out and checking in of books from a library. 
**************************************************************************************************/

#include <iostream>
#include <fstream>
#include "card.h"
#include "book.h"
using namespace std;

// Prototypes. 
void ShowMenu();
Card CreateCard(char name[], char phone[], int cardid);
void checkOutBook(Book books[], Card cards[], int numCards, int numBooks);
void checkInBook(Book books[], Card cards[], int numCards, int numBooks);

int main() 
{
	// Menu option. 
	int command = 0;

	// Declare an array of twenty cards.
	Card cards[20];
	int numCards = 0;

	// Declare an array of twenty books.
	Book books[20];
	int numBooks = 0;

	// Declare a file pointer and open the cards file. 
	ifstream cardInput("cards.txt");
	if (!cardInput)
	{
		cout << "ERROR: 'cards.txt' not found!" << endl;
		system("pause");
		exit(1);
	}
	cout << "Reading 'cards.txt' file..." << endl;

	char name[30] = { "" };
	char phone[15] = { "" };
	int cardid = 0;
	char junk[25] = { "" };

	// Read the next line from the file.
	cardInput.getline(name, 30, ',');

	while (cardInput)
	{
		cardInput.getline(junk, 5, ' ');
		cardInput.getline(phone, 15, ',');
		cardInput.getline(junk, 5, ' ');
		cardInput >> cardid;
		cardInput.getline(junk, 5, '\n');
		
		// Create a card and store it in the array of cards.
		cards[numCards] = CreateCard(name, phone, cardid);
		numCards++;

		// Read the next name.
		cardInput.getline(name, 30, ',');
	}

	// Declare a file pointer and open the books file. 
	ifstream bookInput("books.txt");
	if (!bookInput)
	{
		cout << "ERROR: 'books.txt' not found!" << endl;
		system("pause");
		exit(1);
	}
	cout << "Reading 'books.txt' file..." << endl;
	
	char title[30] = { "" };
	char author[30] = { "" };
	int  bookid = 0;
	char junk2[35] = { "" };

	// Read the next line from the file.
	bookInput.getline(title, 30, ',');

	while (bookInput)
	{
		bookInput.getline(junk2, 5, ' ');
		bookInput.getline(author, 30, ',');
		bookInput.getline(junk2, 5, ' ');
		bookInput >> bookid;
		bookInput.getline(junk2, 30, '\n');

		// Create a book and store it in the array of books.
		Book temp2(title, author, bookid);
		books[numBooks] = temp2;
		numBooks++;

		// Read the next title.
		bookInput.getline(title, 30, ',');
	}

	// Display main menu.
	ShowMenu();
	cin >> command;

	while(command != 0)
	{
		switch (command)
		{
		case 1: // Show all library cards. 
			for (int i = 0; i < numCards; i++)
			{
				cards[i].print();
			}
			cout << "All library cards have been displayed!" << endl;
			break;
		case 2: // Show all books.
			for (int j = 0; j < numBooks; j++)
			{
				books[j].print();
			}
			cout << "All books have been displayed!" << endl;
			break;
		case 3: // Check out a book. 
			checkOutBook(books, cards, numCards, numBooks);
			cout << "Book has been checked out!" << endl;
			break;
		case 4: // Check in a library book.
			checkInBook(books, cards, numCards, numBooks);
			cout << "Book has been checked in!" << endl;
			break;
		case 5: // Create a library card. 
			cout << "Enter your name: ";
			cin >> name;

			cout << "Enter your phone number: ";
			cin >> phone;

			cout << "Enter your card ID: ";
			cin >> cardid;
			cards[numCards] = CreateCard(name, phone, cardid);
			numCards++;
			cout << "Card has been created!" << endl;
			break;
		default: 
			cout << "ERROR: Please enter a number between zero and five. " << endl;
		}
	
	ShowMenu();
	cin >> command;
	}
	cout << "Thank you for visiting the library! Have a nice day!" << endl;
}

void ShowMenu()
{
	cout << endl;
	cout << "_________________________________________" << endl;
	cout << "|               Main Menu               |" << endl;
	cout << "| 1.     Show All Library Cards         |" << endl;
	cout << "| 2.         Show All Books             |" << endl;
	cout << "| 3.        Check out a Book            |" << endl;
	cout << "| 4.     Check in a Library Book        |" << endl;
	cout << "| 5.      Create a Library Card         |" << endl;
	cout << "| 0.        Exit the Program            |" << endl;
	cout << "_________________________________________" << endl << endl;
	
	cout << "Enter a Selection: ";
}

Card CreateCard(char name[], char phone[], int cardid)
{
	Card temp(name, phone, cardid);
	return temp;
}

void checkOutBook(Book books[], Card cards[], int numCards, int numBooks)
{
	int book = 0;
	int card = 0;
	int bookid = 0;
	int cardid = 0;

	cout << "Enter the card ID: ";
	cin >> cardid;

	// Search for cardID in cards array.
	while (card < numCards && cardid != cards[card].getCardID())
	{
		card++;
	}

	// If not found, return.
	if (card == numCards)
	{
		cout << "ERROR: Card not found. Please create card before trying again. " << endl;
		return;
	}

	// If found, does it have a book?
	if (cards[card].getBookID() != 0)
	{
		cout << "ERROR: Book already checked out with this card. Check in and try again." << endl;
		return;
	}

	cout << "Enter the book ID: ";
	cin >> bookid;

	// Search for the bookID in the books array.
	while (book < numBooks && bookid != books[book].getBookID())
	{
		book++;
	}

	// If not found, return.
	if (book == numBooks)
	{
		cout << "ERROR: Book not found. Please try again." << endl;
		return;
	}

	// If found is it checked out?
	if (books[book].getBookID() == 0)
	{
		cout << "ERROR: Book is already checked out. Please try again later. " << endl;
	}

	// Check out the book.
	books[book].setCardID(cardid);
	cards[card].setBookID(bookid);
}

void checkInBook(Book books[], Card cards[], int numCards, int numBooks)
{
	int book = 0;
	int card = 0;
	int bookid = 0;
	int cardid = 0;

	cout << "Enter the card ID: ";
	cin >> cardid;

	// Search for cardID in cards array.
	while (card < numCards && cardid != cards[card].getCardID())
	{
		card++;
	}

	// If not found, return.
	if (card == numCards)
	{
		cout << "ERROR: Card not found. Please create card before trying again. " << endl;
		return;
	}

	cout << "Enter the book ID: ";
	cin >> bookid;

	// Search for the bookID in the books array.
	while (book < numBooks && bookid != books[book].getBookID())
	{
		book++;
	}

	// If not found, return.
	if (book == numBooks)
	{
		cout << "ERROR: Book not found. Please try again." << endl;
		return;
	}

	books[book].setCardID(0);
	cards[card].setBookID(0);
}