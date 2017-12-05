/************************************************************************************************
* File: book.cpp
* Programmer: Brett Waugh
* Class: COP 2931
* Description: This program simulates the checking out and checking in of books from a library.
**************************************************************************************************/
#include <iostream>
#include <iomanip>
#include "book.h"

using namespace std;

Book::Book()
{
	bookID = 0;
	cardID = 0;
	title[0] = '\0';
	author[0] = '\0';
}

Book::Book(char t[], char a[], int b) // Title, author, bookID.
{
	bookID = b;
	cardID = 0;
	strcpy_s(title, t);
	strcpy_s(author, a);
}

int Book::isCheckedOut() // If true then some integer value, if false then zero.
{
	return cardID;
}

int Book::getBookID()
{
	return bookID;
}

void Book::setCardID(int c)
{
	cardID = c;
}

void Book::print()
{
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Book ID: " << bookID << endl << endl;
}