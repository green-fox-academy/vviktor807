#include <stdio.h>
#include "car.h"

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

int main()
{
    struct car car1;
    struct car car2;

    car1.type = TESLA;
    car1.km = 300.12;
    car1.gas = 0;

    car2.type = TOYOTA;
    car2.km = 265.43;
    car2.gas = 12.5;

    print_stats_of_car(car1);
    printf("\n");
    print_stats_of_car(car2);
    return 0;
}