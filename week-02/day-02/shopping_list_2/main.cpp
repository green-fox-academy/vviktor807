#include <iostream>
#include <map>
#include <vector>

double howMuchPaid(std::map<std::string, double> myMap, std::map<std::string, int> list);

int whoBuysMore(std::map<std::string, int> list, std::string product);

int whoBuysMoreProduct(std::map<std::string, int> list);

int whoBuysMoreDifferent(std::map<std::string, int> list);

int main()
{
    std::map<std::string, double> products;
    products.insert(std::make_pair("milk", 1.07));
    products.insert(std::make_pair("rice", 1.59));
    products.insert(std::make_pair("eggs", 3.14));
    products.insert(std::make_pair("cheese", 12.60));
    products.insert(std::make_pair("chicken breast", 9.40));
    products.insert(std::make_pair("apples", 2.31));
    products.insert(std::make_pair("tomato", 2.58));
    products.insert(std::make_pair("potato", 1.75));
    products.insert(std::make_pair("onion", 1.10));

    std::map<std::string, int> listOfBob;
    listOfBob.insert(std::make_pair("milk", 3));
    listOfBob.insert(std::make_pair("rice", 2));
    listOfBob.insert(std::make_pair("eggs", 2));
    listOfBob.insert(std::make_pair("chicken breast", 4));
    listOfBob.insert(std::make_pair("apples", 1));
    listOfBob.insert(std::make_pair("tomato", 2));
    listOfBob.insert(std::make_pair("potato", 1));

    std::map<std::string, int> listOfAlice;
    listOfAlice.insert(std::make_pair("rice", 1));
    listOfAlice.insert(std::make_pair("eggs", 5));
    listOfAlice.insert(std::make_pair("chicken breast", 2));
    listOfAlice.insert(std::make_pair("apples", 1));
    listOfAlice.insert(std::make_pair("tomato", 10));

    std::cout << "Bob spent: " << howMuchPaid(products, listOfBob) << std::endl;
    std::cout << "Alice spent: " << howMuchPaid(products, listOfAlice) << std::endl;

    if (whoBuysMore(listOfAlice, "rice") > whoBuysMore(listOfBob, "rice")) {
        std::cout << "Alice bought more rice" << std::endl;
    } else {
        std::cout << "Bob bought more rice" << std::endl;
    }

    if (whoBuysMore(listOfAlice, "potato") > whoBuysMore(listOfBob, "potato")) {
        std::cout << "Alice bought more potato" << std::endl;
    } else {
        std::cout << "Bob bought more potato" << std::endl;
    }

    if (whoBuysMoreProduct(listOfAlice) > whoBuysMoreProduct(listOfBob)) {
        std::cout << "Alice bought more products" << std::endl;
    } else {
        std::cout << "Bob bought more products" << std::endl;
    }

    if (whoBuysMoreDifferent(listOfAlice) > whoBuysMoreDifferent(listOfBob)) {
        std::cout << "Alice bought more different products." << std::endl;
    } else {
        std::cout << "Bob bought more different products." << std::endl;
    }

    return 0;
}

double howMuchPaid(std::map<std::string, double> myMap, std::map<std::string, int> list)
{
    double price = 0;
    std::map<std::string, double>::iterator it;
    std::map<std::string, int>::iterator it1;
    for (it = myMap.begin(); it != myMap.end(); ++it) {
        for (it1 = list.begin(); it1 != list.end(); ++it1) {
            if (it->first == it1->first) {
                price += it->second * it1->second;
            }
        }
    }
    return price;
}

int whoBuysMore(std::map<std::string, int> list, std::string product)
{
    std::map<std::string, int>::iterator it;
    for (it = list.begin(); it != list.end(); it++) {
        if (it->first == product) {
            return it->second;
        }
    }
    return 0;
}

int whoBuysMoreProduct(std::map<std::string, int> list)
{
    int amount = 0;
    std::map<std::string, int>::iterator it;
    for (it = list.begin(); it != list.end(); ++it) {
        amount += it->second;
    }
    return amount;
}

int whoBuysMoreDifferent(std::map<std::string, int> list)
{
    int counter = 0;
    std::map<std::string, int>::iterator it;
    for (it = list.begin(); it != list.end(); ++it) {
        counter++;
    }
    return counter;
}