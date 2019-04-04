#include <iostream>

void factorio(int x, int& y);

int main() {
    int a = 4;
    int y = 1;
    factorio(a, y);
    std::cout << a << "," << y << std::endl;

    return 0;
}

void factorio(int x, int& y) {
    for (int i = 0; i < x; i++) {
        y *= (i + 1);
    }
}