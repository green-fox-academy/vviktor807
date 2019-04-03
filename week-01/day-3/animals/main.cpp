#include <iostream>

int main() {
    int numbChickens;
    int numbPigs;
    std::cout << "Please enter how many chickens you have:" <<std::endl;
    std::cin >> numbChickens;
    std::cout << "Please enter how many pigs you have:" <<std::endl;
    std::cin >> numbPigs;
    std::cout << "The animals have " << ((numbChickens * 2) + (numbPigs * 4)) << " legs in total." <<std::endl;
    return 0;
}