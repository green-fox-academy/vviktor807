//
// Created by Viktor on 2019. 04. 24..
//

#include "Birds.h"

Birds::Birds(std::string name, int age, Gender gender, std::string hunger) : Animal(name, age, gender, hunger)
{}

std::string Birds::breed()
{
    return " laying eggs ";
}

Gender Birds::getGender()
{
    return _gender;
}

std::string Birds::getName()
{
    return _name;
}

std::string Birds::getHunger()
{
    return _hunger;
}

std::string Birds::getGenderAsString()
{
    switch (_gender) {
        case FEMALE:
            return "female";
        case MALE:
            return "male";
    }
}
int Birds::getAge()
{
    return _age;
}
