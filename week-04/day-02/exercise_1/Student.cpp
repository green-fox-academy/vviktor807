//
// Created by Viktor on 2019. 04. 23..
//

#include "Student.h"

Student::Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization)
        : Person(name, age, gender)
{
    _previousOrganization = previousOrganization;
    _skippedDays = 0;

}

Student::Student() : Person()
{
    _previousOrganization = "The School Of Life";
    _skippedDays = 0;
}

void Student::getGoal()
{
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

void Student::introduce()
{
    std::cout << "Hi, I'm " << getName() << ", a " << getAge() << " year old " << getGenderAsString() << " from " <<
              _previousOrganization << " who skipped " << _skippedDays << std::endl;
}

void Student::skipDays(int numberOfDays)
{
    _skippedDays += numberOfDays;
}


