#include <iostream>

/*We have a number of bunnies and each bunny has two big floppy ears.
 We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).*/
int bunnies(int n);

int main() {


    std::cout << bunnies(4) << std::endl;

    return 0;
}

int bunnies(int n) {

    if (n == 0) {

        return 0;

    } else {

        return 2 + bunnies(n - 1);
    }
}