#include <iostream>

using namespace std;

// Definition Function Validate Integer Input
int getValidatedInput(const string& prompt);

int NumberofPax() {

	// Prompt user to enter number of adult, children and infants and get validated input
	cout << "--------------------------------------------------------------------------" << endl;
	int adult = getValidatedInput("Please enter number of pax adult (13 years and older)"); // call funtion 
	int children = getValidatedInput("Please enter number of pax children (2-12 years old)");
	int infants = getValidatedInput("Please enter number of pax infants (under 2 years old)");

	// Calculate the total number of pax
	int totalPax = adult + children + infants;

	// Display the total number of pax
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "The total number of pax is " << totalPax << endl;
	cout << "--------------------------------------------------------------------------" << endl;

	return totalPax;
}
