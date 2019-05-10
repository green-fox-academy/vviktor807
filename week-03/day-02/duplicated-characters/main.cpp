#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

std::string eraseDuplicate(std::string fileName);

int main()
{
    std::ifstream file("../duplicated.txt");
    std::cout << eraseDuplicate("../duplicated.txt") << std::endl;


    return 0;
}

std::string eraseDuplicate(std::string fileName)
{
    std::ifstream file;
    std::string result;
    file.exceptions(std::fstream::badbit);
    try {
        file.open(fileName);
        std::string line;
        while (std::getline(file, line)) {
            //std::cout << line << std::endl;

            for (int i = 0; i < line.length(); ++i) {
                if (i % 2) {
                    result += line[i]; //minden második karaktert hozzáadok a result stringemhez.
                }
            }
            result += '\n';
        }
        file.close();
    } catch (std::fstream::failure &failure) {
        std::cerr << failure.what() << std::endl;
    }
    return result;
}
