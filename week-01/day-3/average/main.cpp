#include <iostream>

int main() {
    int numb1;
    int numb2;
    int numb3;
    int numb4;
    int numb5;
    std::cout << "I need you to enter 5 different nubmers." <<std::endl;
    std::cout << "Enter one number at a time please!" << std::endl;
    std::cout << "Please enter the first number" <<std::endl;
    std::cin >> numb1;
    std::cout << "Please enter the second number" <<std::endl;
    std::cin >> numb2;
    std::cout << "Please enter the third number" <<std::endl;
    std::cin >> numb3;
    std::cout << "Please enter the fourth number" <<std::endl;
    std::cin >> numb4;
    std::cout << "Please enter the last number" <<std::endl;
    std::cin >> numb5;
    std::cout << "Sum: " << (numb1 + numb2 + numb3 + numb4 + numb5) <<std::endl;
    std::cout << "Average: " << ((numb1 + numb2 + numb3 + numb4 + numb5)/ 5) <<std::endl;
    return 0;
}