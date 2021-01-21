//
// Created by adamk on 1/21/2021.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Initialize Variables
    char c;
    double x1;
    double x2;
    double y1;
    double y2;
    double result;

    // Get user input
    cin >> c;
    cin >> x1;
    cin >> c;
    cin >> y1;
    cin >> c;
    cin >> c;
    cin >> x2;
    cin >> c;
    cin >> y2;

    // Return result
    result = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << result << endl;

    return 0;
}