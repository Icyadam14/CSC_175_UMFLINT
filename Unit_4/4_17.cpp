//
// Created by adamk on 2/10/2021.
// 4.17 LAB: Prime Number Finder
//

#include <iostream>
using namespace std;

int main() {
    // Prompt
    cout << "Check to see if your number is prime or composite. " << endl;
    cout << "Enter a whole number to test: ";

    // Initialize variables
    int input;
    bool isPrime = true;

    // Get input
    cin >> input;

    // Iterate through all number smaller than input to see if divisible
    for(int i = 2; i < input; i++) {
        if(input % i == 0) {
            isPrime = false;
            // Output if not prime
            cout << endl << "The number " << input << " is not prime because it is divisible by " << i << "." << endl;
            break;
        }

    }

    // If 'isPrime' does not get set to false, output is prime
    if(isPrime) {
        cout << endl << "The number " << input << " is a prime number!" << endl;
    }

    return 0;
}
