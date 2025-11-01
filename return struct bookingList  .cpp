#include <iostream>
#include <iomanip>
#include <string>
#include <limits>  // For numeric_limits
#include "BookingSystem.h"

using namespace std;

int nextBookingNumber = 1001;
int getValidatedInput(const string& prompt);

BookingList initializePrePopulatedBookings() {
    BookingList bookingList;
    bookingList.count = 0; // Initialize booking count to 0

    // Add pre-populated bookings if needed (for testing or initial setup)
    if (bookingList.count < MAX_BOOKINGS) {
        bookingList.bookings[bookingList.count].bookingNumber = nextBookingNumber++;
        bookingList.bookings[bookingList.count].roomNo = 1;
        bookingList.bookings[bookingList.count].quantity = 0;
        bookingList.count++;
    }

    return bookingList;
}

BookingList returnStruct(BookingList& bookingList) {

    // Initialize the roomNo and quantity
    int roomNo = 0 , quantity = 0;

    cout << setw(56) << left << "Room Number (1-5)" << ":";
    cin >> roomNo;

    // Validate input for "roomNo"
    while (cin.fail() || roomNo < 1 || roomNo > 5) {
         cin.clear(); // Clear error flag
         cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
         cout << setw(56) << left << "Invalid number. Please select a valid room number (1-5)" << ":";
         cin >> roomNo;
    }

    quantity = getValidatedInput("Quantity");

    while (quantity <= 0 || quantity > 10) {
         cout << "Sorry! The maximum number of rooms that can be booked is 10, and the minimum is 1." << endl;
         quantity = getValidatedInput("Quantity");
    }

    // Store the room number, quantity, and auto-generated booking number
    if (bookingList.count < MAX_BOOKINGS) {
        bookingList.bookings[bookingList.count].bookingNumber = nextBookingNumber++;
        bookingList.bookings[bookingList.count].roomNo = roomNo;
        bookingList.bookings[bookingList.count].quantity = quantity;
        bookingList.count++;
    }
    else {
       cout << "Booking limit reached. Cannot add more rooms." << endl;
    }

    // Return struct
    return bookingList;
}