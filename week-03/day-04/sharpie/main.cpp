#include <iostream>
#include "Sharpie.h"

int main()
{

    Sharpie so("blue", 0.8);
    so.use();
    so.use();
    so.use();
    std::cout << so.getColor();
    std::cout << "\t" << so.getWidth();
    std::cout << "\t" << so.getInk() << std::endl;

    return 0;
}