#include <iostream>
#include <map>
#include <vector>

std::vector<std::string> below201(std::map<std::string, int> myMap);

void writeOut(std::vector<std::string> myVector);

std::map<std::string, int> moreThan150(std::map<std::string, int> myMap);

void writeOut(std::map<std::string, int> myMap);

int main()
{
    std::map<std::string, int> products;
    products.insert(std::make_pair("eggs", 200));
    products.insert(std::make_pair("milk", 200));
    products.insert(std::make_pair("fish", 500));
    products.insert(std::make_pair("apples", 150));
    products.insert(std::make_pair("bread", 50));
    products.insert(std::make_pair("chicken", 550));

    writeOut(below201(products));
    std::cout << std::endl;
    writeOut(moreThan150(products));


    return 0;
}

std::vector<std::string> below201(std::map<std::string, int> myMap)
{
    std::vector<std::string> listOfProductsBelow201;
    std::map<std::string, int>::iterator it;
    for (it = myMap.begin(); it != myMap.end(); ++it) {
        if (it->second < 201) {
            listOfProductsBelow201.push_back(it->first);
        }
    }
    return listOfProductsBelow201;
}

void writeOut(std::vector<std::string> myVector)
{
    for (int i = 0; i < myVector.size(); ++i) {
        std::cout << myVector.at(i) << std::endl;
    }
}

std::map<std::string, int> moreThan150(std::map<std::string, int> myMap)
{
    std::map<std::string, int> listOfProductsAbove150;
    std::map<std::string, int>::iterator it;
    for (it = myMap.begin(); it != myMap.end(); ++it) {
        if (it->second > 150) {
            listOfProductsAbove150.insert(std::make_pair(it->first, it->second));
        }
    }
    return listOfProductsAbove150;
}

void writeOut(std::map<std::string, int> myMap)
{
    std::map<std::string, int>::iterator it;
    for (it = myMap.begin(); it != myMap.end(); ++it) {
        std::cout << it->first << " " << it->second << std::endl;
    }
}