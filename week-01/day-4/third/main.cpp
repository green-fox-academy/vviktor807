#include <iostream>

int main() {
int b;
    std::cout << "Please enter a number:" <<std::endl;
    std::cin >> b;

    if (b % 2 == 0) {
        std::cout << "Your number is even. " <<std::endl;
    }else {
        std::cout << "Your number is odd." <<std::endl;
    } 
    return 0;
}