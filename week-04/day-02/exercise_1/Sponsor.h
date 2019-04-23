//
// Created by Viktor on 2019. 04. 23..
//

#ifndef EXERCISE_1_SPONSOR_H
#define EXERCISE_1_SPONSOR_H

#include <iostream>
#include "Person.h"

class Sponsor : public Person {
public:
    Sponsor(const std::string &name, int age, Gender gender, const std::string &company);

    Sponsor();

    void introduce() override;

    void getGoal() override;

    void hire();

private:
    std::string _company;
    int _hiredStudents;
};


#endif //EXERCISE_1_SPONSOR_H
