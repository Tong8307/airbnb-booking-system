#include <iostream>
#include <string>

using namespace std;

int InputEndMonth() {
	int endMonth;
	cout << "End Month: ";
	cin >> endMonth;

	while (cin.fail() || endMonth < 1 || endMonth > 12) {
		cin.clear(); // clear the error 
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
		cout << "Invalid month. Please enter a number between 1 - 12" << endl;
		cout << "\nEnd Month: ";
		cin >> endMonth;
	}
	return endMonth;
}