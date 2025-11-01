#include <iostream>
#include <iomanip>
using namespace std;

void DateTime() {
	int startMonth, endMonth, startYear, endYear, checkInDate, checkOutDate;

	cout << "Select your check-in & check-out date :)\n" << endl;
	cout << setfill('=') << setw(40) << "=" << endl;
	cout << setfill(' ') << "|" << setw(10) << " " << "Month" << setw(8) << " " << setw(2) << " " << "|" << setw(4) << " " << "Year" << setw(5) << "|" << endl;
	cout << setfill('=') << setw(40) << "=" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << "1" << setw(2) << " " << "2" << setw(2) << " " << "3" << setw(3) << " " << "4" << setw(3) << " " << "5" << setw(3) << " " << "6" << setw(3) << " " << "|" << setw(4) << " " << "2024" << setw(5) << "|" << endl;
	cout << "|" << setw(3) << " " << "7" << setw(2) << " " << "8" << setw(2) << " " << "9" << setw(2) << " " << "10" << setw(2) << " " << "11" << setw(2) << " " << "12" << setw(18) << setw(3) << " " << "|" << setw(4) << " " << "2025" << setw(5) << "|" << endl;
	cout << setfill('=') << setw(40) << "=" << endl;

	cout << "\nStart Month: ";

	while (true) { // loop will run until input is true
		if (cin >> startMonth) {
			if (startMonth >= 1 && startMonth <= 12) {
				break; //exit loop if startMonth is valid
			}
			else {
				cout << "Invalid month. Please enter a number between 1 - 12" << endl;
				cout << "\nStart Month: ";
			}
		}
		else {
			cout << "Invalid month. Please enter a number between 1 - 12" << endl;
			cout << "\nStart Month: ";

			cin.clear(); // clear the error 

			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
		}
	}

	cout << "End Month: ";

	while (true) { // loop will run until input is true

		if (cin >> endMonth) {
			if (endMonth >= 1 && endMonth <= 12) {
				break; //exit loop if endMonth is valid
			}
			else {
				cout << "Invalid month. Please enter a number between 1 - 12" << endl;
				cout << "\nEnd Month: ";
			}
		}
		else {
			cout << "Invalid month. Please enter a number between 1 - 12" << endl;
			cout << "\nEnd Month: ";

			cin.clear(); // clear the error 

			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
		}
	}

	cout << "Start Year: ";

	while (true) { // loop will run until input is true

		if (cin >> startYear) {
			if (startYear >= 2024 && startYear <= 2025) {
				break; //exit loop if startYear is valid
			}
			else {
				cout << "Not available year. Please enter 2024 or 2025" << endl;
				cout << "\nStart Year: ";
			}
		}
		else {
			cout << "Not available year. Please enter 2024 or 2025" << endl;
			cout << "\nStart Year: ";

			cin.clear(); // clear the error

			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
		}
	}

	cout << "End Year: ";

	while (true) { // loop will run until input is true

		if (cin >> endYear) {
			if (endYear >= 2024 && endYear <= 2025) {
				break; //exit loop if endYear is valid
			}
			else {
				cout << "Not available year. Please enter 2024 or 2025" << endl;
				cout << "\nEnd Year: ";
			}
		}
		else {
			cout << "Not available year. Please enter 2024 or 2025" << endl;
			cout << "\nEnd Year: ";

			cin.clear(); // clear the error 

			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
		}
	}

	cout << "\nSelect your Check-In Date, __/" << startMonth << "/" << startYear << "\n" << endl;

	// for months with 28 days
	if (startMonth == 2) {
		cout << setfill('=') << setw(40) << "=" << endl;
		cout << setfill(' ') << "|" << setw(17) << " " << "Date" << setw(18) << "|" << endl;
		cout << setfill('=') << setw(40) << "=" << endl;
		cout << setfill(' ') << "|" << setw(6) << " " << "1" << setw(3) << " " << "2" << setw(3) << " " << "3" << setw(3) << " " << "4" << setw(3) << " " << "5" << setw(3) << " " << "6" << setw(3) << " " << "7" << setw(8) << "|" << endl;
		cout << "|" << setw(6) << " " << "8" << setw(3) << " " << "9" << setw(2) << " " << "10" << setw(2) << " " << "11" << setw(2) << " " << "12" << setw(2) << " " << "13" << setw(2) << " " << "14" << setw(8) << "|" << endl;
		cout << "|" << setw(5) << " " << "15" << setw(2) << " " << "16" << setw(2) << " " << "17" << setw(2) << " " << "18" << setw(2) << " " << "19" << setw(2) << " " << "20" << setw(2) << " " << "21" << setw(8) << "|" << endl;
		cout << "|" << setw(5) << " " << "22" << setw(2) << " " << "23" << setw(2) << " " << "24" << setw(2) << " " << "25" << setw(2) << " " << "26" << setw(2) << " " << "27" << setw(2) << " " << "28" << setw(8) << "|" << endl;
		cout << setfill('=') << setw(40) << "=" << endl;

		cout << "\nCheck-In Date: ";

		while (true) {
			if (cin >> checkInDate) {
				if (checkInDate >= 1 && checkInDate <= 28) {
					cout << "\n" << checkInDate << "/" << startMonth << "/" << startYear << ", Check-In Date selected successfully.\n" << endl;
					break;
				}
				else {
					cout << "Not available date. Please enter a number between 1 - 28" << endl;
					cout << "\nCheck-In Date: ";
				}
			}
			else {
				cout << "Not available date. Please enter a number between 1 - 28" << endl;
				cout << "\nCheck-In Date: ";

				cin.clear(); // clear the error

				cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
			}
		}
	}
	else {
		// for months with 31 days
		if (startMonth == 1 || startMonth == 3 || startMonth == 5 || startMonth == 7 || startMonth == 8 || startMonth == 10 || startMonth == 12) {
			cout << setfill('=') << setw(40) << "=" << endl;
			cout << setfill(' ') << "|" << setw(17) << " " << "Date" << setw(18) << "|" << endl;
			cout << setfill('=') << setw(40) << "=" << endl;
			cout << setfill(' ') << "|" << setw(6) << " " << "1" << setw(3) << " " << "2" << setw(3) << " " << "3" << setw(3) << " " << "4" << setw(3) << " " << "5" << setw(3) << " " << "6" << setw(3) << " " << "7" << setw(8) << "|" << endl;
			cout << "|" << setw(6) << " " << "8" << setw(3) << " " << "9" << setw(2) << " " << "10" << setw(2) << " " << "11" << setw(2) << " " << "12" << setw(2) << " " << "13" << setw(2) << " " << "14" << setw(8) << "|" << endl;
			cout << "|" << setw(5) << " " << "15" << setw(2) << " " << "16" << setw(2) << " " << "17" << setw(2) << " " << "18" << setw(2) << " " << "19" << setw(2) << " " << "20" << setw(2) << " " << "21" << setw(8) << "|" << endl;
			cout << "|" << setw(5) << " " << "22" << setw(2) << " " << "23" << setw(2) << " " << "24" << setw(2) << " " << "25" << setw(2) << " " << "26" << setw(2) << " " << "27" << setw(2) << " " << "28" << setw(8) << "|" << endl;
			cout << "|" << setw(5) << " " << "29" << setw(2) << " " << "30" << setw(2) << " " << "31" << setw(24) << "|" << endl;
			cout << setfill('=') << setw(40) << "=" << endl;

			cout << "\nCheck-In Date: ";

			while (true) {
				if (cin >> checkInDate) {
					if (checkInDate >= 1 && checkInDate <= 31) {
						cout << "\n" << checkInDate << "/" << startMonth << "/" << startYear << ", Check-In Date selected successfully.\n" << endl;
						break;
					}
					else {
						cout << "Not available date. Please enter a number between 1 - 31" << endl;
						cout << "\nCheck-In Date: ";
					}
				}
				else {
					cout << "Not available date. Please enter a number between 1 - 31" << endl;
					cout << "\nCheck-In Date: ";

					cin.clear(); // clear the error

					cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
				}
			}
		}
		else {
			// for months with 30 days
			cout << setfill('=') << setw(40) << "=" << endl;
			cout << setfill(' ') << "|" << setw(17) << " " << "Date" << setw(18) << "|" << endl;
			cout << setfill('=') << setw(40) << "=" << endl;
			cout << setfill(' ') << "|" << setw(6) << " " << "1" << setw(3) << " " << "2" << setw(3) << " " << "3" << setw(3) << " " << "4" << setw(3) << " " << "5" << setw(3) << " " << "6" << setw(3) << " " << "7" << setw(8) << "|" << endl;
			cout << "|" << setw(6) << " " << "8" << setw(3) << " " << "9" << setw(2) << " " << "10" << setw(2) << " " << "11" << setw(2) << " " << "12" << setw(2) << " " << "13" << setw(2) << " " << "14" << setw(8) << "|" << endl;
			cout << "|" << setw(5) << " " << "15" << setw(2) << " " << "16" << setw(2) << " " << "17" << setw(2) << " " << "18" << setw(2) << " " << "19" << setw(2) << " " << "20" << setw(2) << " " << "21" << setw(8) << "|" << endl;
			cout << "|" << setw(5) << " " << "22" << setw(2) << " " << "23" << setw(2) << " " << "24" << setw(2) << " " << "25" << setw(2) << " " << "26" << setw(2) << " " << "27" << setw(2) << " " << "28" << setw(8) << "|" << endl;
			cout << "|" << setw(5) << " " << "29" << setw(2) << " " << "30" << setw(28) << "|" << endl;
			cout << setfill('=') << setw(40) << "=" << endl;

			cout << "\nCheck-In Date: ";

			while (true) {
				if (cin >> checkInDate) {
					if (checkInDate >= 1 && checkInDate <= 30) {
						cout << "\n" << checkInDate << "/" << startMonth << "/" << startYear << ", Check-In Date selected successfully.\n" << endl;
						break;
					}
					else {
						cout << "Not available date. Please enter a number between 1 - 30" << endl;
						cout << "\nCheck-In Date: ";
					}
				}
				else {
					cout << "Not available date. Please enter a number between 1 - 30" << endl;
					cout << "\nCheck-In Date: ";

					cin.clear(); // clear the error

					cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
				}
			}
		}
	}

	if (endMonth == 2) {
		cout << "Select your Check-Out Date, " << "__/" << endMonth << "/" << endYear << "\n" << endl;
		cout << setfill('=') << setw(40) << "=" << endl;
		cout << setfill(' ') << "|" << setw(17) << " " << "Date" << setw(18) << "|" << endl;
		cout << setfill('=') << setw(40) << "=" << endl;
		cout << setfill(' ') << "|" << setw(6) << " " << "1" << setw(3) << " " << "2" << setw(3) << " " << "3" << setw(3) << " " << "4" << setw(3) << " " << "5" << setw(3) << " " << "6" << setw(3) << " " << "7" << setw(8) << "|" << endl;
		cout << "|" << setw(6) << " " << "8" << setw(3) << " " << "9" << setw(2) << " " << "10" << setw(2) << " " << "11" << setw(2) << " " << "12" << setw(2) << " " << "13" << setw(2) << " " << "14" << setw(8) << "|" << endl;
		cout << "|" << setw(5) << " " << "15" << setw(2) << " " << "16" << setw(2) << " " << "17" << setw(2) << " " << "18" << setw(2) << " " << "19" << setw(2) << " " << "20" << setw(2) << " " << "21" << setw(8) << "|" << endl;
		cout << "|" << setw(5) << " " << "22" << setw(2) << " " << "23" << setw(2) << " " << "24" << setw(2) << " " << "25" << setw(2) << " " << "26" << setw(2) << " " << "27" << setw(2) << " " << "28" << setw(8) << "|" << endl;
		cout << setfill('=') << setw(40) << "=" << endl;

		cout << "\nCheck-Out Date: ";

		while (true) {
			if (cin >> checkOutDate) {
				if (checkOutDate >= 1 && checkOutDate <= 28) {
					cout << "\n" << checkOutDate << "/" << endMonth << "/" << endYear << ", Check-Out Date selected successfully.\n" << endl;
					break;
				}
				else {
					cout << "Not available date. Please enter a number between 1 - 28" << endl;
					cout << "\nCheck-In Date: ";
				}
			}
			else {
				cout << "Not available date. Please enter a number between 1 - 28" << endl;
				cout << "\nCheck-In Date: ";

				cin.clear(); // clear the error

				cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
			}
		}
	}
	else {
		if (endMonth == 1 || endMonth == 3 || endMonth == 5 || endMonth == 7 || endMonth == 8 || endMonth == 10 || endMonth == 12) {
			cout << "Select your Check-Out Date, " << "__/" << endMonth << "/" << endYear << "\n" << endl;
			cout << setfill('=') << setw(40) << "=" << endl;
			cout << setfill(' ') << "|" << setw(17) << " " << "Date" << setw(18) << "|" << endl;
			cout << setfill('=') << setw(40) << "=" << endl;
			cout << setfill(' ') << "|" << setw(6) << " " << "1" << setw(3) << " " << "2" << setw(3) << " " << "3" << setw(3) << " " << "4" << setw(3) << " " << "5" << setw(3) << " " << "6" << setw(3) << " " << "7" << setw(8) << "|" << endl;
			cout << "|" << setw(6) << " " << "8" << setw(3) << " " << "9" << setw(2) << " " << "10" << setw(2) << " " << "11" << setw(2) << " " << "12" << setw(2) << " " << "13" << setw(2) << " " << "14" << setw(8) << "|" << endl;
			cout << "|" << setw(5) << " " << "15" << setw(2) << " " << "16" << setw(2) << " " << "17" << setw(2) << " " << "18" << setw(2) << " " << "19" << setw(2) << " " << "20" << setw(2) << " " << "21" << setw(8) << "|" << endl;
			cout << "|" << setw(5) << " " << "22" << setw(2) << " " << "23" << setw(2) << " " << "24" << setw(2) << " " << "25" << setw(2) << " " << "26" << setw(2) << " " << "27" << setw(2) << " " << "28" << setw(8) << "|" << endl;
			cout << "|" << setw(5) << " " << "29" << setw(2) << " " << "30" << setw(2) << " " << "31" << setw(24) << "|" << endl;
			cout << setfill('=') << setw(40) << "=" << endl;

			cout << "\nCheck-Out Date: ";
			while (true) {
				if (cin >> checkOutDate) {
					if (checkOutDate >= 1 && checkOutDate <= 31) {
						cout << "\n" << checkOutDate << "/" << endMonth << "/" << endYear << ", Check-Out Date selected successfully.\n" << endl;
						break;
					}
					else {
						cout << "Not available date. Please enter a number between 1 - 31" << endl;
						cout << "\nCheck-In Date: ";
					}
				}
				else {
					cout << "Not available date. Please enter a number between 1 - 31" << endl;
					cout << "\nCheck-In Date: ";

					cin.clear(); // clear the error

					cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
				}
			}
		}
		else {
			cout << setfill('=') << setw(40) << "=" << endl;
			cout << setfill(' ') << "|" << setw(17) << " " << "Date" << setw(18) << "|" << endl;
			cout << setfill('=') << setw(40) << "=" << endl;
			cout << setfill(' ') << "|" << setw(6) << " " << "1" << setw(3) << " " << "2" << setw(3) << " " << "3" << setw(3) << " " << "4" << setw(3) << " " << "5" << setw(3) << " " << "6" << setw(3) << " " << "7" << setw(8) << "|" << endl;
			cout << "|" << setw(6) << " " << "8" << setw(3) << " " << "9" << setw(2) << " " << "10" << setw(2) << " " << "11" << setw(2) << " " << "12" << setw(2) << " " << "13" << setw(2) << " " << "14" << setw(8) << "|" << endl;
			cout << "|" << setw(5) << " " << "15" << setw(2) << " " << "16" << setw(2) << " " << "17" << setw(2) << " " << "18" << setw(2) << " " << "19" << setw(2) << " " << "20" << setw(2) << " " << "21" << setw(8) << "|" << endl;
			cout << "|" << setw(5) << " " << "22" << setw(2) << " " << "23" << setw(2) << " " << "24" << setw(2) << " " << "25" << setw(2) << " " << "26" << setw(2) << " " << "27" << setw(2) << " " << "28" << setw(8) << "|" << endl;
			cout << "|" << setw(5) << " " << "29" << setw(2) << " " << "30" << setw(28) << "|" << endl;
			cout << setfill('=') << setw(40) << "=" << endl;

			cout << "Check-Out Date: ";
			while (true) {
				if (cin >> checkOutDate) {
					if (checkOutDate >= 1 && checkOutDate <= 30) {
						cout << "\n" << checkOutDate << "/" << endMonth << "/" << endYear << ", Check-Out Date selected successfully.\n" << endl;
						break;
					}
					else {
						cout << "Not available date. Please enter a number between 1 - 30" << endl;
						cout << "\nCheck-In Date: ";
					}
				}
				else {
					cout << "Not available date. Please enter a number between 1 - 30" << endl;
					cout << "\nCheck-In Date: ";

					cin.clear(); // clear the error

					cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
				}
			}
		}
	}

	cout << "Check-In Date " << checkInDate << "/" << startMonth << "/" << startYear << ", " << "Check-Out Date " << checkOutDate << "/" << endMonth << "/" << endYear << " selected succesfully." << endl;

	return startMonth;
}