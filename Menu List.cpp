#include <iostream>
#include <iomanip>
#include <limits> // for numeric_limits
#include "BookingSystem.h"

using namespace std;

// Function declarations
void displayFeedback();
BookingList initializePrePopulatedBookings();
BookingList returnStruct(BookingList& bookingList);
void cancelBooking(BookingList& BL);
double displayOverview(int locationNo, int totalPax, string name, string phoneNumber, int startMonth, int endMonth, int startYear, int endYear, int checkInDay, int checkOutDay, int numberOfDays, BookingList& BL);
double displayInvoice(int locationNo, int totalPax, string name, string phoneNumber, int startMonth, int endMonth, int startYear, int endYear, int checkInDay, int checkOutDay, int numberOfDays, double totalPriceAlldays, BookingList& BL);
void Report(int locationNo, double grandtotal, BookingList& BL);
int LocationNumber();
int NumberofPax();
void CallRoomTable(int locationNo);
string NameInput();
string InputPhoneNumber();
bool stafflogin();
void checkInandcheckout(BookingList &BL);

// Declare Function Table 
void monthYear();
void days28();
void days29();
void days30();
void days31();
void logo();
void MenuListtable();

// Calculation Number of Days Function
int NoOfDays(int startMonth, int endMonth, int startYear, int endYear, int checkInDay, int checkOutDay);


