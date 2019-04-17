#include <iostream>
#include "Animals.h"

int main()
{
    Animals ao;
    ao.eat();
    ao.eat();
    ao.drink();
    ao.play();
    std::cout << ao.toString() << std::endl;
    return 0;
}