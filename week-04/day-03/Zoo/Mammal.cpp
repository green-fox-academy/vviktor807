//
// Created by Viktor on 2019. 04. 24..
//

#include "Mammal.h"

std::string Mammal::getGenderAsString()
{
    switch (_gender) {
        case FEMALE:
            return "female";
        case MALE:
            return "male";
    }
}

std::string Mammal::breed()
{
    return " pushing miniature versions out ";
}

Gender Mammal::getGender()
{
    return _gender;
}

std::string Mammal::getName()
{
    return _name;
}

std::string Mammal::getHunger()
{
    return _hunger;
}
int Mammal::getAge()
{
    return _age;
}

Mammal::Mammal(std::string name, int age, Gender gender, std::string hunger) : Animal(name, age, gender, hunger)
{
}
