//
// Created by Viktor on 2019. 04. 24..
//

#include "Reptile.h"

Reptile::Reptile(std::string name, int age, Gender gender, std::string hunger) : Animal(name, age, gender,
                                                                                        hunger)
{}

std::string Reptile::breed()
{
    return " laying eggs ";
}

Gender Reptile::getGender()
{
    return _gender;
}

std::string Reptile::getName()
{
    return _name;
}

std::string Reptile::getHunger()
{
    return _hunger;
}

std::string Reptile::getGenderAsString()
{
    switch (_gender) {
        case FEMALE:
            return "female";
        case MALE:
            return "male";
    }
}
int Reptile::getAge()
{
    return _age;
}
