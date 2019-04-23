//
// Created by Viktor on 2019. 04. 23..
//

#ifndef EXERCISE_1_MENTOR_H
#define EXERCISE_1_MENTOR_H

#include <iostream>
#include "Person.h"

enum Level {
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor : public Person {
public:
    Mentor(const std::string &name, int age, Gender gender, Level level);

    Mentor();

    void getGoal() override;

    void introduce() override;

    std::string getLevelAsString();

    Level getLevel();

private:
    Level _level;
};


#endif //EXERCISE_1_MENTOR_H
