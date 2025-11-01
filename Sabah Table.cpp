#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void SabahArea() {
	// Sabah Area
	cout << "\nSabah" << endl;

	// Title of the table
	cout << setfill('=') << left << setw(153) << "=" << endl;
	cout << setfill(' ') << "|" << setw(3) << right << "No" << setw(2) << "|" << setw(14) << "Name" << setw(11) << "|" << setw(18) << "Location" << setw(11) << "|";
	cout << setw(10) << "Price" << setw(6) << "|" << setw(13) << "Bed Type" << setw(6) << "|";
	cout << setw(14) << "Room Type" << setw(6) << "|" << setw(14) << "Room Size" << setw(6) << "|" << setw(12) << "Service" << setw(6) << "|" << endl;

	// Information of Borneo Bliss Hotel
	cout << setfill('=') << setw(154) << " " << endl;
	cout << setfill(' ') << "|" << setw(3) << "1" << setw(2) << "|" << setw(24) << left << "Borneo Bliss Hotel" << "|" << setw(28) << left << "123, Jalan Pantai, 88000" << "|";
	cout << setw(9) << left << "RM" << setw(6) << left << "320.00" << "|" << setw(13) << right << " King  " << setw(6) << "|";
	cout << setw(14) << " Deluxe " << setw(6) << "|" << setw(14) << "30-40 sqm" << setw(6) << "|" << setw(12) << " WiFi  " << setw(6) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "Kota Kinabalu" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(13) << "Breakfast" << setw(5) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(10) << "Pool" << setw(8) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(12) << " Parking" << setw(6) << "|" << endl;

	// Information of Kinabalu View
	cout << setfill('=') << setw(154) << " " << endl;
	cout << setfill(' ') << "|" << setw(3) << "2" << setw(2) << "|" << setw(24) << left << "Kinabalu View" << "|" << setw(28) << left << "102, Jalan Central Centre, " << "|";
	cout << setw(9) << left << "RM" << setw(6) << left << "270.00" << "|" << setw(13) << right << " Queen  " << setw(6) << "|";
	cout << setw(12) << "Standard" << setw(8) << "|" << setw(14) << "25-35 sqm" << setw(6) << "|" << setw(12) << " WiFi  " << setw(6) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "88100 Kota Kinabalu, Sabah" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(13) << "Breakfast" << setw(5) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(12) << " Shuttle Service" << setw(2) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(12) << " Airport Transfer" << setw(1) << "|" << endl;

	// Information of Sunset Coastal Resort
	cout << setfill('=') << setw(154) << " " << endl;
	cout << setfill(' ') << "|" << setw(3) << "3" << setw(2) << "|" << setw(24) << left << "Sunset Coastal Resort" << "|" << setw(28) << left << "1-76, Jalan Seaside Tanjung" << "|";
	cout << setw(9) << left << "RM" << setw(6) << left << "380.00" << "|" << setw(13) << right << " Double " << setw(6) << "|";
	cout << setw(14) << "Suite  " << setw(6) << "|" << setw(14) << "35-45 sqm" << setw(6) << "|" << setw(12) << " WiFi  " << setw(6) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "Aru, 88300 Kota Kinabalu" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(13) << "Breakfast" << setw(5) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(12) << "    Restaurant" << setw(4) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(12) << "Spa   " << setw(6) << "|" << endl;

	// Information of Sabah Serenity Lodge
	cout << setfill('=') << setw(154) << " " << endl;
	cout << setfill(' ') << "|" << setw(3) << "4" << setw(2) << "|" << setw(24) << left << "Sabah Serenity Lodge" << "|" << setw(28) << left << "8, Jalan Heritage Old Town," << "|";
	cout << setw(9) << left << "RM" << setw(6) << left << "290.00" << "|" << setw(13) << right << "  Queen  " << setw(6) << "|";
	cout << setw(14) << "Superior" << setw(6) << "|" << setw(14) << "20-30 sqm" << setw(6) << "|" << setw(12) << " WiFi  " << setw(6) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "88400 Kota Kinabalu, Sabah" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(13) << "Breakfast" << setw(5) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(12) << "Concierge" << setw(6) << "|" << endl;

	// Information of Horizon Hotel
	cout << setfill('=') << setw(154) << " " << endl;
	cout << setfill(' ') << "|" << setw(3) << "5" << setw(2) << "|" << setw(24) << left << "Horizon Hotel" << "|" << setw(28) << left << "55, Jalan View Waterfront," << "|";
	cout << setw(9) << left << "RM" << setw(6) << left << "450.00" << "|" << setw(13) << right << "  King  " << setw(6) << "|";
	cout << setw(14) << "Executive" << setw(7) << " | " << setw(14) << "40-50 sqm" << setw(6) << " | " << setw(12) << " WiFi  " << setw(6) << " | " << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "88500 Kota Kinabalu, Sabah" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(13) << "Breakfast" << setw(5) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(12) << " BUsiness Center" << setw(2) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(12) << " Conference Rooms" << setw(1) << "|" << endl;

	cout << setfill('=') << setw(154) << " " << setfill(' ') << endl;
}