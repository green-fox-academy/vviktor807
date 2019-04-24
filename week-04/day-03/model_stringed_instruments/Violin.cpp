//
// Created by Viktor on 2019. 04. 24..
//

#include "Violin.h"

std::string Violin::sound()
{
    return "Screech";
}

Violin::Violin(int numberOfStrings) : StringedInstrument("Violin", numberOfStrings)
{

}
