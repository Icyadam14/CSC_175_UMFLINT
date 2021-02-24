//
// Created by Adam Kahl on 2/23/2021.
//

#include <iostream>
using namespace std;

double KiloToPounds(double kilos) {
    // Change / to *
    return (kilos * 2.204);
}

int main() {
    double kilos;
    double pounds;

    cin >> kilos;

    pounds = KiloToPounds(kilos);
    cout << pounds << " lbs" << endl;

    return 0;
}