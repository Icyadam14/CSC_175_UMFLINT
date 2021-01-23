//
// Created by adamk on 1/23/2021.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Initialize variables
    double distance;
    double angle;
    double pHeight;
    double bHeight;

    // Get user input
    cout << "Enter your distance from building (feet): " << endl;
    cin >> distance;
    cout << "Enter the angle of the line of sight: " << endl;
    cin >> angle;
    cout << "Enter your height (feet): ";
    cin >> pHeight;

    // Preform Calculations
    bHeight = (tan(angle * (M_PI/180.0)) * distance) + pHeight;

    // Return results
    cout.setf(ios::fixed);
    cout.precision(0);
    cout << "\n\nThe height of the building is " << bHeight << " feet tall.\n";

    return 0;
}