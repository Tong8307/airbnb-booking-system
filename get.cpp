#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

// Function to get a validated integer input from the user
int getValidatedInput(const string& prompt) {
	int value;
	cout << setw(55) << left << prompt << ": ";

	while (!(cin >> value) || value < 0) {
		cin.clear(); // Clear the error state
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore incorrect input

		// Prompt the user again
		cout << "Error: Please enter a valid number." << endl;
		cout << setw(55) << left << prompt << ": ";
	}

	return value;
}