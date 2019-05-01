#include <iostream>
#include <map>

int howMuch(std::map<std::string, int> myMap, std::string product);

std::string mostExpensive(std::map<std::string, int> myMap);

std::string cheapest(std::map<std::string, int> myMap);

int average(std::map<std::string, int> myMap);

int below300(std::map<std::string, int> myMap);

std::string anythingFor125(std::map<std::string, int> myMap);

int main()
{
    std::map<std::string, int> products;
    products.insert(std::make_pair("eggs", 200));
    products.insert(std::make_pair("milk", 200));
    products.insert(std::make_pair("fish", 500));
    products.insert(std::make_pair("apples", 150));
    products.insert(std::make_pair("bread", 50));
    products.insert(std::make_pair("chicken", 550));

    std::cout << howMuch(products, "fish") << std::endl;
    std::cout << mostExpensive(products) << std::endl;
    std::cout << cheapest(products) << std::endl;
    std::cout << average(products) << std::endl;
    std::cout << below300(products) << std::endl;
    std::cout << anythingFor125(products) << std::endl;

    return 0;
}

int howMuch(std::map<std::string, int> myMap, std::string product)
{
    int price = 0;
    std::map<std::string, int>::iterator it;
    for (it = myMap.begin(); it != myMap.end(); ++it) {
        if (it->first == product) {
            price = it->second;
        }
    }

    return price;
}

std::string mostExpensive(std::map<std::string, int> myMap)
{
    std::string product;
    int price = 0;
    std::map<std::string, int>::iterator it;
    for (it = myMap.begin(); it != myMap.end(); ++it) {
        if (price < it->second) {
            price = it->second;
            product = it->first;
        }
    }
    return product;

}

std::string cheapest(std::map<std::string, int> myMap)
{
    std::map<std::string, int>::iterator it;
    std::string product;
    it = myMap.begin();  //nem lehet egyenlo az it->second-el HA ELOTTE nem adom meg neki honnan indul az iteratorom
    int price = it->second;
    for (it = myMap.begin(); it != myMap.end(); ++it) {
        if (price > it->second) {
            price = it->second;
            product = it->first;
        }
    }
    return product;

}

int average(std::map<std::string, int> myMap)
{
    int sum = 0;
    std::map<std::string, int>::iterator it;
    for (it = myMap.begin(); it != myMap.end(); ++it) {
        sum += it->second;

    }
    return sum / myMap.size();
}

int below300(std::map<std::string, int> myMap)
{
    std::map<std::string, int>::iterator it;
    int counter = 0;
    for (it = myMap.begin(); it != myMap.end(); ++it) {
        if (it->second < 300) {
            counter++;
        }
    }
    return counter;
}

std::string anythingFor125(std::map<std::string, int> myMap)
{
    bool flag = false;
    std::map<std::string, int>::iterator it;
    for (it = myMap.begin(); it != myMap.end(); ++it) {
        if (it->second == 125) {
            flag = true;
        }
    }
    if (flag) {
        return "Yes.";
    } else {
        return "No.";
    }
}