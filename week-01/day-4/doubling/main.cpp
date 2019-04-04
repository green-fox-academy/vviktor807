#include <iostream>

int doubling(int x);

int main() {
    int a = 123;
    int b = doubling(a);
    std::cout << b <<std::endl;
    return 0;
}
int doubling(int x) {
    int y = x * 2;
    return y;
}