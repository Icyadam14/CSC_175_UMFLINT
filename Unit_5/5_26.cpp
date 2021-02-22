//
// Created by adamk on 2/22/2021.
//

#include <iostream>

using namespace std;

// TODO: Write a void function SelectionSortDescendTrace() that takes
//       an integer array and the number of elements in the array as arguments,
//       and sorts the array into descending order.

void SelectionSortDescendTrace(int numbers [], int numElements) {

    // Inatilize variables
    int i;
    int j;
    int temp;
    int indexLargest;

    // Sort List
    for (i = 0; i < numElements - 1; ++i) {

        // Find index of largest remaining element
        indexLargest = i;
        for (j = i + 1; j < numElements; ++j) {

            if (numbers[j] > numbers[indexLargest]) {
                indexLargest = j;
            }
        }

        // Swap numbers[i] and numbers[indexSmallest]
        temp = numbers[i];
        numbers[i] = numbers[indexLargest];
        numbers[indexLargest] = temp;

        // Output numbers after each iteration
        for(int x = 0; x < numElements; x++) {
            cout << numbers[x] << " ";
        }
        cout << endl;
    }
}


int main(int argc, char* argv[]) {
    int input = 0, i = 0;
    int numElements = 0;
    int numbers [10];

    // TODO: Read in a list of up to 10 positive integers; stop when
    //       -1 is read. Then call SelectionSortDescendTrace() function.

    // Get user input until value is -1
    cin >> input;
    while (input != -1) {
        numbers[i] = input;
        cin >> input;
        i++;
    }

    // Call sort function
    SelectionSortDescendTrace(numbers, i);

    return 0;
}