#include <iostream>

int main() {
    int distInKm;
    std::cout <<"Please enter the distance in km:"<< std::endl;
    std::cin >> distInKm;
    std::cout << (distInKm * 0.62) << "m" <<std::endl;
    return 0;
}