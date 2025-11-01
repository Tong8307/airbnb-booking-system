#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void SelangorArea() {
	// Selangor Area
	cout << "\nSelangor" << endl;

	// Title of the table
	cout << setfill('=') << left << setw(153) << "=" << endl;
	cout << setfill(' ') << "|" << setw(3) << right << "No" << setw(2) << "|" << setw(14) << "Name" << setw(11) << "|" << setw(18) << "Location" << setw(11) << "|";
	cout << setw(10) << "Price" << setw(6) << "|" << setw(13) << "Bed Type" << setw(6) << "|";
	cout << setw(14) << "Room Type" << setw(6) << "|" << setw(14) << "Room Size" << setw(6) << "|" << setw(12) << "Service" << setw(6) << "|" << endl;

	// Information of Metro Plaza Hotel
	cout << setfill('=') << setw(154) << " " << endl;
	cout << setfill(' ') << "|" << setw(3) << "1" << setw(2) << "|" << setw(24) << left << "Metro Plaza Hotel" << "|" << setw(28) << left << "45, Jalan Metro, 40000" << "|";
	cout << setw(9) << left << "RM" << setw(6) << left << "420.00" << "|" << setw(13) << right << " King  " << setw(6) << "|";
	cout << setw(14) << " Executive " << setw(6) << "|" << setw(14) << "40-50 sqm" << setw(6) << "|" << setw(12) << " WiFi  " << setw(6) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "Shah Alam, Selangor" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(11) << "Gym" << setw(7) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(10) << "Spa" << setw(8) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(12) << "   Lounge" << setw(6) << "|" << endl;

	// Information of City View Resort
	cout << setfill('=') << setw(154) << " " << endl;
	cout << setfill(' ') << "|" << setw(3) << "2" << setw(2) << "|" << setw(24) << left << "City View Resort" << "|" << setw(28) << left << "10, Jalan Sunset, 40100" << "|";
	cout << setw(9) << left << "RM" << setw(6) << left << "550.00" << "|" << setw(13) << right << " Queen  " << setw(6) << "|";
	cout << setw(12) << "Deluxe" << setw(8) << "|" << setw(14) << "35-45 sqm" << setw(6) << "|" << setw(12) << " WiFi  " << setw(6) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "Petaling Jaya, Selangor" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(13) << "Dinner" << setw(5) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(15) << "Free Parking" << setw(3) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(12) << " Airport Shuttle" << setw(2) << "|" << endl;

	// Information of Elite Comfort Hotel
	cout << setfill('=') << setw(154) << " " << endl;
	cout << setfill(' ') << "|" << setw(3) << "3" << setw(2) << "|" << setw(24) << left << "Elite Comfort Hotel" << "|" << setw(28) << left << "15, Jalan Elite, 40200" << "|";
	cout << setw(9) << left << "RM" << setw(6) << left << "480.00" << "|" << setw(13) << right << " Double " << setw(6) << "|";
	cout << setw(14) << "Suite  " << setw(6) << "|" << setw(14) << "50-60 sqm" << setw(6) << "|" << setw(12) << " WiFi  " << setw(6) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "Subang Jaya, Selangor" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(13) << "Breakfast" << setw(5) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(9) << " Conference Room" << setw(2) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(15) << " Laundry Service" << setw(2) << "|" << endl;

	// Information of Urban Haven Hotel
	cout << setfill('=') << setw(154) << " " << endl;
	cout << setfill(' ') << "|" << setw(3) << "4" << setw(2) << "|" << setw(24) << left << "Urban Haven Hotel" << "|" << setw(28) << left << "20, Jalan Urban, 40300" << "|";
	cout << setw(9) << left << "RM" << setw(6) << left << "390.00" << "|" << setw(13) << right << "  Queen  " << setw(6) << "|";
	cout << setw(14) << "Premier" << setw(6) << "|" << setw(14) << "30-40 sqm" << setw(6) << "|" << setw(12) << " WiFi  " << setw(6) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "Klang, Selangor" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(13) << "Breakfast" << setw(5) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(9) << "  Afternoon Tea" << setw(3) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(9) << " Business Center" << setw(2) << "|" << endl;

	// Information of Selangor Grand
	cout << setfill('=') << setw(154) << " " << endl;
	cout << setfill(' ') << "|" << setw(3) << "5" << setw(2) << "|" << setw(24) << left << "Selangor Grand" << "|" << setw(28) << left << "25, Jalan Grand, 40400" << "|";
	cout << setw(9) << left << "RM" << setw(6) << left << "350.00" << "|" << setw(13) << right << "  Single  " << setw(6) << "|";
	cout << setw(14) << "Superior" << setw(7) << " | " << setw(14) << "30-35 sqm" << setw(6) << " | " << setw(12) << " WiFi  " << setw(6) << " | " << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "Shah Alam, Selangor" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(13) << "Breakfast" << setw(5) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(12) << "24Hour Front Desk" << setw(1) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(12) << "Lounge" << setw(6) << "|" << endl;

	cout << setfill('=') << setw(154) << " " << setfill (' ') << setfill(' ') << endl;
}