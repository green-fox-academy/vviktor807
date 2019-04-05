#include <iostream>

// Create a program that prints all the even numbers between 0 and 500
int main() {

    int i;

    for (i = 0; i <= 500; i++) {

        if (i % 2 == 0) {

            std::cout << i << std::endl;

        }
    }

    return 0;
}