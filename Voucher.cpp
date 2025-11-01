#include <iostream>
#include <iomanip>
#include <string>
#include "BookingSystem.h"

using namespace std;

RebateValue Voucher(double rebatePrice) {
    // Define the voucher codes and discounts
    string vouchers[6] = { "CNY8888", "HR4444", "DP6666", "MC1225", "V2141314", "WELCOME123" };
    double discounts[6] = { 0.08, 0.10, 0.12, 0.15, 0.18, 0.20 };

    string vouchername;
    double finalprice;
    double rebate;

    bool voucherFound = false;

    while (!voucherFound) {
        cout << "Enter your voucher code: ";
        cin >> vouchername;

        finalprice = rebatePrice;

        for (int i = 0; i < 6; ++i) {
            if (vouchername == vouchers[i]) {
                rebate = rebatePrice * discounts[i];
                voucherFound = true;
                break;
            }
        }

        if (!voucherFound) {
            cout << "Invalid voucher code. Please try again." << endl;
        }
    }

    cout << fixed << setprecision(2);

    RebateValue x = { rebate, vouchername };

    return x;
}
