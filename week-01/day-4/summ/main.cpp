#include <iostream>

int sum (int x);

int main() {
    int a = 4;
    int b = sum(a);
    std::cout << b << std::endl;

    return 0;
}

int sum (int x) {
    int sum = 0;
    for (int i = 0; i < x; i++) {
        sum += i;
    }
    return sum;

}