int main() {
    int option;
    char continueOption = 'Y'; // Initialize to 'Y' to enter the loop
	int locationNo = 0;
	double grandtotal = 0;
	bool loggedIn;

	// Initialize pre-populated bookings
	BookingList prePopulatedBookings = initializePrePopulatedBookings();
	BookingList myBookings = prePopulatedBookings; // Use the initialized bookings for this session

    logo();

    do {
        cout << "\nWelcome to Elegant Hideaway, select an option to proceed" << endl;
        MenuListtable(); // Display menu
        cout << "Your option: ";
        cin >> option;

        // Validate option input
        while (cin.fail() || option < 1 || option > 6) {
            cin.clear(); // Clear the error
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore unwanted characters for input
            cout << "\nInvalid option. Please enter a number between 1 - 6" << endl;
            MenuListtable();
            cout << "Your option: ";
            cin >> option;
        }

        switch (option) {
        case 1:
            cout << "\nYou selected Order Room" << endl;

			// Call Function LocationNumber
			locationNo = LocationNumber();

            do {

				// Call Function Number of Pax
                int totalPax = NumberofPax();

				// Selection Date Month Year
				int startMonth = 0, endMonth = 0, startYear = 0, endYear = 0, checkInDay = 0, checkOutDay = 0, numberOfDays = 0;

				do {
					cout << "Select your Check-In & Check-Out Date\n" << endl;
					monthYear();

					cout << "\nStart Month: ";
					cin >> startMonth;

					while (cin.fail() || startMonth < 1 || startMonth > 12) {
						cin.clear(); // clear the error 
						cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
						cout << "Invalid month. Please enter a number between 1 - 12" << endl;
						cout << "\nStart Month: ";
						cin >> startMonth;
					}

					cout << "End Month: ";
					cin >> endMonth;

					while (cin.fail() || endMonth < 1 || endMonth > 12) {
						cin.clear(); // clear the error 
						cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
						cout << "Invalid month. Please enter a number between 1 - 12" << endl;
						cout << "\nEnd Month: ";
						cin >> endMonth;
					}

					cout << "Start Year: ";
					cin >> startYear;

					while (cin.fail() || startYear < 2024 || startYear > 2025) {
						cin.clear(); // clear the error 
						cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
						cout << "Not available year. Please enter 2024 or 2025" << endl;
						cout << "\nStart Year: ";
						cin >> startYear;
					}

					cout << "End Year: ";
					cin >> endYear;

					while (cin.fail() || endYear < 2024 || endYear > 2025) {
						cin.clear(); // clear the error 
						cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
						cout << "Not available year. Please enter 2024 or 2025" << endl;
						cout << "\nEnd Year: ";
						cin >> endYear;
					}

					cout << "\nSelect your Check-In Date, __/" << startMonth << "/" << startYear << "\n" << endl;

					// for february in 2024
					if (startYear == 2024 && startMonth == 2) {
						days29();

						cout << "\nCheck-In Date: ";
						cin >> checkInDay;

						while (cin.fail() || checkInDay < 1 || checkInDay > 29) {
							cin.clear(); // clear the error 
							cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
							cout << "Not available date. Please enter a number between 1 - 29" << endl;
							cout << "\nCheck-In Date: ";
							cin >> checkInDay;
						}
						cout << "\n" << checkInDay << "/" << startMonth << "/" << startYear << ", Check-In Date selected successfully.\n" << endl;
					}
					else {
						// for february in 2025
						if (startYear == 2025 && startMonth == 2) {
							days28();

							cout << "\nCheck-In Date: ";
							cin >> checkInDay;

							while (cin.fail() || checkInDay < 1 || checkInDay > 28) {
								cin.clear(); // clear the error 
								cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
								cout << "Not available date. Please enter a number between 1 - 28" << endl;
								cout << "\nCheck-In Date: ";
								cin >> checkInDay;
							}
							cout << "\n" << checkInDay << "/" << startMonth << "/" << startYear << ", Check-In Date selected successfully.\n" << endl;
						}
						else {
							// for months with 31 days
							if (startMonth == 1 || startMonth == 3 || startMonth == 5 || startMonth == 6 || startMonth == 8 || startMonth == 10 || startMonth == 12) {
								days31();

								cout << "\nCheck-In Date: ";
								cin >> checkInDay;

								while (cin.fail() || checkInDay < 1 || checkInDay > 31) {
									cin.clear(); // clear the error 
									cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
									cout << "Not available date. Please enter a number between 1 - 31" << endl;
									cout << "\nCheck-In Date: ";
									cin >> checkInDay;
								}
								cout << "\n" << checkInDay << "/" << startMonth << "/" << startYear << ", Check-In Date selected successfully.\n" << endl;
							}
							else {
								if (startMonth == 4 || startMonth == 7 || startMonth == 9 || startMonth == 11) {
									// for months with 30 days
									days30();

									cout << "\nCheck-In Date: ";
									cin >> checkInDay;

									while (cin.fail() || checkInDay < 1 || checkInDay > 30) {
										cin.clear(); // clear the error 
										cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
										cout << "Not available date. Please enter a number between 1 - 30" << endl;
										cout << "\nCheck-In Date: ";
										cin >> checkInDay;
									}
									cout << "\n" << checkInDay << "/" << startMonth << "/" << startYear << ", Check-In Date selected successfully.\n" << endl;
								}
							}
						}
					}

					cout << "Select your Check-Out Date, __/" << endMonth << "/" << endYear << "\n" << endl;

					if (endYear == 2024 && endMonth == 2) {
						// for february in 2024
						days29();

						cout << "\nCheck-Out Date: ";
						cin >> checkOutDay;

						while (cin.fail() || checkOutDay < 1 || checkOutDay > 29) {
							cin.clear(); // clear the error 
							cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
							cout << "Not available date. Please enter a number between 1 - 28" << endl;
							cout << "\nCheck-Out Date: ";
							cin >> checkOutDay;
						}
						cout << "\n" << checkOutDay << "/" << endMonth << "/" << endYear << ", Check-Out Date selected successfully.\n" << endl;
					}
					else {
						// for february in 2025
						if (endYear == 2025 && endMonth == 2) {
							days28();

							cout << "\nCheck-Out Date: ";
							cin >> checkOutDay;

							while (cin.fail() || checkOutDay < 1 || checkOutDay > 28) {
								cin.clear(); // clear the error 
								cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
								cout << "Not available date. Please enter a number between 1 - 28" << endl;
								cout << "\nCheck-Out Date: ";
								cin >> checkOutDay;
							}
							cout << "\n" << checkOutDay << "/" << endMonth << "/" << endYear << ", Check-Out Date selected successfully.\n" << endl;
						}
						else {
							// for months with 31 days
							if (endMonth == 1 || endMonth == 3 || endMonth == 5 || endMonth == 6 || endMonth == 8 || endMonth == 10 || endMonth == 12) {
								days31();

								cout << "\nCheck-Out Date: ";
								cin >> checkOutDay;

								while (cin.fail() || checkOutDay < 1 || checkOutDay > 31) {
									cin.clear(); // clear the error 
									cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
									cout << "Not available date. Please enter a number between 1 - 31" << endl;
									cout << "\nCheck-Out Date: ";
									cin >> checkOutDay;
								}
								cout << "\n" << checkOutDay << "/" << endMonth << "/" << endYear << ", Check-Out Date selected successfully.\n" << endl;
							}
							else {
								// for months with 30 days
								if (endMonth == 4 || endMonth == 7 || endMonth == 9 || endMonth == 11) {
									days30();

									cout << "Check-Out Date: ";
									cin >> checkOutDay;

									while (cin.fail() || checkOutDay < 1 || checkOutDay > 30) {
										cin.clear(); // clear the error 
										cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
										cout << "Not available date. Please enter a number between 1 - 30" << endl;
										cout << "\nCheck-Out Date: ";
										cin >> checkOutDay;
									}
									cout << "\n" << checkOutDay << "/" << endMonth << "/" << endYear << ", Check-Out Date selected successfully." << endl;
								}
							}
						}
					}

					numberOfDays = NoOfDays(startMonth, endMonth, startYear, endYear, checkInDay, checkOutDay);
					cout << "\nNumber of your booking day is " << numberOfDays << "." << endl;

					if (numberOfDays > 0) {
						cout << "Check-In Date " << checkInDay << "/" << startMonth << "/" << startYear << ", " << "Check-Out Date " << checkOutDay << "/" << endMonth << "/" << endYear << " selected successfully." << endl;
					}
					else {
						cout << "Invalid date range. Please select your Check-In & Check-Out Date again\n" << endl;
					}
				} while (numberOfDays <= 0);

				// Call Room Table Function
				CallRoomTable(locationNo);

				// Customer booking process
				myBookings = returnStruct(myBookings);

				// Call Function Input Name & Phone Number 
				string name = NameInput();
				string phoneNumber = InputPhoneNumber();

				// Call Function OverBooking
				double totalPriceAlldays = displayOverview(locationNo,totalPax,name,phoneNumber,startMonth,endMonth,startYear,endYear,checkInDay,checkOutDay,numberOfDays,myBookings);

				// Call Function Invoice
				grandtotal += displayInvoice(locationNo, totalPax, name, phoneNumber, startMonth, endMonth, startYear, endYear, checkInDay, checkOutDay, numberOfDays, totalPriceAlldays, myBookings);

                cout << "Do you want to continue order? (Y/N): ";
                cin >> continueOption;
                // Validate continueOrder input
                while (continueOption != 'Y' && continueOption != 'y' && continueOption != 'N' && continueOption != 'n') {
                    cout << "Invalid input. Please enter 'Y' for Yes or 'N' for No: ";
                    cin >> continueOption;
                }
            } while (continueOption == 'Y' || continueOption == 'y');
			break;
        case 2:
            cout << "\nYou selected Check-In & Check-Out" << endl;
			loggedIn = stafflogin();
			if (loggedIn) {
				checkInandcheckout(myBookings);
			}
			continueOption = 'N';
            break;

        case 3:
            cout << "\nYou selected Cancellation" << endl;
            do {
                cancelBooking(myBookings); // Pass the bookings to cancel
                cout << "Do you want to continue cancellation? (Y/N): ";
                cin >> continueOption;
                // Validate continueOrder input
                while (continueOption != 'Y' && continueOption != 'y' && continueOption != 'N' && continueOption != 'n') {
                    cout << "Invalid input. Please enter 'Y' for Yes or 'N' for No: ";
                    cin >> continueOption;
                }
            } while (continueOption == 'Y' || continueOption == 'y');
			break;
        case 4:
			do {
				cout << "\nYou selected Report (Staff)" << endl;
				loggedIn = stafflogin();
				if (loggedIn) {
					cout << "Staff logged in successfully. Generating report..." << endl;
					// Call the Report function with correct parameters
					Report(locationNo, grandtotal, myBookings);
				}
				else {
					cout << "Login failed. Cannot generate report." << endl;
				}

				cout << "Do you want to continue Report? (Y/N): ";
				cin >> continueOption;

				// Validate continueOption input
				while (continueOption != 'Y' && continueOption != 'y' && continueOption != 'N' && continueOption != 'n') {
					cout << "Invalid input. Please enter 'Y' for Yes or 'N' for No: ";
					cin >> continueOption;
				}
			} while (continueOption == 'Y' || continueOption == 'y');
			break;
        case 5:
            cout << "\nYou selected Feedback" << endl;
			displayFeedback(); // Collect and process feedback
			continueOption = 'N';
			break;

        case 6:
            cout << "\nThank you for visiting Elegant Hideaway, see you next time!" << endl;
			continueOption = 'Y';
            break;

        default:
            cout << "Invalid option. Please try again." << endl;
            break;
        }

    } while (continueOption == 'N' || continueOption == 'n');

    return 0;
}
