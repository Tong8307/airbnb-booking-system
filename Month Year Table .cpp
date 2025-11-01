#include <iostream>
#include <iomanip>
using namespace std;

void monthYear() {
    cout << setfill('=') << setw(40) << "=" << endl;
    cout << setfill(' ') << "|" << setw(10) << " " << "Month" << setw(8) << " " << setw(2) << " " << "|" << setw(4) << " " << "Year" << setw(5) << right << "|" << endl;
    cout << setfill('=') << setw(40) << "=" << endl;
    cout << setfill(' ') << "|" << setw(3) << " " << "1" << setw(2) << " " << "2" << setw(2) << " " << "3" << setw(3) << " " << "4" << setw(3) << " " << "5" << setw(3) << " " << "6" << setw(3) << " " << "|" << setw(4) << " " << "2024" << setw(5) << right << "|" << endl;
    cout << "|" << setw(3) << " " << "7" << setw(2) << " " << "8" << setw(2) << " " << "9" << setw(2) << " " << "10" << setw(2) << " " << "11" << setw(2) << " " << "12" << setw(18) << setw(3) << " " << "|" << setw(4) << " " << "2025" << setw(5) << right << "|" << endl;
    cout << setfill('=') << setw(40) << "=" << endl;
}