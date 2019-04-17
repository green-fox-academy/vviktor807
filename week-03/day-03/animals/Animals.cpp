//
// Created by Viktor on 2019. 04. 17..
//

#include "Animals.h"

Animals::Animals(int hunger, int thirst)
{
    _hunger = hunger;
    _thirst = thirst;
}

Animals::Animals()
{
    _hunger = 50;
    _thirst = 50;
}

int Animals::getHunger()
{
    return _hunger;
}

int Animals::getThirst()
{
    return _thirst;
}

void Animals::eat()
{
    _hunger -= 1;
}

void Animals::drink()
{
    _thirst -= 1;
}

void Animals::play()
{
    _hunger += 1;
    _thirst += 1;
}

std::string Animals::toString()
{
    return ("Hunger: " + std::to_string(getHunger()) + " Thirst: " + std::to_string(getThirst()));
}