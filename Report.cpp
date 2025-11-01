#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include "BookingSystem.h"

using namespace std;

// Function prototypes
void displaySummary(int totalUnits, double totalAmount, const string& location);

// Report function to display the summarized information
void Report(int locationNo, double grandtotal, BookingList& BL) {
    int totalunit = 0;

    // variables to store totals
    int kualaLumpurTotalUnits = 78;
    double kualaLumpurTotalAmount = 41000;

    int melakaTotalUnits = 65;
    double melakaTotalAmount = 20400;

    int penangTotalUnits = 99;
    double penangTotalAmount = 50880;

    int selangorTotalUnits = 56;
    double selangorTotalAmount = 20580;

    int sabahTotalUnits = 101;
    double sabahTotalAmount = 33840;

    int sarawakTotalUnits = 77;
    double sarawakTotalAmount = 35600;

    // Calculate total units from bookings
    for (int i = 0; i < BL.count; ++i) {
        totalunit += BL.bookings[i].quantity;
    }


    // Update totals based on locationNo
    switch (locationNo) {
    case 1: kualaLumpurTotalUnits += totalunit; kualaLumpurTotalAmount += grandtotal; break;
    case 2: melakaTotalUnits += totalunit; melakaTotalAmount += grandtotal; break;
    case 3: penangTotalUnits += totalunit; penangTotalAmount += grandtotal; break;
    case 4: selangorTotalUnits += totalunit; selangorTotalAmount += grandtotal; break;
    case 5: sabahTotalUnits += totalunit; sabahTotalAmount += grandtotal; break;
    case 6: sarawakTotalUnits += totalunit; sarawakTotalAmount += grandtotal; break;
    }

    int staffChoice;
    do {
        // Display menu
        cout << "\nHotel Report System\n";
        cout << "1. Kuala Lumpur\n";
        cout << "2. Melaka\n";
        cout << "3. Penang\n";
        cout << "4. Selangor\n";
        cout << "5. Sabah\n";
        cout << "6. Sarawak\n";
        cout << "7. Exit\n";
        cout << "Enter your choice (1-7): ";
        cin >> staffChoice;

        // Validate input
        if (cin.fail() || staffChoice < 1 || staffChoice > 7) {
            cin.clear(); // Clear input buffer
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid choice. Please enter a number between 1 and 7." << endl;
            continue; // Re-prompt the user
        }

        // Call appropriate function based on user choice
        switch (staffChoice) {
        case 1: displaySummary(kualaLumpurTotalUnits, kualaLumpurTotalAmount, "Kuala Lumpur"); break;
        case 2: displaySummary(melakaTotalUnits, melakaTotalAmount, "Melaka"); break;
        case 3: displaySummary(penangTotalUnits, penangTotalAmount, "Penang"); break;
        case 4: displaySummary(selangorTotalUnits, selangorTotalAmount, "Selangor"); break;
        case 5: displaySummary(sabahTotalUnits, sabahTotalAmount, "Sabah"); break;
        case 6: displaySummary(sarawakTotalUnits, sarawakTotalAmount, "Sarawak"); break;
        case 7: cout << "Exiting program." << endl; break;
        }

    } while (staffChoice != 7); // Continue until the user select5s 7 (Exit)
    BL.count = 0; // This ensure that the next call to Report start with a cclean slate
}