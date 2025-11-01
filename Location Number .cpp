#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int LocationNumber() {

	int locationNo = 0;

	// Display welcome message and location options
	cout << "\nWelcome to Elegant Hideaway Airbnb" << endl;
	cout << "Please let us know the location you wish to travel to at your convenience" << endl;
	cout << setfill('-') << setw(75) << " " << setfill(' ') << endl;
	cout << "1. Kuala Lumpur" << endl;
	cout << "2. Melaka" << endl;
	cout << "3. Penang" << endl;
	cout << "4. Selangor" << endl;
	cout << "5. Sabah" << endl;
	cout << "6. Sarawak" << endl;
	cout << "Please enter the number of the location: ";
	cin >> locationNo;

	// Validate location input
	while (cin.fail() || locationNo < 1 || locationNo > 6) {
		cin.clear(); // Clear error flag
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
		cout << "Error: Please enter a number between 1 and 6.\n" << endl;
		cout << "Welcome to Elegant Hideaway Airbnb" << endl;
		cout << "Please let us know the location you wish to travel to at your convenience" << endl;
		cout << setfill('-') << setw(75) << " " << setfill(' ') << endl;
		cout << "1. Kuala Lumpur" << endl;
		cout << "2. Melaka" << endl;
		cout << "3. Penang" << endl;
		cout << "4. Selangor" << endl;
		cout << "5. Sabah" << endl;
		cout << "6. Sarawak" << endl;
		cout << "Please enter the number of the location: ";
		cin >> locationNo;
	}

	// Confirm the selected location
	switch (locationNo) {
	case 1: cout << "You have selected Kuala Lumpur." << endl; break;
	case 2: cout << "You have selected Melaka." << endl; break;
	case 3: cout << "You have selected Penang." << endl; break;
	case 4: cout << "You have selected Selangor." << endl; break;
	case 5: cout << "You have selected Sabah." << endl; break;
	case 6: cout << "You have selected Sarawak." << endl; break;
	default: cout << "Invalid selection." << endl; break;
	}

	return locationNo;

}

