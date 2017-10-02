/**********************************
/   Brett Waugh
/   25 August 2017
/   Converts from meters to feet. 
***********************************/
#include <iostream>

using namespace std;

int main()
{
    // Declarations
    float feet,meters; //  Specified in instructions. 
    float converstion_rate = 3.279; // Given in instructions. 
    
    // Input
    cout<<"Please enter the number of meters...\n"; // Asks User for meters. 
    
    cin>>meters; // Gets input and assigns to variable. 
    
    // Converts meters to feet. 
    feet = meters * converstion_rate;
    
    // Output
    cout<<feet; // Displays the number of feet per given meters. 

    return 0;
}
