//
// Created by adamk on 1/31/2021.
//

#include <iostream>
using namespace std;

int main() {
    // Initialize variables
    int int1;
    int int2;
    int int3;
    int min;

    // Get user input
    cin >> int1;
    cin >> int2;
    cin >> int3;

    // Find minimum
    if (int1 < int2) {
        min = int1;
    } else {
        min = int2;
    }
    if(int3 < min) {
        min = int3;
    }

    // Return results
    cout << min << endl;
    return 0;
}