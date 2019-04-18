#include <iostream>
#include "counter.h"

void checkValue(const std::string& name, int expected, int actual)
{
    if(expected != actual) {
        std::cout << name << "Failed! Expected: " << expected << " Actual: " << actual << std::endl;
    }
    else {
        std::cout << name << "Passed!" << std::endl;
    }
}

int main(int argc, char* args[])
{
    Counter c;
    checkValue("getZero", 0, c.getNumber());

    c.add(5);
    checkValue("addMore", 5, c.getNumber());

    c.add();
    checkValue("addOne", 6, c.getNumber());

    c.reset();
    checkValue("getZero2", 0, c.getNumber());

    Counter c2(7);
    checkValue("getInit", 7, c2.getNumber());

    c2.reset();
    checkValue("reset", 7, c2.getNumber());

    return 0;
}