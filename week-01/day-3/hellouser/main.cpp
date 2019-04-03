#include <iostream>

int main() {
    std::string yourname;
    std::cout << "Please insert your name:" << std::endl;
    std::cin >> yourname;
    std::cout << "Hello, " << yourname << "!" << std::endl;

    return 0;
}