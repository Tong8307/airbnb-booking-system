#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void MelakaArea() {
	// Melaka Area
	cout << "\nMelaka" << endl;

	// Title of the table
	cout << setfill('=') << left << setw(153) << "=" << endl;
	cout << setfill(' ') << "|" << setw(3) << right << "No" << setw(2) << "|" << setw(14) << "Name" << setw(11) << "|" << setw(18) << "Location" << setw(11) << "|";
	cout << setw(10) << "Price" << setw(6) << "|" << setw(13) << "Bed Type" << setw(6) << "|";
	cout << setw(14) << "Room Type" << setw(6) << "|" << setw(14) << "Room Size" << setw(6) << "|" << setw(12) << "Service" << setw(6) << "|" << endl;

	// Information of Heritage Haven
	cout << setfill('=') << setw(154) << " " << endl;
	cout << setfill(' ') << "|" << setw(3) << "1" << setw(2) << "|" << setw(24) << left << "Heritage Haven" << "|" << setw(28) << left << "45, Jalan Hang Jebat, 75200" << "|";
	cout << setw(9) << left << "RM" << setw(6) << left << "300.00" << "|" << setw(13) << right << " Queen " << setw(6) << "|";
	cout << setw(14) << " Superior " << setw(6) << "|" << setw(14) << "25-35 sqm" << setw(6) << "|" << setw(12) << " WiFi  " << setw(6) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "Melaka" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(13) << "Breakfast" << setw(5) << "|" << endl;

	// Information of Melaka River Inn
	cout << setfill('=') << setw(154) << " " << endl;
	cout << setfill(' ') << "|" << setw(3) << "2" << setw(2) << "|" << setw(24) << left << "Melaka River Inn" << "|" << setw(28) << left << "10, Jalan Laksamana, 75000" << "|";
	cout << setw(9) << left << "RM" << setw(6) << left << "250.00" << "|" << setw(13) << right << "  King  " << setw(6) << "|";
	cout << setw(12) << "Deluxe" << setw(8) << "|" << setw(14) << "20-30 sqm" << setw(6) << "|" << setw(12) << " WiFi  " << setw(6) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "Melaka" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(13) << "Breakfast" << setw(5) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(12) << " Shuttle Service" << setw(2) << "|" << endl;

	// Information of Coastal Retreat
	cout << setfill('=') << setw(154) << " " << endl;
	cout << setfill(' ') << "|" << setw(3) << "3" << setw(2) << "|" << setw(24) << left << "Coastal Retreat" << "|" << setw(28) << left << "8, Jalan Kampung, 45500" << "|";
	cout << setw(9) << left << "RM" << setw(6) << left << "350.00" << "|" << setw(13) << right << " Double " << setw(6) << "|";
	cout << setw(14) << "Suite  " << setw(6) << "|" << setw(14) << "30-40 sqm" << setw(6) << "|" << setw(12) << " WiFi  " << setw(6) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "Melaka" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(13) << "Breakfast" << setw(5) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(12) << "Gym   " << setw(6) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(12) << "Spa   " << setw(6) << "|" << endl;

	// Information of Grand Melaka Resort
	cout << setfill('=') << setw(154) << " " << endl;
	cout << setfill(' ') << "|" << setw(3) << "4" << setw(2) << "|" << setw(24) << left << "Grand Melaka Resort" << "|" << setw(28) << left << "100, Jalan Melaka Raya, " << "|";
	cout << setw(9) << left << "RM" << setw(6) << left << "500.00" << "|" << setw(13) << right << "  Queen  " << setw(6) << "|";
	cout << setw(14) << "Executive" << setw(6) << "|" << setw(14) << "35-45 sqm" << setw(6) << "|" << setw(12) << " WiFi  " << setw(6) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "75000 Melaka" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(13) << "Breakfast" << setw(5) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(12) << "Lounge " << setw(6) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(12) << " Business Center" << setw(2) << "|" << endl;

	// Information of Historical Lodge
	cout << setfill('=') << setw(154) << " " << endl;
	cout << setfill(' ') << "|" << setw(3) << "5" << setw(2) << "|" << setw(24) << left << "Historical Lodge" << "|" << setw(28) << left << "23, Jalan Merdeka, 75000" << "|";
	cout << setw(9) << left << "RM" << setw(6) << left << "200.00" << "|" << setw(13) << right << "  Single  " << setw(6) << "|";
	cout << setw(14) << "Standard" << setw(7) << " | " << setw(14) << "20-30 sqm" << setw(6) << " | " << setw(12) << " WiFi  " << setw(6) << " | " << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "Melaka" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(13) << "Breakfast" << setw(5) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(12) << " Laundry Service" << setw(2) << "|" << endl;

	cout << setfill('=') << setw(154) << " " << setfill (' ') << endl;
}