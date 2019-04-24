//
// Created by Viktor on 2019. 04. 24..
//

#include "Eguitar.h"

std::string Eguitar::sound()
{
    return "Twang";
}

Eguitar::Eguitar(int numberOfStrings) : StringedInstrument("Electricguitar", numberOfStrings)
{

}
