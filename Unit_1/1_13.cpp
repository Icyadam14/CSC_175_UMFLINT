//
// Created by Adam Kahl on 1/20/2021.
//

#include <iostream>
using namespace std;

//Program to find the area of a right triangle


int main()
{
    double area;
    double side1;
    double side2;
    //Declaration of variables

    cout << "CSC 175\nArea of Triangle Calculator\n";
    //print header

    cout << "\nEnter the length of side 1: ";
    cin >> side1;
    cout << "\nEnter the length of side 2: ";
    cin >> side2;
    //collection of user input

    area = (side1) * (side2) / 2.0;

    cout << fixed;
    cout.precision(2);
    cout << "\n\nThe area of the right triangle is " << area << " square inches.\n\n";
    //output of results to console screen

    return 0;
}