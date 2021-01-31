//
// Created by adamk on 1/31/2021.
//

#include <iostream>
using namespace std;

int main() {
    // Initialize variables
    char grade;
    char tickets;
    bool hadTickets;
    double gpa;
    int points;

    // Get user input
    cout << "Freshman (F), Sophomore (O), Junior (J), Senior (S): ";
    cin >> grade;
    cout << endl << "Had tickets last year? (y/n): ";
    cin >> tickets;
    cout << endl << "Please enter your GPA as a value between 0 and 4: ";
    cin >> gpa;

    // Ensure grade is lowercase
    grade = tolower(grade);

    // Set hadTickets to boolean value
    if(tolower(tickets) == 'y') {
        hadTickets = true;
    } else {
        hadTickets = false;
    }

    // Find points
    if(gpa <= 2.0) {
        points = (grade == 's') ? 135 : 90;
    } else if(gpa <= 3.0) {
        if(hadTickets) {
            if(grade == 'f') {
                points = 110;
            } else if(grade == 'o') {
                points = 130;
            } else {
                points = 150;
            }
        } else {
            if (grade == 'f') {
                points = 95;
            } else if (grade == 'o') {
                points = 115;
            } else {
                points = 130;
            }
        }
    } else if(gpa > 3.0) {
        if(hadTickets) {
            if(grade == 'f') {
                points = 135;
            } else if (grade == 's') {
                points = 195;
            } else {
                points = 170;
            }
        } else {
            if(grade == 'f') {
                points = 120;
            } else if(grade == 's') {
                points = 175;
            } else {
                points = 160;
            }
        }
    }

    // Return results
    cout << endl << endl << "Your available points are " << points << endl;
    return 0;
}
