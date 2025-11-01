#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Definition for the summary display function
void displaySummary(int totalUnits, double totalAmount, const string& location) {
    cout << location << " Summary" << endl;
    cout << setfill('=') << left << setw(43) << "=" << endl;
    cout << setfill(' ') << "|" << setw(25) << left << "Total Units" << "|"
        << setw(15) << "Total Amount" << "|" << endl;
    cout << setfill('-') << left << setw(43) << "-" << endl;
    cout << setfill(' ');

    cout << "|" << setw(25) << left << totalUnits << "|"
        << setw(15) << totalAmount << "|" << endl;
    cout << setfill('=') << left << setw(43) << "=" << endl;
    cout << setfill(' ');
}