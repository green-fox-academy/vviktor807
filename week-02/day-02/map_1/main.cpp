#include <iostream>
#include <map>


int main() {

    std::map<int, char> myMap;
    if (myMap.empty() == 1) {

        std::cout << "Map is empty." << std::endl;
    } else {

        std::cout << "Map is not empty." << std::endl;
    }

    myMap.insert(std::make_pair(97, 'a'));
    myMap.insert(std::make_pair(98, 'b'));
    myMap.insert(std::make_pair(99, 'c'));
    myMap.insert(std::make_pair(65, 'A'));
    myMap.insert(std::make_pair(66, 'B'));
    myMap.insert(std::make_pair(67, 'C'));

    std::map<int, char>::iterator it;
    for (it = myMap.begin(); it != myMap.end(); it++) {

        std::cout << it->first << " " << it->second << std::endl;
    }
    myMap.insert(std::make_pair(68, 'D'));

    std::cout << myMap.size() << std::endl;
    std::cout <<myMap.at(99) << std::endl;
    myMap.erase(97);

    std::map<int, char>::iterator kacsa;
    kacsa = myMap.find(100);
    if (kacsa == myMap.end()) {

        std::cout << "There is no such key." << std::endl;
    }else {

        std::cout << kacsa->first << " " << kacsa->second << std::endl;
    }

    myMap.clear();

    if (myMap.empty() == 1) {

        std::cout << "Map is empty." << std::endl;
    } else {

        std::cout << "Map is not empty." << std::endl;
    }
    
   return 0;


}
