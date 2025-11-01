#include <iostream>
#include <iomanip>
using namespace std;

void MenuListtable() {
    cout << setfill('-') << setw(40) << "-" << endl;
    cout << setfill(' ') << setw(15) << "" << "Menu List" << endl;
    cout << setfill('-') << setw(40) << "-" << endl;
    cout << "1. Order Room" << endl;
    cout << "2. Check-In & Check-Out (Staff)" << endl;
    cout << "3. Cancellation" << endl;
    cout << "4. Report (Staff)" << endl;
    cout << "5. Feedback" << endl;
    cout << "6. Exit" << endl;
    cout << setfill('-') << setw(40) << "-" << endl;
}
