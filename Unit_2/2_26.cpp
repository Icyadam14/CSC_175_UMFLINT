//
// Created by adamk on 1/21/2021.
//

#include <iostream>
using namespace std;

int main() {
    // Initialize variables
    int userNum;
    int x;

    // Get user input
    cin >> userNum;
    cin >> x;

    // Return results
    userNum = userNum / x;
    cout << userNum << " ";
    userNum = userNum / x;
    cout << userNum << " ";
    userNum = userNum / x;
    cout << userNum << endl;

    return 0;
}
