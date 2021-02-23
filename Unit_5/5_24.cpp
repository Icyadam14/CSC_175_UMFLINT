//
// Created by adamk on 2/22/2021.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initialize variables
    vector<double> userVals; // A vector to hold the user's input integers
    int listSize;
    int threshold;

    // Get vector size and resize vector accordingly
    cin >> listSize;
    userVals.resize(listSize);

    // Get user input
    for (int i = 0; i < listSize; ++i) {
        cin >> userVals.at(i);
    }

    // Get threshold
    cin >> threshold;

        // Return values less than or equal to the threshold
        for(double userVal : userVals) {
            if(userVal <= threshold) {
                cout << userVal << ",";
            }
        }
    cout << endl;
    return 0;
}
