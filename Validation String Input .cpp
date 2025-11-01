#include <iostream>
#include <string>
#include <cctype> // for character checking & coversion

using namespace std;

// Function to validate string input
bool validateName(const string& name) {
	if (name.empty() || name.size() > 100) {
		return false; // Check for empty or too long names
	}

	for (char ch : name) {
		// Check if the character is an alphabetic letter, space, hyphen, or apostrophe
		if (!isalpha(ch) && ch != ' ' && ch != '-' && ch != '\'') {
			return false; // Invalid character found
		}
	}

	return true;
}