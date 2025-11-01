#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void KualaLumpurArea() {
	// Kuala Lumpur Area
	cout << "\nKuala Lumpur" << endl;

	// Title of the table
	cout << setfill('=') << left << setw(153) << "=" << endl;
	cout << setfill(' ') << "|" << setw(3) << right << "No"<< setw(2) << "|" << setw(14) << "Name" << setw(11) << "|" << setw(18) << "Location" << setw(11) << "|";
	cout << setw(10) << "Price" << setw(6) << "|" << setw(13) << "Bed Type" << setw(6) << "|";
	cout << setw(14) << "Room Type" << setw(6) << "|" << setw(14) << "Room Size" << setw(6) << "|" << setw(12) << "Service" << setw(6) << "|" << endl;

	// Information of Cubic Botanical
	cout << setfill('=') << setw(154) << " " << endl;
	cout << setfill(' ') << "|" << setw(3) << "1" << setw(2) << "|" << setw(24) << left << "Cubic Botanical" << "|" << setw(28) << left << "12, Jln Pantai Sentral 3," << "|";
	cout << setw(9) << left << "RM" << setw(6) << left << "650.00" << "|" << setw(13) << right << " Single " << setw(6) << "|";
	cout << setw(14) << " Deluxe " << setw(6) << "|" << setw(14) << "20-30 sqm" << setw(6) << "|" << setw(12) << " WiFi  " << setw(6) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "bangsar south, 59200 KL" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(13) << "Breakfast" << setw(5) << "|" << endl;

	// Information of Mont Kiara
	cout << setfill('=') << setw(154) << " " << endl;
	cout << setfill(' ') << "|" << setw(3) << "2" << setw(2) << "|" << setw(24) << left << "Mont Kiara" << "|" << setw(28) << left << "1, Jalan Kiara, Mont Kiara" << "|";
	cout << setw(9) << left << "RM" << setw(6) << left << "200.00" << "|" << setw(13) << right << "  Queen  " << setw(6) << "|";
	cout << setw(14) << "Standard" << setw(6) << "|" << setw(14) << "20-30 sqm" << setw(6) << "|" << setw(12) << " WiFi  " << setw(6) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "50480 Kuala Lumpur" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(13) << "Breakfast" << setw(5) << "|" << endl;

	// Information of Urban Retreat
	cout << setfill('=') << setw(154) << " " << endl;
	cout << setfill(' ') << "|" << setw(3) << "3" << setw(2) << "|" << setw(24) << left << "Urban Retreat" << "|" << setw(28) << left << "15, Jalan Pudu, 55100 " << "|";
	cout << setw(9) << left << "RM" << setw(6) << left << "450.00" << "|" << setw(13) << right << " Double " << setw(6) << "|";
	cout << setw(14) << "Superior" << setw(6) << "|" << setw(14) << "25-35 sqm" << setw(6) << "|" << setw(12) << " WiFi  " << setw(6) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "Kuala Lumpur" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(13) << "Breakfast" << setw(5) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(12) << "Gym   " << setw(6) << "|" << endl;

	// Information of Luxe Residence
	cout << setfill('=') << setw(154) << " " << endl;
	cout << setfill(' ') << "|" << setw(3) << "4" << setw(2) << "|" << setw(24) << left << "Luxe Residence" << "|" << setw(28) << left << "8, Jalan Tun Razak,55000" << "|";
	cout << setw(9) << left << "RM" << setw(6) << left << "950.00" << "|" << setw(13) << right << "  King  " << setw(6) << "|";
	cout << setw(14) << "Executive" << setw(6) << "|" << setw(14) << "35-45 sqm" << setw(6) << "|" << setw(12) << " WiFi  " << setw(6) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "Kuala Lumpur" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(13) << "Breakfast" << setw(5) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(12) << "Lounge " << setw(6) << "|" << endl;

	// Information of Panorama Hotel
	cout << setfill('=') << setw(154) << " " << endl;
	cout << setfill(' ') << "|" << setw(3) << "5" << setw(2) << "|" << setw(24) << left << "Panorama Hotel" << "|" << setw(28) << left << "6, Jalan Changkat Thambi," << "|";
	cout << setw(9) << left << "RM" << setw(6) << left << "850.00" << "|" << setw(13) << right << "  Queen  " << setw(6) << "|";
	cout << setw(14) << " Suite  " << setw(6) << "|" << setw(14) << "30-40 sqm" << setw(6) << "|" << setw(12) << " WiFi  " << setw(6) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "Kuala Lumpur" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(13) << "Breakfast" << setw(5) << "|" << endl;
	cout << setfill(' ') << "|" << setw(3) << " " << setw(2) << "|" << setw(24) << left << " " << "|" << setw(28) << left << "" << "|";
	cout << setw(9) << left << "" << setw(6) << left << "" << "|" << setw(13) << right << "" << setw(6) << "|";
	cout << setw(14) << "" << setw(6) << "|" << setw(14) << "" << setw(6) << "|" << setw(12) << "Pool  " << setw(6) << "|" << endl;

	cout << setfill('=') << setw(154) << " " << setfill(' ') << endl;
} 