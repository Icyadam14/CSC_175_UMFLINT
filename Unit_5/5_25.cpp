//
// Created by adamk on 2/22/2021.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Initialize variables
    vector<string> userWords; // A vector to hold the user's input integers
    int listSize;
    char keyChar;

    // Get vector size and resize vector accordingly
    cin >> listSize;
    userWords.resize(listSize);

    // Get user input
    for (int i = 0; i < listSize; ++i) {
        cin >> userWords.at(i);
    }

    // Get key character
    cin >> keyChar;

    // Return words that contain key character
    for(string userWord : userWords) {
        if(userWord.find(keyChar) < userWord.size()) {
            cout << userWord << ",";
        }
    }

    return 0;
}
