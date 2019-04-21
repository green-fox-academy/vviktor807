#include <iostream>
#include <vector>
#include <map>
#include <string>

void findNumber(std::string, std::map<std::string, std::string>);

void findName(std::string, std::map<std::string, std::string>);

void findContact(std::string, std::map<std::string, std::string>);

int main()
{
    std::map<std::string, std::string> TelephoneBook;
    TelephoneBook.insert(std::make_pair("William A. Lathan", "405-709-1865"));
    TelephoneBook.insert(std::make_pair("John K. Miller", "402-247-8568"));
    TelephoneBook.insert(std::make_pair("Hortensia E. Foster", "606-481-6467"));
    TelephoneBook.insert(std::make_pair("Amanda D. Newland", "319-243-5613"));
    TelephoneBook.insert(std::make_pair("Brooke P. Askew", "307-687-2982"));
    
    findNumber("William A. Lathan", TelephoneBook);
    findName("307-687-2982", TelephoneBook);
    findContact("Chris E. Myers", TelephoneBook);

    return 0;
}

void findNumber(std::string key, std::map<std::string, std::string> Map)
{
    std::map<std::string, std::string>::iterator iter;
    for (iter = Map.begin(); iter != Map.end(); iter++) {
        if (iter->first == key) {
            std::cout << iter->second << std::endl;
        }

    }
}

void findName(std::string value, std::map<std::string, std::string> Map)
{
    std::map<std::string, std::string>::iterator iter;
    for (iter = Map.begin(); iter != Map.end(); iter++) {
        if (iter->second == value) {
            std::cout << iter->first << std::endl;
        }

    }
}

void findContact(std::string contact, std::map<std::string, std::string> Map)
{
    if (Map.count(contact) != 1) {
        std::cout << "This contact can't be found" << std::endl;
    }
}