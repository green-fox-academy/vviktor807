#include <iostream>
#include "Counter.h"

int main()
{

    Counter co(8);
    co.add();
    co.add();
    std::cout << co.getNumber() << std::endl;
    co.reset();
    std::cout << co.getNumber() << std::endl;
    return 0;
}