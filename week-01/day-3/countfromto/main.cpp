#include <iostream>

// Create a program that asks for two numbers
// If the second number is not bigger than the first one it should print:
// "The second number should be bigger"
//
// If it is bigger it should count from the first number to the second by one
int main() {

    int a;
    int b;

    std::cout << "Please enter a number:" <<std::endl;
    std::cin >> a;
    std::cout << "Please enter another number:" <<std::endl;
    std::cin >> b;

    if (a > b) {

        std::cout << "The second number should be bigger:" << std::endl;

    }else if (a < b) {

        for (int i = a; i < b; i++) {

            std::cout << i << std::endl;

        }

    }
    return 0;
}