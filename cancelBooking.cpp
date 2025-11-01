#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include "Booking.cpp"

using namespace std;

void cancelBooking() {

    const int MAX_BOOKINGS = 100;
    Booking bookings[MAX_BOOKINGS];
    int bookingCount = 0;

    int bookingNumber;
    cout << "Enter the booking number you want to cancel: ";
    cin >> bookingNumber;

    bool found = false;
    for (int i = 0; i < bookingCount; ++i) {
        if (bookings[i].bookingNumber == bookingNumber) {
            // Shift remaining bookings
            for (int j = i; j < bookingCount - 1; ++j) {
                bookings[j] = bookings[j + 1];
            }
            bookingCount--;
            found = true;
            cout << "Booking " << bookingNumber << " has been cancelled successfully." << endl;
            break;
        }
    }
    if (!found) {
        cout << "No booking found with number " << bookingNumber << endl;
    }
}

int displaycancelBooking() {
    char choice;
    cout << "Welcome to Elegant Hideaway Airbnb" << endl;
    cout << "Do you want to (B)ook a room or (C)ancel a booking? ";
    cin >> choice;

    switch (choice) {
    case 'B':
    case 'b':
        return 0;
        break;
    case 'C':
    case 'c':
        cancelBooking();
        break;
    default:
        cout << "Invalid choice." << endl;
        break;
    }

    return 0;
}