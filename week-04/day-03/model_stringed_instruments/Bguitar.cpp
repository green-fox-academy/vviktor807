//
// Created by Viktor on 2019. 04. 24..
//

#include "Bguitar.h"

std::string Bguitar::sound()
{
    return "Duum-duum-duum";
}

Bguitar::Bguitar(int numberOfStrings) : StringedInstrument("Bassguitar", numberOfStrings)
{

}
