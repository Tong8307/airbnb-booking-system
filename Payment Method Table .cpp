#include <iostream>
#include <iomanip>
using namespace std;

void paymentMethodTable() {
	cout << endl;
	cout << setfill(' ') << setfill('=') << setw(36) << "=" << endl;
	cout << setfill(' ') << "|" << setw(10) << " " << "Payment Method" << setw(10) << " " << "|" << endl;
	cout << setfill('=') << setw(36) << "=" << endl;
	cout << setfill(' ') << '|' << setw(3) << " " << "1. Credit/Debit Cards" << setw(10) << " " << "|" << endl;
	cout << setfill(' ') << '|' << setw(3) << " " << "2. Bank Transfer" << setw(15) << " " << "|" << endl;
	cout << setfill(' ') << '|' << setw(3) << " " << "3. Touch N Go" << setw(18) << " " << "|" << endl;
	cout << setfill(' ') << '|' << setw(3) << " " << "4. Apple Pay" << setw(19) << " " << "|" << endl;
	cout << setfill(' ') << '|' << setw(3) << " " << "5. Cash Payment" << setw(16) << " " << "|" << endl;
	cout << setfill('=') << setw(36) << "=" << setfill(' ') << endl;
}