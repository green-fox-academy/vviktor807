#include <iostream>
// Write a program that asks for two numbers and prints the bigger one
int main() {

    int a;
    int b;

    std::cout << "Please enter a number:" <<std::endl;
    std::cin >> a;
    std::cout << "Please enter another number:" <<std::endl;
    std::cin >> b;

    if (a > b) {

        std::cout << a <<std::endl;

    }else if (b > a) {

        std::cout << b <<std::endl;

    }else {

        std::cout << "The given numbers are equal." <<std::endl;

    }

    return 0;
}