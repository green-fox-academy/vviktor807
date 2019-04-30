#include <iostream>
#include <vector>

bool check(std::vector<std::string> myVector, std::string element);

int main()
{

    std::vector<std::string> shoppingList = {"eggs", "milk", "fish", "apples", "bread", "chicken"};
    std::cout << "Milk " << (check(shoppingList, "milk") ? "is " : "is not ") << "on the list, but banana "
              << (check(shoppingList,"banana") ? "is " : "is not ") << "on the list." << std::endl;

}

bool check(std::vector<std::string> myVector, std::string element)
{
    std::vector<std::string>::iterator it;
    for (it = myVector.begin(); it != myVector.end(); ++it) {
        if ((*it).compare(element) == 0) {
            return true;
        }
    }
    return false;
}