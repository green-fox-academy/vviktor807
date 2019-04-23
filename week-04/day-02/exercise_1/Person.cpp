//
// Created by Viktor on 2019. 04. 23..
//

#include "Person.h"

Person::Person(const std::string &name, int age, Gender gender)
{
    _name = name;
    _age = age;
    _gender = gender;
}

Person::Person()
{
    _name = "Jane Doe";
    _age = 30;
    _gender = FEMALE;
}

void Person::introduce()
{
    std::cout << "Hi i'm " << _name << "a " << _age << " years old " << getGenderAsString() << std::endl;
}

void Person::getGoal()
{
    std::cout << "My goal is: Live for the moment!" << std::endl;
}

std::string Person::getGenderAsString()
{
    switch (_gender) {
        case FEMALE:
            return "female";
        case MALE:
            return "male";
    }
}

std::string Person::getName()
{
    return _name;
}

int Person::getAge()
{
    return _age;
}

Gender Person::getGender()
{
    return _gender;
}