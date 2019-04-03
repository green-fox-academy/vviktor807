#include <iostream>

int main() {
    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;
    std::cout << ((24 - currentHours)* 60 - currentMinutes)* 60 - currentSeconds <<std::endl;
    return 0;
}