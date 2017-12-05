#include <iostream>
#include <iomanip>
#include "Actions.h"

using namespace std;

Actions::Actions()
{
	int floorNumber = 0;
	bool downwards = false;
	bool upwards = true;
}

void Actions::goUp()
{
	if (floorNumber == 0)
	{
		cout << "First floor." << endl;
		floorNumber = floorNumber + 1;
	}
	else if (floorNumber == 1)
	{
		cout << "Second floor." << endl;
		floorNumber = floorNumber +1;
	}
	else if (floorNumber == 2)
	{
		cout << "Third floor" << endl;
		upwards = false;
		downwards = true;
	}
	else
	{
		cout << "Not possible." << endl;
	}
}

void Actions::goDown()
{
	if (floorNumber == 0)
	{
		cout << "First floor." << endl;
		upwards = true;
		downwards = false;
	}
	else if (floorNumber == 1)
	{
		cout << "First floor." << endl;
		floorNumber = floorNumber -1;
	}
	else if (floorNumber == 2)
	{
		cout << "Second floor." << endl;
		floorNumber= floorNumber -1;
	}
	else
	{
		cout << "Not possible." << endl;
	}
}