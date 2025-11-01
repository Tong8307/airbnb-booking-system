#include <iostream>  // Include this for cout
#include <iomanip>
#include <limits>
#include <string>

using namespace std;

void displayFeedback() {
    const int MAX_FEEDBACK = 5; // Define maximum feedback entries
    int ratings[MAX_FEEDBACK] = { 0 };
    string names[MAX_FEEDBACK];
    string comments[MAX_FEEDBACK];
    int feedbackCount = 0;

    cout << "\nCustomer Feedback:\n";

    // Print table header
    cout << "+===================================================================================================================+\n";
    cout << setfill(' ') << "| " << setw(10) << left << "Rating" << "| " << setw(20) << left << "Name" << "| " << setw(80) << left << "Feedback" << "|" << endl;
    cout << "+===================================================================================================================+\n";

    // Print preloaded feedback again (if needed, or you might choose to skip this)
    cout << setfill(' ') << "| " << setw(10) << left << "**" << "| " << setw(20) << left << "JOHN TERRY" << "| " << setw(80) << left << "The property's location is conveniently close to the Sky Arena Sports Complex." << "|" << endl;
    cout << setfill(' ') << "| " << setw(10) << " " << "| " << setw(20) << " " << "| " << setw(80) << left << "However, there are no nearby options for food or convenience stores within " << "|" << endl;
    cout << setfill(' ') << "| " << setw(10) << " " << "| " << setw(20) << " " << "| " << setw(80) << left << "walking distance.The cleanliness left much to be desired." << "|" << endl;
    cout << "+-------------------------------------------------------------------------------------------------------------------+\n";

    cout << setfill(' ') << "| " << setw(10) << left << "***" << "| " << setw(20) << left << "KLAY NICK" << "| " << setw(80) << left << "Overall ok. Need to improve on room cleanliness. Aircond sejuk. Got toiletries," << "|" << endl;
    cout << setfill(' ') << "| " << setw(10) << " " << "| " << setw(20) << " " << "| " << setw(80) << left << "towel and mini pantry.Nearby a lot of shopping malls also." << "|" << endl;
    cout << "+-------------------------------------------------------------------------------------------------------------------+\n";

    cout << setfill(' ') << "| " << setw(10) << left << "****" << "| " << setw(20) << left << "CHAN" << "| " << setw(80) << left << "Staff helpful and friendly. Location ok but stay on 1st floor bit noisy earlier," << "|" << endl;
    cout << setfill(' ') << "| " << setw(10) << " " << "| " << setw(20) << " " << "| " << setw(80) << left << "but ok after midnight." << "|" << endl;
    cout << "+-------------------------------------------------------------------------------------------------------------------+\n";

    cout << setfill(' ') << "| " << setw(10) << left << "*" << "| " << setw(20) << left << "SAM" << "| " << setw(80) << left << "Very bad experience and not recommended." << "|" << endl;
    cout << "+-------------------------------------------------------------------------------------------------------------------+\n";

    cout << setfill(' ') << "| " << setw(10) << left << "*****" << "| " << setw(20) << left << "KANE" << "| " << setw(80) << left << "Very nice, will come again next time." << "|" << endl;
    cout << "+-------------------------------------------------------------------------------------------------------------------+\n";

    cout << setfill(' ') << "| " << setw(10) << left << "**" << "| " << setw(20) << left << "AUNE" << "| " << setw(80) << left << "Sound proof not good. Closed door can hear it clearly and window curtain" << "|" << endl;
    cout << setfill(' ') << "| " << setw(10) << " " << "| " << setw(20) << " " << "| " << setw(80) << left << "bit dirty. Overall is ok. Have to give extra attention on room cleanliness." << "|" << endl;
    cout << "+-------------------------------------------------------------------------------------------------------------------+\n";

    char decision;
    do {
        // Adding new feedback
        cout << "\nWould you like to leave a rating? (y/n): ";
        cin >> decision;

        if (decision == 'y') {
            if (feedbackCount >= MAX_FEEDBACK) {
                cout << "Sorry, feedback capacity has been reached. Unable to add more feedback." << endl;
                break;
            }

            int rating;
            do {
                cout << "Please enter your rating from 1 - 5 stars: ";
                cin >> rating;

                if (cin.fail() || rating < 1 || rating > 5) {
                    cout << "Invalid input. Rating must be between 1 and 5 stars." << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                else {
                    break;
                }
            } while (true);

            cout << "Please enter your name: ";
            cin.ignore(); // To clear the newline character from the buffer
            getline(cin, names[feedbackCount]);

            cout << "Please enter your feedback: ";
            getline(cin, comments[feedbackCount]);

            ratings[feedbackCount] = rating;
            feedbackCount++;

            cout << "\nThank you for your feedback! Your feedback has been recorded." << endl;

            // Display all feedback (including new ones)
            cout << "\nCurrent Feedback:\n";
            cout << "+===================================================================================================================+\n";
            cout << setfill(' ') << "| " << setw(10) << left << "Rating" << "| " << setw(20) << left << "Name" << "| " << setw(80) << left << "Feedback" << "|" << endl;
            cout << "+===================================================================================================================+\n";

            // Print preloaded feedback again (if needed, or you might choose to skip this)
            cout << setfill(' ') << "| " << setw(10) << left << "**" << "| " << setw(20) << left << "JOHN TERRY" << "| " << setw(80) << left << "The property's location is conveniently close to the Sky Arena Sports Complex." << "|" << endl;
            cout << setfill(' ') << "| " << setw(10) << " " << "| " << setw(20) << " " << "| " << setw(80) << left << "However, there are no nearby options for food or convenience stores within " << "|" << endl;
            cout << setfill(' ') << "| " << setw(10) << " " << "| " << setw(20) << " " << "| " << setw(80) << left << "walking distance.The cleanliness left much to be desired." << "|" << endl;
            cout << "+-------------------------------------------------------------------------------------------------------------------+\n";

            cout << setfill(' ') << "| " << setw(10) << left << "***" << "| " << setw(20) << left << "KLAY NICK" << "| " << setw(80) << left << "Overall ok. Need to improve on room cleanliness. Aircond sejuk. Got toiletries," << "|" << endl;
            cout << setfill(' ') << "| " << setw(10) << " " << "| " << setw(20) << " " << "| " << setw(80) << left << "towel and mini pantry.Nearby a lot of shopping malls also." << "|" << endl;
            cout << "+-------------------------------------------------------------------------------------------------------------------+\n";

            cout << setfill(' ') << "| " << setw(10) << left << "****" << "| " << setw(20) << left << "CHAN" << "| " << setw(80) << left << "Staff helpful and friendly. Location ok but stay on 1st floor bit noisy earlier," << "|" << endl;
            cout << setfill(' ') << "| " << setw(10) << " " << "| " << setw(20) << " " << "| " << setw(80) << left << "but ok after midnight." << "|" << endl;
            cout << "+-------------------------------------------------------------------------------------------------------------------+\n";

            cout << setfill(' ') << "| " << setw(10) << left << "*" << "| " << setw(20) << left << "SAM" << "| " << setw(80) << left << "Very bad experience and not recommended." << "|" << endl;
            cout << "+-------------------------------------------------------------------------------------------------------------------+\n";

            cout << setfill(' ') << "| " << setw(10) << left << "*****" << "| " << setw(20) << left << "KANE" << "| " << setw(80) << left << "Very nice, will come again next time." << "|" << endl;
            cout << "+-------------------------------------------------------------------------------------------------------------------+\n";

            cout << setfill(' ') << "| " << setw(10) << left << "**" << "| " << setw(20) << left << "AUNE" << "| " << setw(80) << left << "Sound proof not good. Closed door can hear it clearly and window curtain" << "|" << endl;
            cout << setfill(' ') << "| " << setw(10) << " " << "| " << setw(20) << " " << "| " << setw(80) << left << "bit dirty. Overall is ok. Have to give extra attention on room cleanliness." << "|" << endl;
            cout << "+-------------------------------------------------------------------------------------------------------------------+\n";
            // Display new feedback
            for (int i = 0; i < feedbackCount; i++) {
                cout << "| " << setw(10) << left << string(ratings[i], '*') << "| " << setw(20) << left << names[i] << "| " << setw(80) << left << comments[i] << "|" << endl;
                cout << "+-------------------------------------------------------------------------------------------------------------------+\n";
            }
        }
        else if (decision != 'n') {
            cout << "Invalid input. Please enter 'y' for yes or 'n' for no." << endl;
        }

    } while (decision != 'n');

    cout << "\nThank you for visiting. If you have any comments or suggestions later, please don't hesitate to share!" << endl;
}

