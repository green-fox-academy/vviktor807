#include <iostream>
#include "PostIt.h"


int main()
{

    PostIt po("orange", "Idea 1", "blue");
    std::cout << po.GetBackgroundcolor() << std::endl;
    std::cout << po.GetText() << std::endl;
    std::cout << po.GetTextcolor() << std::endl;

    PostIt po1("pink", "Awesome", "black");
    std::cout << po1.GetBackgroundcolor() << std::endl;
    std::cout << po1.GetText() << std::endl;
    std::cout << po1.GetTextcolor() << std::endl;

    PostIt po2("yellow", "Superb", "green");
    std::cout << po2.GetBackgroundcolor() << std::endl;
    std::cout << po2.GetText() << std::endl;
    std::cout << po2.GetTextcolor() << std::endl;
    return 0;
}