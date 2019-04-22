
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // Open a file called "my-file.txt"
    // Write your name in it as a single line

    std::ofstream myFile("../my-file.txt");
    if (myFile.is_open()) {
        std::cout << "The file is open." << std::endl;
    }
    myFile << "Varga Viktor" << std::endl;
    myFile.close();

    std::ifstream myFile1("../my-file.txt");
    if (myFile.is_open()) {
        std::cout << "The file is open." << std::endl;
    }
    std::string name;
    while (myFile1 >> name) {
        std::cout << name << " ";
    }

    myFile1.close();
    return 0;
}