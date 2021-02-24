//
// Created by Adam Kahl on 2/23/2021.
//

#include <iostream>
using namespace std;

// Calculate fibonacci for n
int Fibonacci(int n) {
    int curr = 0;
    int next = 1;
    int temp;
    /* Type your code here. */
    if(n < 0) {
        return -1;
    } else if(n == 0) {
        return 0;
    } else {
        for (int i = 0; i < n; ++i) {
            temp = next;
            next = curr + next;
            curr = temp;
        }
        return curr;
    }

}

int main() {

    // Initialize variables
    int startNum;

    // Get user input
    cin >> startNum;

    // Print output
    cout << "Fibonnacci(" << startNum << ") is " << Fibonacci(startNum) << endl;

    return 0;
}