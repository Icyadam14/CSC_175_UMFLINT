//
// Created by Adam Kahl on 2/23/2021.
//

#include <iostream>
using namespace std;

/* Define your function here */

// Function to swap 2 values
void SwapValues(int& userVal1, int& userVal2) {
    int tempVal;
    tempVal = userVal1;
    userVal1 = userVal2;
    userVal2 = tempVal;
}

int main() {
    /* Type your code here. Your code must call the function.  */

    // Initialize variables
    int val1;
    int val2;

    // Get user input
    cin >> val1;
    cin >> val2;

    // Call functions
    SwapValues(val1, val2);

    // Output swapped values
    cout << val1 << " " << val2 << endl;
    return 0;
}