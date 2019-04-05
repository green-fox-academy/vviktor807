#include <iostream>

// Create a program that asks for a number and prints the multiplication table with that number
int main() {

    int a;

    std::cout << "Please enter a number:" << std::endl;
    std::cin >> a;

    for (int i = 1; i <= 10; i++) {

        std::cout << i << " * " << a << " = " << i * a << std::endl;

    }
    return 0;
}