//
// Created by Viktor on 2019. 05. 15..
//

#include "car.h"

char *get_car_type(enum car_type type) // egy karakterre mutató pointert fog visszaadni ezért kell a *
{
    switch (type) {
        case VOLVO:
            return "Volvo";
        case TOYOTA:
            return "Toyota";
        case LAND_ROVER:
            return "Land_Rover";
        case TESLA:
            return "Tesla";

    }
}

void print_stats_of_car(struct car car)
{
    if (car.type == 3) {
        printf("%s, %.2lf", get_car_type(car.type), car.km);
    } else {
        printf("%s, %.2lf, %.2lf", get_car_type(car.type), car.km, car.gas);
    }
}
