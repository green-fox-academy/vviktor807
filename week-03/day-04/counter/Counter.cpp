//
// Created by Viktor on 2019. 04. 18..
//

#include "Counter.h"

Counter::Counter(int number)
{
    setNumber(number);
}

void Counter::setNumber(int number)
{
    _number = number;
    _store = number;
}

void Counter::add()
{
    _number += 1;
}

int Counter::getNumber()
{
    return _number;
}

void Counter::reset()
{
    _number = _store;
}
