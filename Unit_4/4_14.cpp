//
// Created by adamk on 2/10/2021.
// 4.14.1: LAB: Convert to binary
//

#include <iostream>
using namespace std;

int main() {
    // Initialize variables
    int userInput;
    string output;

    // Get user input
    cin >> userInput;

    // Convert to binary
    while(userInput > 1) {
        output += to_string(userInput % 2);
        userInput /= 2;
    }
    // Add last digit
    output += to_string(userInput);

    // Output result
    cout << output << endl;

    return 0;
}
