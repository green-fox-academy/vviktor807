//
// Created by Viktor on 2019. 04. 23..
//

#include "Trees.h"

Trees::Trees(std::string color) : Plants(color)
{
    _name = "Tree";
}

std::string Trees::getName()
{
    return _name;
}

Type Trees::getType()
{
    return TREE;
}
