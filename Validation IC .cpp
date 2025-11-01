#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Validate IC number (example: 12-digit number as a string)
bool validateICNumber(const string& ic_num) {
    if (ic_num.length() != 12) return false; // Check if IC number has exactly 12 digits

    for (char c : ic_num) {
        if (!isdigit(c)) return false; // Ensure all characters are digits
    }

    return true;
}