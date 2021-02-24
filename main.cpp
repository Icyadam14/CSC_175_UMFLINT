#include <iostream>
#include "vector"
using namespace std;

int main() {
    vector<int> userValues;
    int userNum;
    userNum = 0;
    userValues.push_back(45);
    userValues.push_back(55);
    userNum = userValues.pop_back();
    cout << userNum;
}