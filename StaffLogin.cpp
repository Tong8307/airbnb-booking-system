#include <iostream>
#include <string>

using namespace std;

bool stafflogin() {
    const int NUM_STAFFS = 3;
    const string correctStaffIDs[NUM_STAFFS] = { "staff1", "staff2", "staff3" };
    const string correctPasswords[NUM_STAFFS] = { "password1", "password2", "password3" };

    string inputStaffID;
    string inputPassword;
    char staffchoice;

    while (true) {
        bool isAuthenticated = false;  // Flag to check if user is authenticated

        // Loop until the correct Staff ID and Password are entered
        while (!isAuthenticated) {
            cout << "\nLogin" << endl;
            cout << "----------------------------" << endl;

            // Prompt and get Staff ID
            cout << "Staff ID: ";
            cin >> inputStaffID;

            // Prompt and get Password
            cout << "Password: ";
            cin >> inputPassword;

            // Check if the entered Staff ID and Password are correct
            bool idExists = false;
            for (int i = 0; i < NUM_STAFFS; ++i) {
                if (inputStaffID == correctStaffIDs[i]) {
                    idExists = true;
                    if (inputPassword == correctPasswords[i]) {
                        cout << "Login successful!\n" << endl;
                        isAuthenticated = true;  // Exit the loop
                        return true;
                        break;
                    }
                    else {
                        cout << "Incorrect Password. Please try again." << endl;
                        break; // Exit to ask if user wants to continue
                    }
                }
            }

            if (!idExists) {
                cout << "Incorrect Staff ID. Please try again." << endl;
            }

            // If authentication was not successful, ask if user wants to try again
            if (!isAuthenticated) {
                cout << "Do you want to try again? (Y/N): ";
                cin >> staffchoice;
                while (staffchoice != 'Y' && staffchoice != 'y' && staffchoice != 'N' && staffchoice != 'n') {
                    cout << "Invalid input. Please enter 'Y' for Yes or 'N' for No: ";
                    cin >> staffchoice;
                }

                // If user does not want to continue, exit the loop and return false
                if (staffchoice != 'Y' && staffchoice != 'y') {
                    cout << "Exiting staff interface..." << endl;
                    return false;  // Indicate failed authentication
                }
            }
        }

        // If authenticated, ask if the user wants to continue in the staff interface
        cout << "Do you want to continue in the staff interface? (Y/N): ";
        cin >> staffchoice;
        while (staffchoice != 'Y' && staffchoice != 'y' && staffchoice != 'N' && staffchoice != 'n') {
            cout << "Invalid input. Please enter 'Y' for Yes or 'N' for No: ";
            cin >> staffchoice;
        }

        // Exit if the user does not want to continue
        if (staffchoice != 'Y' && staffchoice != 'y') {
            cout << "Exiting staff interface..." << endl;
            return false;  // Indicate successful login
        }
    }
}
