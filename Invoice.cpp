#include <iostream>
#include <iomanip>
#include "BookingSystem.h"

using namespace std;

// Define the Table 
void ADDONSERVICE();
void paymentMethodTable();

// Validation Check Function ;
int getValidatedInput(const string& prompt);
int pinValidation(const string& prompt);

double displayInvoice(int locationNo, int totalPax, string name, string phoneNumber, int startMonth, int endMonth, int startYear, int endYear, int checkInDay, int checkOutDay, int numberOfDays, double totalPriceAlldays, BookingList& BL) {
	
	// Define and initialize hotel rooms for Kuala Lumpur
	BookingRoom roomsKualaLumpur[] = {
		{1, "Cubic Botanical", 650.00, "Wifi & Breakfast"},
		{2, "Mont Kiara", 200.00, "Wifi & Breakfast"},
		{3, "Urban Retreat", 450.00, "Wifi, Breakfast & Gym"},
		{4, "Luxe Residence", 450.00, "Wifi, Breakfast & Lounge"},
		{5, "Panorama Hotel", 450.00, "Wifi, Breakfast & Pool"}
	};
	const int numRoomsKualaLumpur = sizeof(roomsKualaLumpur) / sizeof(roomsKualaLumpur[0]);

	// Define and initialize hotel rooms for Melaka
	BookingRoom roomsMelaka[] = {
		{1, "Heritage Haven", 300.00, "Wifi & Breakfast"},
		{2, "Melaka River Inn", 250.00, "Wifi, Breakfast & Shuttle Service"},
		{3, "Coastal Retreat", 350.00, "Wifi, Breakfast, Gym & Spa"},
		{4, "Grand Melaka Resort ", 500.00, "Wifi, Breakfast, Lounge & Business Center"},
		{5, "Historical Lodge", 200.00, "Wifi, Breakfast & Laundry Service"}
	};
	const int numRoomsMelaka = sizeof(roomsMelaka) / sizeof(roomsMelaka[0]);

	// Define and initialize hotel rooms for Penang
	BookingRoom roomsPenang[] = {
		{1, "Bayview Grand Hotel", 300.00, "Wifi & Breakfast"},
		{2, "Georgetown Inn", 250.00, "Wifi, Breakfast & Shuttle Service"},
		{3, "Seaside Resort", 400.00, "Wifi, Breakfast, Gym & Spa"},
		{4, "Penang Heritage Lodge", 300.00, "Wifi, Breakfast & Lounge"},
		{5, "Bayview Penang", 500.00, "Wifi, Breakfast & Business Center"}
	};
	const int numRoomsPenang = sizeof(roomsPenang) / sizeof(roomsPenang[0]);

	// Define and initialize hotel rooms for Selangor
	BookingRoom roomsSelangor[] = {
		{1, "Metro Plaza Hotel", 420.00, "Wifi, Gym, Spa & Lounge"},
		{2, "City View Resort", 550.00, "Wifi, Dinner, Free Parking & Airport Shuttle"},
		{3, "Elite Comfort Hotel", 480.00, "Wifi, Breakfast, Conference Room & Laundry Service"},
		{4, "Urban Haven Hotel", 390.00, "Wifi, Breakfast, Afternoon Tea & Business Center"},
		{5, "Selangor Grand", 350.00, "Wifi, Breakfast, 24 Hours Front Desk & Lounge"}
	};
	const int numRoomsSelangor = sizeof(roomsSelangor) / sizeof(roomsSelangor[0]);

	// Define and initialize hotel rooms for Sabah
	BookingRoom roomsSabah[] = {
		{1, "Borneo Bliss Hotel", 320.00, "Wifi, Breakfast, Pool & Parking"},
		{2, "Kinabalu View", 270.00, "Wifi, Breakfast, Shuttle Service & Airport Transfer"},
		{3, "Sunset Coastal Resort", 380.00, "Wifi, Breakfast, Restaurant & Spa"},
		{4, "Sabah Serenity Lodge", 290.00, "Wifi, Breakfast, Concierge"},
		{5, "Horizon Hotel", 450.00, "Wifi, Breakfast, Business Center & Conference Rooms"}
	};
	const int numRoomsSabah = sizeof(roomsSabah) / sizeof(roomsSabah[0]);

	// Define and initialize hotel rooms for Sarawak
	BookingRoom roomsSarawak[] = {
		{1, "Riverfront Resort", 350.00, "Wifi, Dinner, Spa & Free Parking"},
		{2, "Heritage City Hotel", 580.00, "Wifi, Breakfast, Pool & Laundry"},
		{3, "Borneo Vista Lodge", 400.00, "Wifi, Breakfast, Gym & Spa"},
		{4, "Tropical Haven Hotel", 460.00, "Wifi, Breakfast, Afternoon Tea"},
		{5, "Kuching Grand Inn", 310.00, "Wifi, Breakfast, Business Center & Lounge"}
	};
	const int numRoomsSarawak = sizeof(roomsSarawak) / sizeof(roomsSarawak[0]);

	// Choose the room array based on locationNo
	const BookingRoom* rooms;
	int totalRooms;
	if (locationNo == 1) {
		rooms = roomsKualaLumpur;
		totalRooms = numRoomsKualaLumpur;
	}
	else if (locationNo == 2) {
		rooms = roomsMelaka;
		totalRooms = numRoomsMelaka;
	}
	else if (locationNo == 3) {
		rooms = roomsPenang;
		totalRooms = numRoomsPenang;
	}
	else if (locationNo == 4) {
		rooms = roomsSelangor;
		totalRooms = numRoomsSelangor;
	}
	else if (locationNo == 5) {
		rooms = roomsSabah;
		totalRooms = numRoomsSabah;
	}
	else if (locationNo == 6) {
		rooms = roomsSarawak;
		totalRooms = numRoomsSarawak;
	}
	else {
		cout << "Invalid location number." << endl;
		return 1;
	}
	
	// Add on service
	char service;
	int serviceNo;
	double servicePrice = 0.00;
	string serviceName;

	// Validation for service
	do {
		cout << "\nDo you need any add on service (Y/N): ";
		cin >> service;
		if (service == 'Y' || service == 'y') {
			ADDONSERVICE();

			cout << "Please select the service you needed(1-5) :";
			cin >> serviceNo;

			// Validation for serviceNo
			while (cin.fail() || serviceNo < 1 || serviceNo > 5) {
				cin.clear(); // clear the error 
				cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
				cout << "Error: Please enter a number between 1 and 5." << endl;
				cout << "Please select the service you needed(1-5) :";
				cin >> serviceNo;
			}

			switch (serviceNo) {
			case 1:
				serviceName = "High Speed Wi - Fi, RM 30.00 per day";
				servicePrice = 30.00 * numberOfDays;
				break;
			case 2:
				serviceName = " Breakfast, RM  50.00 per day ";
				servicePrice = 50.00 * numberOfDays;
				break;
			case 3:
				serviceName = "Airport Shuttle, RM 150.00 per day";
				servicePrice = 150.00 * numberOfDays;
				break;
			case 4:
				serviceName = "Room Upgrade, RM 300.00 per day";
				servicePrice = 300.00 * numberOfDays;
				break;
			case 5:
				serviceName = "Mid-Stay Cleaning, RM 100.00 per day";
				servicePrice = 100.00 * numberOfDays;
				break;
			}

		}
		else if (service == 'N' || service == 'n') {
			serviceName = "NO EXTRA SERVICE";
		}
		else {
			cout << "Invalid input.Please enter 'Y' for Yes or 'N' for No" << endl;
		}

	} while (service != 'Y' && service != 'y' && service != 'N' && service != 'n');

	// Enter voucher code 
	char gotvoucher;
	RebateValue memberlogin(double rebatPrice);
	RebateValue finalresult;
	do {
		cout << "Do you want to apply voucher code (Y/N) :";
		cin >> gotvoucher;

		if (gotvoucher == 'Y' || gotvoucher == 'y') {
			finalresult = memberlogin(totalPriceAlldays);

		}
		else if (gotvoucher == 'N' || gotvoucher == 'n') {
			cout << "NO VOUCHER";
			finalresult.selectedvoucher = "NO VOUCHER";
			finalresult.rebate = 0.00;
		}
		else
			cout << "Invalid input. Please enter 'Y' for Yes or 'N' for No " << endl;

	} while (gotvoucher != 'Y' && gotvoucher != 'y' && gotvoucher != 'N' && gotvoucher != 'n');


	// Invoice 
	double totalPrice = 0;
	cout << setfill(' ') << "\n|==================================================================================================================|" << endl;
	cout << "|                                                       Invoice                                                    |" << endl;
	cout << "|==================================================================================================================|" << endl;

	cout << "|" << setw(20) << left << "Name" << ":" << setw(20) << left << name << setw(43) << " " << "Check-In Date " << setw(4) << right << ":" << setw(2) << left << showpoint << checkInDay << "/" << setw(2) << left << startMonth << "/" << startYear << "  |" << endl;
	cout << "|" << setw(20) << left << "Phone Number" << ":" << setw(20) << left << showpoint << phoneNumber << setw(43) << " " << "Check-Out Date" << setw(4) << right << ":" << setw(2) << showpoint << left << checkOutDay << "/" << setw(2) << left << endMonth << "/" << endYear << "  |" << endl;
	cout << "|" << setw(20) << left << "Total number of pax" << ":" << setw(20) << left << totalPax << setw(43) << " " << "Number Of Days" << setw(4) << right << ":" << setw(12) << left << numberOfDays << "|" << endl;
	cout << "|==================================================================================================================|" << endl;
	cout << "|" << setw(9) << left << "BookingNo" << setw(15) << right << "Room Number" << " " << setw(15) << right << "Hotel" << setw(10) << right << " " << setw(13) << right << "Quantity" << setw(5) << right << " " << setw(20) << right << "Price Per Room" << setw(5) << right << " " << setw(17) << right << "Total Price" << setw(5) << right << "|" << endl;
	cout << "|==================================================================================================================|" << endl;

	int latestBookingIndex = BL.count - 1;
	int roomNo = BL.bookings[latestBookingIndex].roomNo;
	int quantity = BL.bookings[latestBookingIndex].quantity;
	int bookingNo = BL.bookings[latestBookingIndex].bookingNumber;

		for (int j = 0; j < totalRooms; ++j) {
			if (rooms[j].roomNo == roomNo) {
				double roomPrice = rooms[j].price;
				double bookingTotalPrice = roomPrice * quantity;
				totalPrice += bookingTotalPrice;

				cout << "|" << setw(6) << right << bookingNo << setw(7) << " " << setw(5) << right << rooms[j].roomNo << setw(7) << " " << setw(25) << left << rooms[j].hotelName << " " << setw(9) << right << quantity << setw(9) << right << " " << "RM" << setw(21) << right << fixed << setprecision(2) << rooms[j].price << setw(4) << right << "RM" << setw(18) << right << fixed << setprecision(2) << bookingTotalPrice << "|" << endl;
				// Print services
				cout << "|Services: " << setw(104) << left << rooms[j].service << "|" << endl;
				cout << "|" << setw(115) << right << "|" << endl;
			}
		}

	// Calculation for SST, Discount and Grand Total
	const double SSTRATE = 0.06;
	double SST = totalPriceAlldays * SSTRATE;
	double grandtotal = (totalPriceAlldays + SST + servicePrice) - finalresult.rebate;

	cout << "|==================================================================================================================|" << endl;
	cout << "|" << setw(94) << left << "Total before taxes" << "RM" << setw(18) << fixed << setprecision(2) << right << totalPriceAlldays << "|" << endl;
	cout << "|" << setw(94) << left << "SST" << "RM" << setw(18) << fixed << setprecision(2) << right << SST << "|" << endl;
	cout << "|" << setw(94) << left << serviceName << "RM" << setw(18) << fixed << setprecision(2) << right << servicePrice << "|" << endl;
	cout << "|" << setw(93) << left << finalresult.selectedvoucher << "-RM" << setw(18) << fixed << setprecision(2) << right << finalresult.rebate << "|" << endl;
	cout << "|==================================================================================================================|" << endl;
	cout << "|" << setw(94) << left << "Grand Total" << "RM" << setw(18) << fixed << setprecision(2) << right << grandtotal << "|" << endl;
	cout << "|==================================================================================================================|" << endl;

	// Select Payment Method 
	int paymentMethod, accountNo, cardNumber, PIN;
	string paymentMethodName;
	double cashAmount, change = 0.00;

	// Call table
	paymentMethodTable();

	cout << setw(56) << left << "Please select payment method (1-5)" << ":";
	cin >> paymentMethod;

	// Validation for paymentMethod
	while (cin.fail() || paymentMethod < 1 || paymentMethod > 5) {
		cin.clear(); // clear the error 
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore unwanted characters for input
		cout << "Error: Please enter a number between 1 and 5." << endl;
		cout << setw(56) << left << "Please select payment method (1-5)" << ":";
		cin >> paymentMethod;
	}

	switch (paymentMethod) {
	case 1:
		paymentMethodName = "Credit/Debit Cards";
		cardNumber = getValidatedInput("Card Number");
		PIN = pinValidation("PIN");
		cashAmount = grandtotal;
		break;
	case 2:
		paymentMethodName = "Bank Transfer";
		accountNo = getValidatedInput("Account Number");
		PIN = pinValidation("PIN");
		cashAmount = grandtotal;
		break;
	case 3:
		paymentMethodName = "Touch N Go";
		PIN = pinValidation("PIN");
		cashAmount = grandtotal;
		break;
	case 4:
		paymentMethodName = "Apple Pay";
		PIN = pinValidation("PIN");
		cashAmount = grandtotal;
		break;
	case 5:
		do {
			paymentMethodName = "Cash Payment";
			cashAmount = getValidatedInput("Payment Amount");
			if (cashAmount >= grandtotal) {
				change = cashAmount - grandtotal;
			}
			else {
				cout << "Insufficient amount. Please make payment again." << endl;
			}
		} while (cashAmount < grandtotal);
		break;
	}

	// Booking Confirmation 
	cout << setfill(' ') << "\n|==================================================================================================================|" << endl;
	cout << "|                                               Elegant Hideaway Airbnb                                            |" << endl;
	cout << "|eleganthideaway@gamil.com           +6018-889 8888            Elegant Kuala Lumpur         www.eleganthideaway.com|" << endl;
	cout << "|==================================================================================================================|" << endl;
	cout << "|Booking Confirmation                                                                                              |" << endl;
	cout << "|==================================================================================================================|" << endl;
	cout << "|Dear," << setw(109) << left << name << "|" << endl;
	cout << "|Your hotel booking is confirmed.                                                                                  |" << endl;
	cout << "|Thank you for booking your stay with Elegant Hideaway Airbnb. We are looking forward to your visit                |" << endl;
	cout << "|Your booking details are as follow :                                                                              |" << endl;
	cout << "|==================================================================================================================|" << endl;
	cout << "|" << setw(20) << left << "Name" << ":" << setw(20) << left << name << setw(43) << " " << "Check-In Date " << setw(4) << right << ":" << setw(2) << left << showpoint << checkInDay << "/" << setw(2) << left << startMonth << "/" << startYear << "  |" << endl;
	cout << "|" << setw(20) << left << "Phone Number" << ":" << setw(20) << left << showpoint << phoneNumber << setw(43) << " " << "Check-Out Date" << setw(4) << right << ":" << setw(2) << showpoint << left << checkOutDay << "/" << setw(2) << left << endMonth << "/" << endYear << "  |" << endl;
	cout << "|" << setw(20) << left << "Total number of pax" << ":" << setw(20) << left << totalPax << setw(43) << " " << "Number Of Days" << setw(4) << right << ":" << setw(12) << left << numberOfDays << "|" << endl;
	cout << "|==================================================================================================================|" << endl;
	cout << "|" << setw(9) << left << "BookingNo" << setw(15) << right << "Room Number" << " " << setw(15) << right << "Hotel" << setw(10) << right << " " << setw(13) << right << "Quantity" << setw(5) << right << " " << setw(20) << right << "Price Per Room" << setw(5) << right << " " << setw(17) << right << "Total Price" << setw(5) << right << "|" << endl;
	cout << "|==================================================================================================================|" << endl;

		for (int j = 0; j < totalRooms; ++j) {
			if (rooms[j].roomNo == roomNo) {
				double roomPrice = rooms[j].price;
				double bookingTotalPrice = roomPrice * quantity;
				totalPrice += bookingTotalPrice;

				cout << "|" << setw(6) << right << bookingNo << setw(7) << " " << setw(5) << right << rooms[j].roomNo << setw(7) << " " << setw(25) << left << rooms[j].hotelName << " " << setw(9) << right << quantity << setw(9) << right << " " << "RM" << setw(21) << right << fixed << setprecision(2) << rooms[j].price << setw(4) << right << "RM" << setw(18) << right << fixed << setprecision(2) << bookingTotalPrice << "|" << endl;
				// Print services
				cout << "|Services: " << setw(104) << left << rooms[j].service << "|" << endl;
				cout << "|" << setw(115) << right << "|" << endl;

			}
		}

	cout << "|==================================================================================================================|" << endl;
	cout << "|Payment Summary :                                                                                                 |" << endl;
	cout << "|==================================================================================================================|" << endl;
	cout << "|" << setw(94) << left << "Total before taxes" << "RM" << setw(18) << fixed << setprecision(2) << right << totalPriceAlldays << "|" << endl;
	cout << "|" << setw(94) << left << "SST" << "RM" << setw(18) << fixed << setprecision(2) << right << SST << "|" << endl;
	cout << "|" << setw(94) << left << serviceName << "RM" << setw(18) << fixed << setprecision(2) << right << servicePrice << "|" << endl;
	cout << "|" << setw(93) << left << finalresult.selectedvoucher << "-RM" << setw(18) << fixed << setprecision(2) << right << finalresult.rebate << "|" << endl;
	cout << "|==================================================================================================================|" << endl;
	cout << "|" << setw(94) << left << "Grand Total" << "RM" << setw(18) << fixed << setprecision(2) << right << grandtotal << "|" << endl;
	cout << "|==================================================================================================================|" << endl;
	cout << "|" << setw(94) << left << "Payment Method :" << setw(20) << right << paymentMethodName << "|" << endl;
	cout << "|" << setw(94) << left << "Payment Amount :" << "RM" << setw(18) << fixed << setprecision(2) << right << cashAmount << "|" << endl;
	cout << "|" << setw(94) << left << "Change\t :" << "RM" << setw(18) << fixed << setprecision(2) << right << change << "|" << endl;
	cout << "|==================================================================================================================|" << endl;
	cout << "|Additional Information :                                                                                          |" << endl;
	cout << "|Please CHECK-IN from 3 PM and CHECK-OUT before 12 PM. If delayed check-out, we will charge RM 20 per hour.        |" << endl;
	cout << "|                                                                                                                  |" << endl;
	cout << "|If you have any questions, please don't hesitate to contact us.                                                   |" << endl;
	cout << "|We hope you enjoy your stay with us !!!                                                                           |" << endl;
	cout << "|==================================================================================================================|" << endl;

	return grandtotal;
}




