#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int getValidatedInput(const string& prompt) {
	int value;
	cout << setw(56) << left << prompt << ":";

	while (!(cin >> value) || value < 0) {
		cin.clear(); // Clear the error state
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore incorrect input

		// Prompt the user again
		cout << "Error: Please enter a valid number." << endl;
		cout << setw(56) << left << prompt << ":";
	}

	return value;
}