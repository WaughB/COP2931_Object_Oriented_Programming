/************************************************************************************************ 
* File: card.h
* Programmer: Brett Waugh
* Class: COP 2931
* Description: This program simulates the checking out and checking in of books from a library.
**************************************************************************************************/

#ifndef CARD_H
#define CARD_H

#include <iostream>
using namespace std;

class Card 
{
private:
	char name[30];
	char phone[15];
	int cardID;
	int bookID;
public:
	Card(); // Default constructor.
	Card(char n[], char p[], int c);
	int getCardID();
	int getBookID();
	void setBookID(int b);
	void print();
};
#endif