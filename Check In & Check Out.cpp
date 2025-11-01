#include <iostream>
#include <iomanip>
#include <string>
#include <limits> // for numeric_limits
#include "BookingSystem.h"

using namespace std;

// Declare Validation Function
bool validateName(const string& name);
int getValidatedInput(const string& prompt);
bool validateICNumber(const string& ic_num);
int pinValidation(const string& prompt);

// Declare Function Table
void paymentMethodTable();

void checkInandcheckout(BookingList &BL) {

    int selection;

    do {
        // Display the menu
        cout << "\nWELCOME TO STAFF INTERFACE" << endl;
        cout << "---------------------------------------" << endl;
        cout << "1. CHECK IN" << endl;
        cout << "2. CHECK OUT" << endl;
        cout << "3. EXIT" << endl;  // Option to exit the program
        cout << "---------------------------------------" << endl;
        cout << "Please select 1, 2, or 3: ";
        cin >> selection;

        // Input validation for selection
        while (cin.fail() || selection < 1 || selection > 3) {
            cin.clear(); // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Error: Please enter a number between 1 - 3" << endl;
            cout << "Your selection: ";
            cin >> selection;
        }

        if (selection == 1) { // CHECK IN
            int bookingNumberToCheckIn;
            cout << "Enter the booking number you want to Check In: ";
            cin >> bookingNumberToCheckIn;

            while (cin.fail()) {
                cin.clear(); // Clear error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                cout << "Error: Please enter a valid booking number" << endl;
                cout << "Booking Number : ";
                cin >> bookingNumberToCheckIn;
            }

            bool bookingFoundCheckIN = false;

            while (!bookingFoundCheckIN) {
                // Iterate through the bookings to find the one to CheckIn
                for (int i = 0; i < BL.count; ++i) {
                    if (BL.bookings[i].bookingNumber == bookingNumberToCheckIn) {
                        cout << "Booking number " << bookingNumberToCheckIn << " has been Checked In." << endl;
                        bookingFoundCheckIN = true;
                        break;
                    }
                }
                if (!bookingFoundCheckIN) {
                    cout << "Booking number " << bookingNumberToCheckIn << " not found." << endl;
                    cout << "Enter the booking number you want to Check In: ";
                    cin >> bookingNumberToCheckIn;
                }
            }

            // Enter the customer Name
            string name;
            cin.ignore();
            do {
                cout << setw(19) << setfill(' ') << left << "Customer Name" << ":";
                getline(cin, name);
                if (!validateName(name)) {
                    cout << "Invalid name: Please try again." << endl;
                }
            } while (!validateName(name));

            // Enter the IC number
            string ic_num;
            bool icValid = false;
            while (!icValid) {
                cout << "Customer IC number :";
                cin >> ic_num;

                // Validate input type and IC number
                if (!validateICNumber(ic_num)) {
                    cout << "Invalid IC number: Please enter a valid IC number without any symbols." << endl;
                }
                else {
                    icValid = true; // Input is valid
                }
            }
            cout << "---------------------------------------" << endl;
            cout << "Check-in successful!" << endl;  // Feedback for successful check-in
            cout << "---------------------------------------" << endl;
        }
        else if (selection == 2) { // CHECK OUT
            int bookingNumberToCheckOut;
            cout << "Enter the booking number you want to Check Out: ";
            cin >> bookingNumberToCheckOut;

            while (cin.fail()) {
                cin.clear(); // Clear error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                cout << "Error: Please enter a valid booking number" << endl;
                cout << "Booking Number : ";
                cin >> bookingNumberToCheckOut;
            }

            bool bookingFoundCheckOUT = false;
            const double FINESPERHOURS = 20.00;
            int delayed_time;
            double fines = 0.00;
            int paymentMethod, accountNo, cardNumber, PIN;
            string paymentMethodName;
            double cashAmount, change = 0.00;

            while (!bookingFoundCheckOUT) {
                // Iterate through the bookings to find the one to CheckOut
                for (int i = 0; i < BL.count; ++i) {
                    if (BL.bookings[i].bookingNumber == bookingNumberToCheckOut) {
                        cout << "Customer delayed time (in hours): ";
                        cin >> delayed_time;

                        // Input validation for delayed_time
                        while (cin.fail() || delayed_time < 0) {
                            cin.clear(); // Clear the error
                            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore unwanted characters for input
                            cout << "Error: Please enter a valid number for delayed time." << endl;
                            cout << "Customer delayed time (in hours): ";
                            cin >> delayed_time;
                        }

                        if (delayed_time > 0) {
                            fines = delayed_time * FINESPERHOURS;
                            cout << "Fine for Customer: RM" << fines << endl;
                            cout << "\nPlease select the customer payment method" ;
                            paymentMethodTable();
                            cout << setw(56) << left << "Please select payment method (1-5)" << ":";
                            cin >> paymentMethod;

                            // Validation for paymentMethod
                            while (cin.fail() || paymentMethod < 1 || paymentMethod > 5) {
                                cin.clear(); // Clear the error
                                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore unwanted characters for input
                                cout << "Error: Please enter a number between 1 and 5." << endl;
                                cout << setw(56) << left << "Please select payment method (1-5)" << ": ";
                                cin >> paymentMethod;
                            }

                            switch (paymentMethod) {
                            case 1:
                                paymentMethodName = "Credit/Debit Cards";
                                cardNumber = getValidatedInput("Card Number");
                                PIN = pinValidation("PIN");
                                cashAmount = fines;
                                break;
                            case 2:
                                paymentMethodName = "Bank Transfer";
                                accountNo = getValidatedInput("Account Number");
                                PIN = pinValidation("PIN");
                                cashAmount = fines;
                                break;
                            case 3:
                                paymentMethodName = "Touch N Go";
                                PIN = pinValidation("PIN");
                                cashAmount = fines;
                                break;
                            case 4:
                                paymentMethodName = "Apple Pay";
                                PIN = pinValidation("PIN");
                                cashAmount = fines;
                                break;
                            case 5:
                                do {
                                    paymentMethodName = "Cash Payment";
                                    cashAmount = getValidatedInput("Payment Amount");
                                    if (cashAmount >= fines) {
                                        change = cashAmount - fines;
                                        cout << setfill(' ') << setw(56) << left << "Change" << ":RM " << change <<endl;
                                    }
                                    else {
                                        cout << "Insufficient amount. Please make payment again." << endl;
                                    }
                                } while (cashAmount < fines);
                                break;
                            }
                        }
                        else {
                            cout << "---------------------------------------" << endl;
                            cout << "No fines incurred." << endl;
                        }
                        cout << "---------------------------------------" << endl;
                        cout << "Check-out complete!" << endl;  // Feedback for successful check-out
                        cout << "Booking number " << bookingNumberToCheckOut << " has been Checked Out." << endl;
                        bookingFoundCheckOUT = true;
                        break;
                    }
                }

                if (!bookingFoundCheckOUT) {
                    cout << "Booking number " << bookingNumberToCheckOut << " not found." << endl;
                    cout << "Enter the booking number you want to Check Out: ";
                    cin >> bookingNumberToCheckOut;
                }
            }
        }
        else if (selection == 3) { // EXIT
            cout << "Exiting the system..." << endl;
        }
        else {
            cout << "Invalid selection. Please choose 1, 2, or 3." << endl;
        }

    } while (selection != 3); // Continue until user selects exit
}
