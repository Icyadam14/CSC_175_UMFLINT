//
// Created by adamk on 2/22/2021.
//

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    // Initialize variables
    vector<double> userVals; // A vector to hold the user's input integers
    int listSize;

    // Get vector size and resize vector accordingly
    cin >> listSize;
    userVals.resize(listSize);

    // Get user input
    for (int i = 0; i < listSize; ++i) {
        cin >> userVals.at(i);
    }

    // Find max
    double max = userVals.at(0);
    for(double userVal : userVals) {
        if(userVal > max) {
            max = userVal;
        }
    }

    // Set precision
    cout << fixed << setprecision(2);

    // Return values divided by the max value
    for(double userVal : userVals) {
        cout << userVal / max << " ";
    }

    cout << endl;
    return 0;
}
