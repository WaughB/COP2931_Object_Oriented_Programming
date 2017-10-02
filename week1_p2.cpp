/**************************************
/   Brett Waugh
/   25 August 2017
/   Takes a letter from the User and
/	returns the letter after it. 
**************************************/
#include <iostream>

using namespace std;

int main()
{
    // Declarations
    char letter; // Letter was specified in instructions. 
    
    // Input
    cout<<"Please enter a letter...\n"; // Asks User for integer. 
    
    cin>>letter; // Gets input and assigns to variable. 
    
    // Addition of one to the variable. 
    letter++;
    
    // Output
    cout<<"Your letter plus one is " << letter; // Displays the letter plus one. 

    return 0;
}
