//
// Created by Viktor on 2019. 04. 23..
//

#include "Flowers.h"

Flowers::Flowers(const std::string &color) : Plants(color)
{
    _name = "Flower";
}

std::string Plants::getColor()
{
    return _color;
}

double Plants::getWaterAmount()
{
    return _currentWaterAmount;
}

std::string Flowers::getName()
{
    return _name;
}
