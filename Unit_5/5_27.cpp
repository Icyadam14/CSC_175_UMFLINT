//
// Created by adamk on 2/22/2021.
//

#include <iostream>
using namespace std;

int main() {

    // Initialize variables
    int numValues = 0;
    int numbers[5];
    int newVal;
    bool addVal;

    // Get user input until values in list is 5
    while(numValues < 5) {
        cout << "Enter value #" << numValues + 1 << ": ";
        cin >> newVal;
        addVal = true;
        for (int i = 0; i < numValues; i++) {
            if(numbers[i] == newVal) {
                addVal = false;
            }
        }
        if(addVal) {
            numbers[numValues] = newVal;
            numValues++;

        } else {
            cout << endl << "Error: " << newVal << " has already been entered! Try again!" << endl;
        }

        cout << endl;
    }

    // Print resulting array
    cout << "Your list of numbers is: [ ";
    for(int number : numbers) {
        cout << number << " ";
    }
    cout << "]";

    return 0;
}
