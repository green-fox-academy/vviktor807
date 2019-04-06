#include <iostream>

int doubling(int x);

int main() {
    int a;
    std::cout << "Please enter a number:" <<std::endl;
    std::cin >> a;
    int b = doubling(a);
    std::cout << b <<std::endl;
    return 0;
}
int doubling(int x) {
    int y = x * 2;
    return y;
}