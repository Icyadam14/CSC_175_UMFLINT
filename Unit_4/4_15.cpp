//
// Created by adamk on 2/10/2021.
// 4.15 LAB: Varied amount of input data
//

#include <iostream>
using namespace std;

int main() {
    // Initialize variables
    int input;
    int sum = 0;
    int count = 0;

    // Get first input and set as max
    cin >> input;
    int max = input;

    // Iterate until negative number is found
    while(input >= 0) {
        sum += input;
        count++;
        if(input > max) {
            max = input;
        }
        // Get new input at the end of each loop
        cin >> input;
    }

    // Output results
    cout << max << " " << (sum / count) << endl;
    return 0;
}
