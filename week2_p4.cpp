/********************************
* Brett Waugh
* 2 September 2017
* Determines age based upon a set 
* date of 3 September 2017. 
*********************************/
#include <iostream>

using namespace std;

int main()
{
    // Declarations
    int year, month, day, birthDate, age;
    int today = 20170903; // Assumes today is due date. 
    
    // Input
    cout << "What year?\n"; // Gets year.
    cin >> year;
    
    cout << "What month?\n"; // Gets month.
    cin >> month;
    
    cout << "What day?\n"; // Gets day. 
    cin >> day;
    
    // Formatting
    year = year * 10000; // To move to YYYY0000 
    month = month * 100; // To move to MM00
    
    birthDate = year + month + day; // To get into YYYYMMDD format. 
    
    // Calculations
    
    age = (today - birthDate) / 10000; // Because of the formatting. 
    
    cout << "Age is " << age;
    
    return 0;
}
