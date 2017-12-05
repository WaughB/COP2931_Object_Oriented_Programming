/************************************************************************************************
* File: card.cpp
* Programmer: Brett Waugh
* Class: COP 2931
* Description: This program simulates the checking out and checking in of books from a library.
**************************************************************************************************/
#include <iostream>
#include <iomanip>
#include "card.h"

using namespace std;

Card::Card()
{
	name[0] = '\0';
	phone[0] = '\0';
	bookID = 0;
	cardID = 0;
}

Card::Card(char n[], char p[], int c) // Title, author, cardID.
{
	bookID = 0;
	cardID = c;
	strcpy_s(name, n);
	strcpy_s(phone, p);
}

int Card::getCardID()
{
	return cardID;
}

int Card::getBookID()
{
	return bookID;
}

void Card::setBookID(int b)
{
	bookID = b;
}

void Card::print()
{
	cout << "Card ID: " << cardID << endl;
	cout << "Name: "  << name << endl;
	cout << "Phone Number: " << phone << endl;
	cout << "Book ID: " << bookID << endl << endl;
}