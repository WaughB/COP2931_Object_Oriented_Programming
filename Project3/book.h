/**************************************************************************************************
* File: book.h
* Programmer: Brett Waugh
* Class: COP 2931
* Description: This program simulates the checking out and checking in of books from a library.
***************************************************************************************************/

#ifndef BOOK_H
#define BOOK_H

#include <iostream>
using namespace std;

class Book 
{
private:
	char title[30];
	char author[30];
	int bookID;
	int cardID;
public:
	Book();
	Book(char t[], char a[], int b); // Title, author, bookID.
	int isCheckedOut(); // If true then some integer value, if false then zero.
	int getBookID();
	void setCardID(int c); 
	void print();
};
#endif