#include <iostream>
#include <string>

using namespace std;

int InputStartYear() {
	int startYear;
	cout << "Start Year: ";
	cin >> startYear;

	while (cin.fail() || startYear < 2024 || startYear > 2025) {
		cin.clear(); // clear the error 
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
		cout << "Not available year. Please enter 2024 or 2025" << endl;
		cout << "\nStart Year: ";
		cin >> startYear;
	}
	return startYear;
}