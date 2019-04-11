#include <iostream>

//Write a recursive function that takes one parameter: n and adds numbers from 1 to n.

int sum(int n);

int main() {
    std::cout << sum(4) << std::endl;
    return 0;
}

int sum(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n + sum(n - 1);
    }
}