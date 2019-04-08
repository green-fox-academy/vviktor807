#include <iostream>

// Change the value of the variable called 'temperature' using a pointer
    // (you have to create the pointer first)
int main() {

    float temperature = 21.3;

    float *tempPointer = &temperature;

    (*tempPointer)++;
    
    std::cout << *tempPointer << std::endl;

    return 0;
}