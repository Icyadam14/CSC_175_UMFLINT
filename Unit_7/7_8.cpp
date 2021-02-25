//
// Created by Adam Kahl on 2/24/2021.
//
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


int main() {

    // Initialize variables
    string file;
    int map[6][7];

    // Get file to input
    ifstream inFile;
    cout << " Enter the name of the file to load: ";
    cin >> file;

    // Input selected file
    if(file == "map1.txt") {
        inFile.open("map1.txt");
    } else if (file == "map2.txt") {
        inFile.open("map2.txt");
    }

    // Return error if file entered is now one of the two choices
    else {
        cout << endl << endl << " Error!: " << file << " was not found!" << endl;
        return 0;
    }

    // Return error if file cannot be opened
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }

    // Input values into map array
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 7; j++) {
            inFile >> map[i][j];
        }
    }

    cout << endl;

    // Check for peaks
    bool isPeak;
    int peakCount = 0;
    for(int row = 4; row > 0; row--) {
        for(int col = 5; col > 0; col--) {
            isPeak = true;

            // Check value to top of cell
            isPeak = map[row][col] > map[row - 1][col];

            // Check value to left of cell
            if(isPeak) {
                isPeak = map[row][col] > map[row][col - 1];
            }

            // Check value to bottom of cell
            if(isPeak) {
                isPeak = map[row][col] > map[row + 1][col];
            }

            // Check value to right of cell
            if(isPeak) {
                isPeak = map[row][col] > map[row][col + 1];
            }

            // Print output if there is a peak
            if(isPeak) {
                peakCount++;
                char a = (70 - row);
                cout << "Peak " << peakCount << " is at coordinate " << a << (7 - col) << " with an elevation of " << map[row][col] << " feet." << endl;
            }
        }
    }

    cout << endl;

    // Check for valleys
    bool isValley;
    int valleyCount = 0;
    for(int row = 4; row > 0; row--) {
        for(int col = 5; col > 0; col--) {
            isValley = true;

            // Check value to top of cell
            isValley = map[row][col] < map[row - 1][col];

            // Check value to left of cell
            if(isValley) {
                isValley = map[row][col] < map[row][col - 1];
            }

            // Check value to bottom of cell
            if(isValley) {
                isValley = map[row][col] < map[row + 1][col];
            }

            // Check value to right of cell
            if(isValley) {
                isValley = map[row][col] < map[row][col + 1];
            }

            // Print output if there is a peak
            if(isValley) {
                valleyCount++;
                char a = (70 - row);
                cout << "Valley " << valleyCount << " is at coordinate " << a << (7 - col) << " with an elevation of " << map[row][col] << " feet." << endl;
            }
        }
    }

    inFile.close();
    return 0;
}