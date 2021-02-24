//
// Created by Adam Kahl on 2/23/2021.
//

#include<iostream>

using namespace std;

// Find greatest common factor between two values
int GCF(int a, int b) {
    int gcf;
    if(max(a, b) % min(a, b) == 0) {
        return min(a, b);
    } else {
        gcf = GCF(min(a, b), max(a, b) % min(a, b));
    }
    return gcf;
}

int main()
{
    int a, b;

    cout <<" Enter two integer values you want to find the GCF of: ";
    cin >> a >> b;
    cout << "\n\n The greatest common factor of " << a  <<" and " << b << " is " << GCF(a,b)<< endl;

    return 0;
}