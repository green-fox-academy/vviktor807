//
// Created by Viktor on 2019. 04. 23..
//

#include "Plants.h"

Plants::Plants(std::string color)
{
    setColor(color);
    _currentWaterAmount = 4;
}


void Plants::setColor(std::string color)
{
    _color = color;
}

std::string Plants::getColor()
{
    return _color;
}

void Plants::setWaterAmount(double wAmount)
{
    _currentWaterAmount = wAmount;
}

double Plants::getWaterAmount()
{
    return _currentWaterAmount;
}
