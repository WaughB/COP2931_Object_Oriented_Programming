/*******************************************
* Brett Waugh
* 14 November 2017
* Week 11 Objects and Classes
* Moves an elevator between three floors
********************************************/

#include <iostream>
#include <iomanip>
#include "Actions.h"

using namespace std;

int main()
{
	// Declarations.
	Actions start;				// Actions object.

	int currentFloor = start.floorNumber;

	cout << "Starting floor: " << currentFloor << endl;

	// Output. 
	start.goUp();		// Go to second floor.

	start.goUp();		// Go to third floor.

	start.goUp();		// Attempt to go to fourth floor.

	start.goDown();		// Go to second floor.

	start.goDown();		// Go to first floor.

	return 0;
}