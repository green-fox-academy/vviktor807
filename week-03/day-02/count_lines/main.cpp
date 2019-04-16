#include <iostream>
#include <fstream>
#include <string>

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file
int lines(std::string name);

int main()
{
    std::string filename = "../my-file.txt";
    std::ofstream myFile;
    myFile.open(filename);
    myFile << "i am the first line.\n" << "i am the second line.\n" << "i am the third line";
    myFile.close();
    std::cout << lines(filename) << std::endl;

    return 0;
}

int lines(std::string name)
{
    std::ifstream myFile;
    myFile.exceptions(std::ifstream::badbit | std::ifstream::failbit); //megadom a kiveteleket majd a 36 sorban elkapom
    std::string line; //deklaralom a stringet hogy a 32. sorban megadhassam
    int i = 0;
    try {
        myFile.open(name);
        while (!myFile.eof()) {
            i++;
            std::getline(myFile, line);

        }
        myFile.close();
    } catch (std::ifstream::failure& e) { //e stands for exception
        return 0;
    }
    return i;
}