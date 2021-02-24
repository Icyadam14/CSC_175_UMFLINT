//
// Created by Adam Kahl on 2/23/2021.
//

#include <iostream>
using namespace std;

void computeCoins(string &coin, int &n, int &amount_left) {

    // Check for quarters
    if(amount_left >= 25) {
        coin = "Quarter(s)";
        n = amount_left / 25;
        amount_left -= (n * 25);
    } // Check for dimes
    else if(amount_left >= 10) {
        coin = "Dime(s)";
        n = amount_left / 10;
        amount_left -= (n * 10);
    } // Check for nickles
    else if(amount_left >= 5) {
        coin = "Nickle(s)";
        n = amount_left / 5;
        amount_left -= (n * 5);
    } // Check for pennies
    else if(amount_left >= 1) {
        coin = "Penny(Pennies)";
        n = amount_left / 1;
        amount_left -= (n * 1);
    }
}

int main()
{
    string coin_name; //variable that will hold coin denomination names
    int chg; //variable that holds the amount of change to convert to coins
    int num; //variable that holds the number of coins of each denomination

    cout << "Enter an amount of change to calculate coins output: ";
    cin >> chg;
    cout << endl << endl;
    while (chg > 0) // loop that repeats until chg equals zero
    {
        computeCoins(coin_name, num, chg); //function call to convert chg to coins
        cout << num << " " << coin_name << " "; //output of the number of each coin
    }
    cout << endl;
    return 0;
}

