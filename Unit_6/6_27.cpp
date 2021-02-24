//
// Created by Adam Kahl on 2/23/2021.
//

#include <iostream>
#include <vector>
using namespace std;

/* Define your function here */

// Sort values in vector
void SortVector(vector<int>& myVec) {
    int vectorSize = myVec.size();
    int tempVal;
    int minVal;
    int minIndex;
    for (int i = 0; i < vectorSize; ++i) {
        minVal = myVec.at(i);
        minIndex = i;

        // Find smallest value in rest of list
        for (int j = i; j < vectorSize; ++j) {
            if(myVec.at(j) < minVal) {
                minVal = myVec.at(j);
                minIndex = j;
            }
        }

        // Swap 2 values in array
        tempVal = myVec.at(i);
        myVec.at(i) = myVec.at(minIndex);
        myVec.at(minIndex) = tempVal;
    }
}


int main() {
    // Get vector size and initialize vector
    int vectorSize;
    cin >> vectorSize;
    vector<int> numbers;
    numbers.resize(vectorSize);

    // Get user input
    for (int i = 0; i < vectorSize; ++i) {
        cin >> numbers.at(i);
    }

    // Call vector sort function
    SortVector(numbers);

    // Output values in vector
    for (int i = 0; i < vectorSize; ++i) {
        cout << numbers.at(i) << " ";
    }

    cout << endl;

    return 0;
}
