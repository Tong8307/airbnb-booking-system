#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Declare validatePhoneNummber
bool validatePhoneNumber(const string& phoneNumber);

string InputPhoneNumber() {
    string phoneNumber;

    do {
        cout << "Phone Number\t: ";
        getline(cin, phoneNumber); // Use getline to handle the input as a string

        if (!validatePhoneNumber(phoneNumber)) {
            cout << "Error: Please enter a valid phone number consisting only of digits." << endl;
        }
    } while (!validatePhoneNumber(phoneNumber)); // Repeat until a valid phone number is entered

    return phoneNumber; // Return the valid phone number
}
