//
// Created by adamk on 2/10/2021.
// 4.16 LAB: Print string in reverse
//

#include <iostream>
using namespace std;

int main() {
    // Initialize variable and ge first line
    string input;
    getline(cin, input);

    // Loop until first letter of string is 'd'
    while(tolower(input.at(0)) != 'd') {
        for(int i = input.length(); i > 0; i--) {
            cout << input.at(i - 1);
        }
        cout << endl;
        getline(cin, input);
    }

    return 0;
}
