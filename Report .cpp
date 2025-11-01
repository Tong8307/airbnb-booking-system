#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

// Define a struct to store hotel information
struct Hotel {
    int number;
    string name;
    double weeklyRate;
    double monthlyRate;
    double annualRate;
    string bedType;
    string roomType;
    string roomSize;
};

// Function prototypes
void displayHotels(const Hotel hotels[], int size, const string& location);

int BookingReport() {
    int choice;
    double bookingTotalPrice;

    // Data for each area
    const int kualaLumpurSize = 5;
    Hotel kualaLumpurHotels[kualaLumpurSize] = {
        {1, "Cubic Botanical", 500 + bookingTotalPrice, 2000 + bookingTotalPrice, 24000 + bookingTotalPrice, "Single", "Deluxe", "20-30 sqm"},
        {2, "Mont Kiara", 160 + bookingTotalPrice, 640 + bookingTotalPrice, 7680 + bookingTotalPrice, "Queen", "Standard", "20-30 sqm"},
        {3, "Urban Retreat", 375 + bookingTotalPrice, 1500 + bookingTotalPrice, 18000 + bookingTotalPrice, "Double", "Superior", "25-35 sqm"},
        {4, "Luxe Residence", 850 + bookingTotalPrice, 3400 + bookingTotalPrice, 40800 + bookingTotalPrice, "King", "Executive", "35-45 sqm"},
        {5, "Panorama Hotel", 700 + bookingTotalPrice, 2800 + bookingTotalPrice, 33600 + bookingTotalPrice, "Queen", "Suite", "30-40 sqm"}
    };

    const int sabahSize = 5;
    Hotel sabahHotels[sabahSize] = {
        {1, "Borneo Bliss Hotel", 320 + bookingTotalPrice, 1280 + bookingTotalPrice, 15360 + bookingTotalPrice, "King", "Deluxe", "30-40 sqm"},
        {2, "Kinabalu View", 270 + bookingTotalPrice, 1080 + bookingTotalPrice, 12960 + bookingTotalPrice, "Queen", "Standard", "25-35 sqm"},
        {3, "Sunset Coastal Resort", 380 + bookingTotalPrice, 1520 + bookingTotalPrice, 18240 + bookingTotalPrice, "Double", "Suite", "35-45 sqm"},
        {4, "Sabah Serenity Lodge", 290 + bookingTotalPrice, 1160 + bookingTotalPrice, 13920 + bookingTotalPrice, "Queen", "Superior", "20-30 sqm"},
        {5, "Horizon Hotel", 450 + bookingTotalPrice, 1800 + bookingTotalPrice, 21600 + bookingTotalPrice, "King", "Executive", "40-50 sqm"}
    };

    const int sarawakSize = 5;
    Hotel sarawakHotels[sarawakSize] = {
        {1, "Riverfront Resort", 350 + bookingTotalPrice, 1400 + bookingTotalPrice, 16800 + bookingTotalPrice, "Queen", "Deluxe", "35-45 sqm"},
        {2, "Heritage City Hotel", 580 + bookingTotalPrice, 2320 + bookingTotalPrice, 27900 + bookingTotalPrice, "King", "Executive", "45-50 sqm"},
        {3, "Borneo Vista Lodge", 400 + bookingTotalPrice, 1600 + bookingTotalPrice, 19200 + bookingTotalPrice, "Double", "Suite", "40-50 sqm"},
        {4, "Tropical Haven Hotel", 460 + bookingTotalPrice, 1840 + bookingTotalPrice, 22080 + bookingTotalPrice, "King", "Premier", "20-30 sqm"},
        {5, "Kuching Grand Inn", 310 + bookingTotalPrice, 1240 + bookingTotalPrice, 14880 + bookingTotalPrice, "Single", "Superior", "30-40 sqm"}
    };

    const int melakaSize = 5;
    Hotel melakaHotels[melakaSize] = {
        {1, "Heritage Haven", 300 + bookingTotalPrice, 1200 + bookingTotalPrice, 14400 + bookingTotalPrice, "Queen", "Superior", "25-35 sqm"},
        {2, "Melaka River Inn", 250 + bookingTotalPrice, 1000 + bookingTotalPrice, 12000 + bookingTotalPrice, "King", "Deluxe", "20-30 sqm"},
        {3, "Coastal Retreat", 350 + bookingTotalPrice, 1400 + bookingTotalPrice, 16800 + bookingTotalPrice, "Double", "Suite", "30-40 sqm"},
        {4, "Grand Melaka Resort", 500 + bookingTotalPrice, 2000 + bookingTotalPrice, 24000 + bookingTotalPrice, "Queen", "Executive", "35-45 sqm"},
        {5, "Historical Lodge", 200 + bookingTotalPrice, 800 + bookingTotalPrice, 9600 + bookingTotalPrice, "Single", "Standard", "20-30 sqm"}
    };

    const int selangorSize = 5;
    Hotel selangorHotels[selangorSize] = {
        {1, "Metro Plaza Hotel", 2940 + bookingTotalPrice, 12000 + bookingTotalPrice, 144000 + bookingTotalPrice, "King", "Executive", "40-50 sqm"},
        {2, "City View Resort", 3850 + bookingTotalPrice, 15400 + bookingTotalPrice, 184800 + bookingTotalPrice, "Queen", "Deluxe", "35-45 sqm"},
        {3, "Elite Comfort Hotel", 3360 + bookingTotalPrice, 13800 + bookingTotalPrice, 165600 + bookingTotalPrice, "Double", "Suite", "50-60 sqm"},
        {4, "Urban Haven Hotel", 2730 + bookingTotalPrice, 11100 + bookingTotalPrice, 133200 + bookingTotalPrice, "Queen", "Premier", "30-40 sqm"},
        {5, "Selangor Grand", 2520 + bookingTotalPrice, 10200 + bookingTotalPrice, 122400 + bookingTotalPrice, "King", "Deluxe", "35-45 sqm"}
    };

    const int penangSize = 5;
    Hotel penangHotels[penangSize] = {
        {1, "Penang View Hotel", 420 + bookingTotalPrice, 1680 + bookingTotalPrice, 20160 + bookingTotalPrice, "Queen", "Superior", "25-35 sqm"},
        {2, "Seaside Retreat", 310 + bookingTotalPrice, 1240 + bookingTotalPrice, 14880 + bookingTotalPrice, "King", "Suite", "30-40 sqm"},
        {3, "Island Oasis", 360 + bookingTotalPrice, 1440 + bookingTotalPrice, 17280 + bookingTotalPrice, "Double", "Deluxe", "20-30 sqm"},
        {4, "Penang Grand Hotel", 500 + bookingTotalPrice, 2000 + bookingTotalPrice, 24000 + bookingTotalPrice, "Single", "Executive", "35-45 sqm"},
        {5, "Bayview Resort", 450 + bookingTotalPrice, 1800 + bookingTotalPrice, 21600 + bookingTotalPrice, "King", "Premier", "40-50 sqm"}
    };

    while (true) {
        // Display menu
        cout << "\nHotel Report System\n";
        cout << "1. Kuala Lumpur\n";
        cout << "2. Sabah\n";
        cout << "3. Sarawak\n";
        cout << "4. Melaka\n";
        cout << "5. Selangor\n";
        cout << "6. Penang\n";
        cout << "7. Exit\n";
        cout << "Enter your choice (1-7): ";
        cin >> choice;

        // Validate input
        if (cin.fail() || choice < 1 || choice > 7) {
            cin.clear(); // Clear input buffer
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid choice. Please enter a number between 1 and 7." << endl;
            continue;
        }

        // Call appropriate function based on user choice
        switch (choice) {
        case 1: displayHotels(kualaLumpurHotels, kualaLumpurSize, "Kuala Lumpur"); break;
        case 2: displayHotels(sabahHotels, sabahSize, "Sabah"); break;
        case 3: displayHotels(sarawakHotels, sarawakSize, "Sarawak"); break;
        case 4: displayHotels(melakaHotels, melakaSize, "Melaka"); break;
        case 5: displayHotels(selangorHotels, selangorSize, "Selangor"); break;
        case 6: displayHotels(penangHotels, penangSize, "Penang"); break;
        case 7: cout << "Exiting program." << endl; return 0;
        default: cout << "Invalid choice." << endl;
        }
    }
}

