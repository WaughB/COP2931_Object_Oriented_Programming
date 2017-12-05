/*************************************************
* Brett Waugh
* 14 November 2017
* Week 11 Objects and Classes
* An object oriented approach to handeling time.  
**************************************************/
#include <iostream>
#include <iomanip>
#include "Time.h"

using namespace std;

int main()
{
	// Declarations.  
	Time lunch(12, 30, 0);		// Time object with all three values. 
	Time dinner(17, 30);		// Time object with only two values. 

	// New lunch time.
	lunch.setHour(10); // Changes the lunch hour.
	lunch.setMinute(57); // Changes the lunch minute.

	// New dinner time.
	dinner.setHour(16); // Changes the dinner hour
	dinner.setMinute(15); // Changes the dinner minute.

	// Output.
	lunch.printStandard();
	lunch.printMilitary();

	dinner.printStandard();
	dinner.printMilitary();

	return 0;
}
