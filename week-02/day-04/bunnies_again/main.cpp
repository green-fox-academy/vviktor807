#include <iostream>


int bunnies(int n);

int main() {


    std::cout << bunnies(4) << std::endl;

    return 0;
}

int bunnies(int n) {

    if (n == 0) {

        return 0;

    } else if (n % 2 == 0) {

        return 3 + bunnies(n - 1);
    }else {

        return 2 + bunnies(n - 1);
    }
}