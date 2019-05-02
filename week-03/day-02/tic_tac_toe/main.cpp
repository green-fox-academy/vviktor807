#include <iostream>
#include <fstream>
#include <string>
#include <vector>

char ticTacResult(std::string);

int main()
{
    // Write a function that takes a filename as string,
    // open and read it. The file data represents a tic-tac-toe
    // game result. Return 'X'/'O'/'draw' based on which player
    // has winning situation.

    std::cout << ticTacResult("win-o.txt");
    // should print O

    std::cout << ticTacResult("win-x.txt");
    // should print X

    std::cout << ticTacResult("draw.txt");
    // should print draw

    return 0;
}

char ticTacResult(std::string filename)
{
    char winner;
    std::vector<std::vector<char>> myVector;
    std::ifstream file;
    file.exceptions(std::ifstream::badbit);
    try {
        file.open(filename);
        std::string line;
        int counter = 0;
        while (std::getline(file, line)) {
            std::vector<char> row;
            for (int i = 0; i < line.length(); ++i) {
                row.push_back(line[i]);
            }
            myVector.push_back(row);
            counter++;
        }
        file.close();

    } catch (std::fstream::failure &e) {
        std::cerr << e.what() << std::endl;
    }
    for (int j = 0; j < myVector.size(); ++j) {
        int countWinner = 0;
        for (int k = 0; k < myVector[j].size() - 1; ++k) {
            if (myVector[j][k] == myVector[j][k + 1]) {
                countWinner++;
            } else {
                break;
            }
            if (countWinner == myVector.size() - 1) {
                return myVector[j][k];
            }
        }
    }
    for (int k = 0; k < myVector.size(); ++k) {
        int countWinner = 0;
        for (int j = 0; j < myVector.size() - 1; ++j) {
            if (myVector[j][k] == myVector[j + 1][k]) {
                countWinner++;
            } else {
                break;
            }
            if (countWinner == myVector.size() - 1) {
                return myVector[j][k];
            }
        }
    }
    for (int j = 0; j < myVector.size() - 1; ++j) {
        int countWinner = 0;
        for (int k = 0; k < myVector.size() - 1; ++k) {
            if (myVector[j][k] == myVector[j + 1][k + 1]) {
                countWinner++;
                j++;
                if (countWinner == myVector.size() - 1) {
                    return myVector[0][0];
                }
            } else {
                break;
            }
        }
    }
    for (int j = 0; j < myVector.size() - 1; ++j) {
        int countWinner = 0;
        for (int k = 0; k < myVector.size() - 1; ++k) {
            if (myVector[j][myVector.size() - 1 - k] == myVector[j + 1][k + 1]) {
                countWinner++;
                j++;
            } else {
                break;
            }
            if (countWinner == myVector.size() - 1) {
                return myVector[myVector.size() - 1][0];
            }
        }
    }
    return 'D';
}