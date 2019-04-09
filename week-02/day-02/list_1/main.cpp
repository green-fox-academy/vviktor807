#include <iostream>
#include <vector>

int main() {

    std::vector<std::string> myVector;
    std::cout << myVector.size() << std::endl;
    myVector.push_back("William");
    if (myVector.empty() == 1) {

        std::cout << "It's empty " << std::endl;
    }else {

        std::cout << "It's not empty" << std::endl;

    }
    myVector.push_back("John");
    myVector.push_back("Amanda");

    std::cout << myVector.size() << std::endl;
    std::cout << myVector.at(2) << std::endl;

    for (int i = 0; i < myVector.size(); ++i) {
        std::cout << myVector.at(i) << std::endl;
    }

    for (int i = 0; i < myVector.size(); ++i) {
        std::cout << i + 1<< ". " << myVector.at(i) << std::endl;
    }
    myVector.erase(myVector.begin() + 1);

    std::vector<std::string>::iterator it;
    for (it = myVector.end(); it >= myVector.begin(); it--) {

        std::cout << *it << "\n";
    }
    myVector.clear();
    
    return 0;
}