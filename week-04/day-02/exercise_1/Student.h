//
// Created by Viktor on 2019. 04. 23..
//

#ifndef EXERCISE_1_STUDENT_H
#define EXERCISE_1_STUDENT_H

#include <iostream>
#include "Person.h"

class Student : public Person {
public:
    Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization);

    Student();

    void getGoal() override;

    void introduce() override;

    virtual void skipDays(int numberOfDays);


private:
    std::string _previousOrganization;
    int _skippedDays;
};


#endif //EXERCISE_1_STUDENT_H
