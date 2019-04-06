#include <iostream>
//prototype (parameter)
int sum (int x);

int main() {
    int a = 4;
    //summ egy fuggveny ezert megkeresi
    int b = sum(a);
    std::cout << b << std::endl;

    return 0;
}

int sum (int x) {
    //summnak kell egy ertek
    int sum = 0;
    //amit hozzaadok annak mennyi az erteke es ezt meddig csinalom
    for (int i = 0; i < x; i++) {
        sum += i;
    }
    return sum;

}