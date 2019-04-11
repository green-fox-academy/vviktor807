#include <iostream>

//Find the greatest common divisor of two numbers using recursion.
int gcd(int x, int y);

int main() {

    int a = 84;
    int b = 18;
    int c = gcd(a, b);
    std::cout << c << std::endl;
    return 0;
}

int gcd(int x, int y) {

    if (x % y == 0) {
        return y;
    }

    return gcd(y, x % y);
}

