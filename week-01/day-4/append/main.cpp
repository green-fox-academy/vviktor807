#include <iostream>
std::string appendAFunc(std::string);

int main() {

    std::string typo = "Chinchill";
   typo = appendAFunc(typo);
   std::cout << typo << std::endl;
    return 0;
}
std::string appendAFunc(std::string str) {
    str += "a";

    return str;
}