//
// Created by Viktor on 2019. 05. 15..
//

#ifndef CAR_CAR_H
#define CAR_CAR_H

#include <stdio.h>

enum car_type
{
    VOLVO, TOYOTA, LAND_ROVER, TESLA
};

struct car
{
    enum car_type type;
    double km;
    double gas;
};

char *get_car_type(enum car_type type);

void print_stats_of_car(struct car);

#endif //CAR_CAR_H
