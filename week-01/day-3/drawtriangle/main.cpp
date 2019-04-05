#include <iostream>

// Write a program that reads a number from the standard input, then draws a
// triangle like this:
//
// *
// **
// ***
// ****
//
// The triangle should have as many lines as the number was
int main() {

    int a;

    std::cout << "Please enter a number:" << std::endl;
    std::cin >> a;

    for (int i = 0; i < a; i++) {

        for (int k = 0; k < i + 1; k++) {

            std::cout << "*";

        }
        std::cout << std::endl;
    }

    return 0;
}