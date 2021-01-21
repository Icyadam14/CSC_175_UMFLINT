//
// Created by adamk on 1/21/2021.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Initialize variables
    double x;
    double y;
    double z;

    // Get user input
    cin >> x;
    cin >> y;
    cin >> z;

    // Return results
    cout << pow(x, z) << " ";
    cout << pow(x, pow(y, z)) << " ";
    cout << abs(y) << " ";
    cout << sqrt(pow((x * y), z)) << endl;


    return 0;
}