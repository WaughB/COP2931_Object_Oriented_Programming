/********************************
* Brett Waugh
* 2 September 2017
* Determines the letter grade of
* given percentage between zero
* and one hundred. 
*********************************/
#include <iostream>

using namespace std;

int main()
{
    // Declarations
    double grade; // Variable to test.
    
    // Input
    cout << "Please enter the grade to check.\n"; // Asks for grade.
    
    cin >> grade;
    
    // Sort
    // Sorting works because once it falls into an acceptable range
    // it will break from the loop. There is a catch at the top and bottom
    // to make sure the grade is in range. 
    if (grade > 100) // Checking the range.
        cout << "Not valid entry.\n";
    else if (grade >= 90) // A range. 
        cout << "A\n";
    else if (grade >= 80) // B range. 
        cout << "B\n";
    else if (grade >= 70) // C range.
        cout << "C\n";
    else if (grade >= 60) // D range. 
        cout << "D\n";
    else if (grade < 60 && grade >= 0) // F range.
        cout << "F\n";
    else
        cout << "Not valid entry.\n"; // Assumes out of range. 
        
    return 0;
}
