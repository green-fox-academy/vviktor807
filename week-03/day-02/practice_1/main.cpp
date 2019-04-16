#include <iostream>
#include <fstream>

// Create a function that takes a number
// divides ten with it,
// and prints the result.
// It should print "fail" if the parameter is 0
void divider(int);

int main()
{
    try {
        int a = 0;
        divider(a);
    }catch (std::string& e) {
        std::cout << e << std::endl;
    }
    return 0;
}

void divider(int x)
{

    if (x == 0) {
        throw std::string("Can't divide by 0");
    }
    std::cout <<   10 / x;
}