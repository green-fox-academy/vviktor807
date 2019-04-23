//
// Created by Viktor on 2019. 04. 23..
//

#include "Cohort.h"

Cohort::Cohort(const std::string &name)
{
    _name = name;
    _students = {};
    _mentors = {};
}

void Cohort::addStudent(Student *stud)
{
    _students.push_back(stud);
}

void Cohort::addMentor(Mentor *ment)
{
    _mentors.push_back(ment);
}

void Cohort::info()
{
    std::cout << "The " << _name << " cohort has " << _students.size() << " students and " << _mentors.size() <<
              " mentors" << std::endl;
}
