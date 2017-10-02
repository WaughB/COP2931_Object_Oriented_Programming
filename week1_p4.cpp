/*****************************************
/   Brett Waugh
/   25 August 2017
/   Calculates the simple interest based
/ 	on the number of years, present value
/	and interest rate.
******************************************/
#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    // Declarations
    float numberOfYears, presentValue, futureValue, interestRate; //  Specified in instructions. 
    
    // Input
    cout<<"Please enter the number of number of years (can be a decimal)...\n"; // Asks User for years. 
    cin>>numberOfYears; // Gets input and assigns to variable. 
    
    cout<<"Please enter the present value...\n"; // Asks User for the present value.
    cin>>presentValue; // Gets input and assigns to variable.
    
    cout<<"Please enter the interest rate...\n"; // Asks User for the interest rate.
    cin>>interestRate; // Gets input and assigns to variable.
    
    interestRate++;
    
    // Calculates the futureValue.
    futureValue = presentValue * pow(interestRate,numberOfYears);
    
    // Output
    cout<<"The future value would be "<<futureValue; // Displays the number of feet per given meters. 

    return 0;
}
