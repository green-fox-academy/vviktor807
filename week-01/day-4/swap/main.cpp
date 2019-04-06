#include <iostream>

void swap (int& x, int& y);

int main() {
    int a = 15;
    int b = 23;
    std::cout << a << "," << b <<std::endl;
    swap(a, b);
    std::cout << a << "," << b <<std::endl;
    return 0;
}

void swap (int& x, int& y){
    int c = x;
    x = y;
    y = c;
}