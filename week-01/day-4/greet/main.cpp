#include <iostream>

void greet(std::string);

int main() {
    std::string al = "Greenfox";
    greet(al);
    std::string bela = "Bela";
    greet(bela);
    return 0;
}

void greet(std::string kismacska) {
    std::cout << "Greetings dear, " << kismacska <<std::endl;
}