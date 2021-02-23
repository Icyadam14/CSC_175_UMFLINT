//
// Created by adamk on 2/22/2021.
//

#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {
    // Initialize variables
    vector<int> userInts; // A vector to hold the user's input integers
    int listSize;

    // Get vector size and resize vector accordingly
    cin >> listSize;
    userInts.resize(listSize);

    // Get user input
    for (int i = 0; i < listSize; ++i) {
        cin >> userInts.at(i);
    }

    // Print values in reverse order
    for(int i = userInts.size(); i > 0; i--) {
        cout << userInts.at(i - 1) << ",";
    }
    cout << endl;
    return 0;
}
