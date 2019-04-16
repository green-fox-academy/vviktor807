#include <iostream>
#include <fstream>

// Create a function that takes a number
// divides ten with it,
// and prints the result.
// It should print "fail" if the parameter is 0
void divider(int);

int main()
{
    int a = 0;
    divider(a);
    return 0;
}

void divider(int x)
{
    if (x == 0) {
        std::cout << "Fail!" << std::endl;
    } else {

        std::cout << x / 10 << std::endl;
    }
}