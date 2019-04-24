//
// Created by Viktor on 2019. 04. 24..
//

#include "StringedInstrument.h"

StringedInstrument::StringedInstrument(const std::string &name, int numberOfStrings)
{
    _numberOfStrings = numberOfStrings;
    _name = name;
}

void StringedInstrument::play()
{
    std::cout << _name << ", a " << _numberOfStrings << "- stringed instrument that goes " << sound() << std::endl;
                 //Electric Guitar, a 6-stringed instrument that goes Twang
}

