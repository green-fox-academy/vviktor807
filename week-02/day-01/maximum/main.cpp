#include <iostream>

// Create a program which first asks for a number
// this number indicates how many integers we want to store in an array
// and than asks for numbers till the user fills the array
// It should print out the biggest number in the given array and the memory address of it
int main() {

    int arraySize = 0;
    std::cout << "Enter the size of the array:" << std::endl;
    std::cin >> arraySize;

    int array[arraySize];

    for (int i = 0; i < arraySize; ++i) {

        std::cin >> array[i];

    }
    int *max = &array[0];
    for (int j = 0; j <  arraySize; ++j) {

        if (array[j] > *max) {
            max = &array[j];
        }
    }

    std::cout << *max << std::endl;
    std::cout << max << std::endl;

    return 0;
}