// Definition for the display function
void displayHotels(const Hotel hotels[], int size, const string& location) {
    cout << location << endl;
    cout << setfill('=') << left << setw(120) << "=" << endl;
    cout << setfill(' ') << "|" << setw(3) << right << "No" << setw(2) << "|"
        << setw(24) << "Name" << "|"
        << setw(12) << "Weekly" << setw(2) << "|"
        << setw(12) << "Monthly" << setw(2) << "|"
        << setw(12) << "Annual" << setw(2) << "|"
        << setw(13) << "Bed Type" << setw(2) << "|"
        << setw(14) << "Room Type" << setw(2) << "|"
        << setw(14) << "Room Size" << setw(2) << "|" << endl;
    cout << setfill('-') << left << setw(120) << "-" << endl;
    cout << setfill(' ');

    for (int i = 0; i < size; ++i) {
        cout << "|" << setw(3) << right << hotels[i].number << setw(2) << "|"
            << setw(24) << hotels[i].name << "|"
            << setw(12) << hotels[i].weeklyRate << setw(2) << "|"
            << setw(12) << hotels[i].monthlyRate << setw(2) << "|"
            << setw(12) << hotels[i].annualRate << setw(2) << "|"
            << setw(13) << hotels[i].bedType << setw(2) << "|"
            << setw(14) << hotels[i].roomType << setw(2) << "|"
            << setw(14) << hotels[i].roomSize << setw(2) << "|" << endl;
        cout << setfill('-') << left << setw(120) << "-" << endl;
        cout << setfill(' ');
    }
}