//
// Created by Viktor on 2019. 04. 23..
//

#include "Flowers.h"

Flowers::Flowers(std::string color) : Plants(color)
{
    _name = "Flower";
}

std::string Flowers::getName()
{
    return _name;
}

Type Flowers::getType()
{
    return FLOWER;
}
