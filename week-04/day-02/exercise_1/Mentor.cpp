//
// Created by Viktor on 2019. 04. 23..
//

#include "Mentor.h"

Mentor::Mentor(const std::string &name, int age, Gender gender, Level level) : Person(name, age, gender)
{
    _level = level;
}

Mentor::Mentor() : Person()
{
    _level = INTERMEDIATE;
}

std::string Mentor::getLevelAsString()
{
    switch (_level) {
        case JUNIOR:
            return "Junior";
        case INTERMEDIATE:
            return "Intermediate";
        case SENIOR:
            return "Senior";
    }
}

Level Mentor::getLevel()
{
    return _level;
}

void Mentor::getGoal()
{
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

void Mentor::introduce()
{
    std::cout << "Hi, i'm " << getName() << ", a " << getAge() << " year old " << getGenderAsString() <<
              getLevelAsString() << " mentor." << std::endl;
}