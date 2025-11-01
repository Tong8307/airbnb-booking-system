#ifndef BOOKING_SYSTEM_H
#define BOOKING_SYSTEM_H

#include <string>
using namespace std;

// Constants for the maximum number of bookings and rooms
const int MAX_BOOKINGS = 100;

// Struct to store hotel information
struct BookingRoom {
	int roomNo; // Room Number 
	string hotelName; // Name of hotel depend on locationNumber
	double price; 
	string service;
};

// store booking detail
struct Booking {
	int bookingNumber;
	int roomNo;
	int quantity;
};

struct BookingList {
	Booking bookings[MAX_BOOKINGS]; // Array of bookings
	int count; // currentcount for bookings
};

struct RebateValue {
	double rebate;
	string selectedvoucher;
};

#endif // BOOKING_SYSTEM_H
