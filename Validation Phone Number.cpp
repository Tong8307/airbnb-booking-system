#include <iostream>
#include <string>

using namespace std;

bool validatePhoneNumber(const string& phoneNumber) {
	// Check if the phone number is non-empty and consists only of digits
	if (phoneNumber.empty()) {
		return false;
	}

	// Check if all characters are digits
	if (phoneNumber.find_first_not_of("0123456789") != std::string::npos) {
		return false;
	}

	// Check if the length is at least 10 digits
	if (phoneNumber.length() < 10) {
		return false;
	}

	return true;
}