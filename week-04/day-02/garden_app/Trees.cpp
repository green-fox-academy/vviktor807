//
// Created by Viktor on 2019. 04. 23..
//

#include "Trees.h"

Trees::Trees(const std::string &color) : Plants(color)
{
    _name = "Tree";
}
std::string Plants::getColor()
{
    return _color;
}

double Plants::getWaterAmount()
{
    return _currentWaterAmount;
}

std::string Trees::getName()
{
    return _name;
}
