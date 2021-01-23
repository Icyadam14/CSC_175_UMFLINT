//
// Created by adamk on 1/21/2021.
//

#include <iostream>
using namespace std;

int main() {
    // Initialize variables
    int const convFactor = 43560;
    int sqFeet;

    // Get user input
    cout << "Enter the square feet of the area to convert to acres:" << endl;
    cin >> sqFeet;

    // Return results
    cout << sqFeet << " square feet is equal to " << fixed;
    cout.precision(2);
    cout << double(sqFeet) / convFactor << " acres." << endl;

    return 0;
}
