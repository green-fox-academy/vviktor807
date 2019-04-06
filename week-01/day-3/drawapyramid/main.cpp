#include <iostream>

// Write a program that reads a number from the standard input, then draws a
// pyramid like this:
//
//
//    *
//   ***
//  *****
// *******
//
// The pyramid should have as many lines as the number was

int main() {

    int a = 8;

    for (int j = 0; j < a - 2 ; ++j) {

        std::cout << "*";

    }
    std::cout << std::endl;

    for (int i = 0; i < a ; ++i) {

        std::cout << "*";
    }
    std::cout << std::endl;
    return 0;
}