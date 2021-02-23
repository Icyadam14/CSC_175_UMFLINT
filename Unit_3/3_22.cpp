//
// Created by adamk on 1/31/2021.
//

#include <iostream>
using namespace std;

int main() {
    // Initialize variables
    int dollars = 0, quarters = 0, dimes = 0, nickels = 0, pennies = 0, userInput;

    // Get user input
    cin >> userInput;

    // Check if amount is greater than zero
    if (userInput > 0) {

        // Determine number of each coin
        while (userInput >= 100) {
            userInput -= 100;
            dollars++;
        }

        while (userInput >= 25) {
            userInput -= 25;
            quarters++;
        }
        while (userInput >= 10) {
            userInput -= 10;
            dimes++;
        }
        while (userInput >= 5) {
            userInput -= 5;
            nickels++;
        }
        while (userInput >= 1) {
            userInput -= 10;
            pennies++;
        }

        // Return number of each coin
        if (dollars > 0) {
            if (dollars == 1) {
                cout << "1 Dollar" << endl;
            } else {
                cout << dollars << " Dollars" << endl;
            }
        }

        if (quarters > 0) {
            if (quarters == 1) {
                cout << "1 Quarter" << endl;
            } else {
                cout << quarters << " Quarters" << endl;
            }
        }

        if (dimes > 0) {
            if (dimes == 1) {
                cout << "1 Dime" << endl;
            } else {
                cout << dimes << " Dimes" << endl;
            }
        }

        if (nickels > 0) {
            if (nickels == 1) {
                cout << "1 Nickel" << endl;
            } else {
                cout << nickels << " Nickels" << endl;
            }
        }

        if (pennies > 0) {
            if (pennies == 1) {
                cout << "1 Penny" << endl;
            } else {
                cout << pennies << " Pennies" << endl;
            }
        }

        // Return no change if less than zero
    } else {
        cout << "No change" << endl;
    }

    return 0;
}