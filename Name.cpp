#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Declare Validation Name Function
bool validateName(const string& name);

string NameInput(){

	//User input the information 
	string name;

	cout << "Please enter your information below" << endl;
	cout << "--------------------------------------------------------------------------" << endl;

	cin.ignore();
	do {
		cout << "Name\t\t: ";
		getline(cin, name);
		if (!validateName(name)) {
			cout << "Invalid name : Please try again." << endl;
		}
	} while (!validateName(name));

	return name;
}
