#include <iostream>

int main() {
    int a = 3;
    a += 10;
    std::cout << a << std::endl;
    int b = 100;
    b -= 7;
    std::cout << b << std::endl;
    int c = 44;
    c *= 2;
    std::cout << c << std::endl;
    int d = 125;
    d /= 5;
    std::cout << d << std::endl;
    int e = 8;
    e = e * e * e;
    std::cout << e << std::endl;
    int f1 = 123;
    int f2 = 345;
    if (f1 > f2){
        std::cout << (f1 > f2) <<std::endl;
    }else{
        std::cout << "f1 is less than f2" <<std::endl;
    }
    int g1 = 350;
    int g2 = 200;
    if (g2 * g2 > g1) {
        std::cout << (g2 * g2 > g1) << std::endl;

    }else{
        std::cout << "the double of g2 is less than g1" << std::endl;
    }
    int h = 135798745;
    if (h % 11 == 0){
        std::cout << (h % 11 == 0) << std::endl;
    }else{
        std::cout << "11 is not a divisor of h" << std::endl;
    }
    int i1 = 10;
    int i2 = 3;
    std::cout << ((i1 > i2 * i2) && (i1 < i2 * i2 * i2)) << std::endl;
    int  j = 1521;
    std::cout << ((1521 / 3) || (1521 / 5)) << std::endl;

    return 0;
}