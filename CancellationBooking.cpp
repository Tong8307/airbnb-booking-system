#include <iostream>
#include <iomanip>
#include "BookingSystem.h"

using namespace std;

void cancelBooking(BookingList& BL) {
    int bookingNumberToCancel;
    cout << "Enter the booking number you want to cancel: ";
    cin >> bookingNumberToCancel;

    while (cin.fail()) {
        cin.clear(); // Clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cout << "Error: Please enter a valid booking number" << endl;
        cout << "Booking Number : ";
        cin >> bookingNumberToCancel;
    }

    bool bookingFound = false;

    // Print current bookings for debugging
    cout << "\nCurrent bookings before cancellation:" << endl;
    for (int i = 0; i < BL.count; ++i) {
        cout << "Booking Number: " << BL.bookings[i].bookingNumber
            << ", Room No: " << BL.bookings[i].roomNo
            << ", Quantity: " << BL.bookings[i].quantity << endl;
    }

    // Iterate through the bookings to find the one to cancel
    for (int i = 0; i < BL.count; ++i) {
        if (BL.bookings[i].bookingNumber == bookingNumberToCancel) {
            // Found the booking, now remove it
            for (int j = i; j < BL.count - 1; ++j) {
                BL.bookings[j] = BL.bookings[j + 1]; // Shift elements to the left
            }
            BL.count--; // Decrement booking count
            cout << "\nBooking number " << bookingNumberToCancel << " has been cancelled." << endl;
            bookingFound = true;
            break;
        }
    }

    if (!bookingFound) {
        cout << "\nBooking number " << bookingNumberToCancel << " not found." << endl;
    }
}

