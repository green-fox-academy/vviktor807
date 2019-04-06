#include <iostream>

// Write a program that reads a number from the standard input, then draws a
// square like this:
//
//
// %%%%%%
// %    %
// %    %
// %    %
// %    %
// %%%%%%
//
// The square should have as many lines as the number was
int main() {

    int a = 6;

    for (int i = 0; i < a; ++i) {

        std::cout << "*";
    }
    std::cout << std::endl;

    for (int j = 0; j < a - 2; ++j) {

        std::cout << "*";

        for (int k = 0; k < a - 2; k++) {

            std::cout << " ";
        }
        std::cout << "*" << std::endl;

    }
    for (int i = 0; i < a; ++i) {

        std::cout << "*";

    }
    std::cout << std::endl;

    return 0;
}