#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

int pinValidation(const string& prompt) {
    int value;
    cout << setw(56) << left << prompt << ":";

    while (true) {
        // Check if input is valid and within the range 4 to 6 digits
        if (cin >> value && value >= 1000 && value <= 999999) {
            int length = to_string(value).length();
            if (length >= 4 && length <= 6) {
                break; // Input is valid
            }
        }

        // Clear the error state and ignore the invalid input
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // Prompt the user again
        cout << "Error: Please enter a valid PIN number with 4 to 6 digits." << endl;
        cout << setw(56) << left << prompt << ":";
    }
    return value;
}
