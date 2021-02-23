#include <iostream>
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    char letter1;
    char letter2;


    letter1 = 'p';
    while (letter1 <= 'q') {
        letter2 = 'x';
        while (letter2 <= 'y') {
            cout << letter1 << letter2 << " ";
            ++letter2;
        }
        ++letter1;
    }
    return 0;

}
