#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <regex>
#include <limits>
#include "BookingSystem.h"

using namespace std;

struct Membership {
    static const int NUM_MEMBERS = 3;
    string correctMemberIDs[NUM_MEMBERS] = { "member1", "member2", "member3" };
    string correctPasswords[NUM_MEMBERS] = { "password1", "password2", "password3" };

    string name;
    string phoneNumber;
    string email;

    static bool isValidName(const string& name) {
        if (name.empty()) return false;
        for (char ch : name) {
            if (!isalpha(ch) && !isspace(ch)) return false;
        }
        return true;
    }

    static bool isValidPhoneNumber(const string& phoneNumber) {
        if (phoneNumber.length() < 10 || phoneNumber.length() > 11) return false;
        for (char c : phoneNumber) {
            if (!isdigit(c)) return false;
        }
        return true;
    }

    static bool isValidEmail(const string& email) {
        regex emailPattern(R"(^[^\s@]+@[^\s@]+\.[^\s@]+$)");
        return regex_match(email, emailPattern);
    }

    void handleMemberSignUp() {
        string inputMemberID;
        string inputPassword;
        bool isAuthenticated = false;

        while (!isAuthenticated) {
            cout << "Member login" << endl;
            cout << "----------------------------" << endl;

            cout << "Member ID: ";
            getline(cin, inputMemberID);

            cout << "Password: ";
            getline(cin, inputPassword);

            bool idExists = false;
            for (int i = 0; i < NUM_MEMBERS; ++i) {
                if (inputMemberID == correctMemberIDs[i]) {
                    idExists = true;
                    if (inputPassword == correctPasswords[i]) {
                        cout << "Login successful!" << endl;
                        cout << "\nEnjoy our benefits now!" << endl;
                        cout << "+" << setfill('=') << setw(48) << "+" << endl;
                        cout << "|" << " No |" << setfill(' ') << setw(20) << " Seasonal Promotion " << setfill(' ') << setw(18) << " | Promo Code" << setfill(' ') << setw(6) << "| " << endl;
                        cout << "|" << setfill('=') << setw(48) << "|" << endl;
                        cout << "|" << "  1 | Chinese New year" << setfill(' ') << setw(18) << " | CNY8888" << setfill(' ') << setw(8) << "|" << endl;
                        cout << "|" << "  2 | Hari Raya" << setfill(' ') << setw(24) << "| HR4444" << setfill(' ') << setw(10) << " | " << endl;
                        cout << "|" << "  3 | Deepavali" << setfill(' ') << setw(25) << "| DP6666 " << setfill(' ') << setw(9) << " | " << endl;
                        cout << "|" << "  4 | Merry Christmas" << setfill(' ') << setw(19) << "| MC1225 " << setfill(' ') << setw(9) << " | " << endl;
                        cout << "|" << "  5 | Valentine" << setfill(' ') << setw(27) << "| V2141314 " << setfill(' ') << setw(7) << " | " << endl;
                        cout << "+" << setfill('=') << setw(48) << "+" << endl;
                        isAuthenticated = true;
                    }
                    else {
                        cout << "Incorrect Password. Please try again." << endl;
                    }
                    break;
                }
            }

            if (!idExists) {
                cout << "Incorrect Member ID. Please try again." << endl;
            }
        }
    }

    void handleNewMemberRegistration() {
        cout << "\nPlease fill up the information below to become our member!" << endl;
        cout << "Registration" << endl;
        cout << "----------------" << endl;

        while (true) {
            cout << "Name: ";
            getline(cin >> ws, name);
            if (isValidName(name)) {
                break;
            }
            else {
                cout << "Invalid name. Please enter a name containing only letters and spaces." << endl;
            }
        }

        while (true) {
            cout << "Phone number: ";
            getline(cin, phoneNumber);
            if (isValidPhoneNumber(phoneNumber)) {
                break;
            }
            else {
                cout << "Invalid phone number. It should be numeric and between 10 to 11 digits long." << endl;
            }
        }

        while (true) {
            cout << "Email: ";
            getline(cin, email);
            if (isValidEmail(email)) {
                break;
            }
            else {
                cout << "Invalid email format. Please enter a valid email address." << endl;
            }
        }

        cout << "\nThank you for becoming our member. Below are the member details." << endl;
        cout << "Name        : " << name << endl;
        cout << "Phone number: " << phoneNumber << endl;
        cout << "Email       : " << email << endl;
        cout << "This is your new member code. Make a booking now to enjoy our benefits!" << endl;
        cout << "Member Code : WELCOME123" << endl;
    }
};

RebateValue memberlogin(double rebatePrice) {
    int choice_membership;
    bool valid_input = false;
    Membership membership; // Create an instance of Membership
    RebateValue result;

    while (!valid_input) {
        cout << "Are you a member?" << endl;
        cout << "-----------------------" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cout << "Please enter your choice (1 or 2): ";

        cin >> choice_membership;
        cin.clear(); // Clear input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input

        if (cin.fail()) {
            cin.clear(); // Clear the error flag
            cout << "Invalid input. Please enter a number (1 or 2)." << endl;
        }
        else if (choice_membership == 1) {
            membership.handleMemberSignUp();
            RebateValue Voucher(double rebatePrice);
            result = Voucher(rebatePrice);  // Calling Voucher() function
            valid_input = true;

        }
        else if (choice_membership == 2) {
            membership.handleNewMemberRegistration();
            RebateValue Voucher(double rebatePrice);
            result = Voucher(rebatePrice);  // Calling Voucher() function
            valid_input = true;
        }
        else {
            cout << "Invalid choice. Please enter 1 or 2." << endl;
        }
    }
    return result;
}