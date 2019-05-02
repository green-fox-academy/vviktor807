//
// Created by Viktor on 2019. 04. 23..
//

#ifndef GARDEN_APP_GARDEN_H
#define GARDEN_APP_GARDEN_H

#include "Plants.h"
#include "Flowers.h"
#include "Trees.h"
#include <vector>

class Garden {
public:
    Garden();

    void add(Plants *plants);

    int howManyNeedsWater();

    void watering(double);

    void status();

private:
    std::vector<Plants *> _plants;

};


#endif //GARDEN_APP_GARDEN_H
