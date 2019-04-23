//
// Created by Viktor on 2019. 04. 23..
//

#ifndef EXERCISE_1_PERSON_H
#define EXERCISE_1_PERSON_H

#include <iostream>

enum Gender {
    FEMALE,
    MALE
};

class Person {
public:
    Person(const std::string &name, int age, Gender gender);

    Person();

    virtual void introduce();

    std::string getGenderAsString();

    virtual void getGoal();

    std::string getName();

    int getAge();

    Gender getGender();

private:
    std::string _name;
    int _age;
    Gender _gender;
};


#endif //EXERCISE_1_PERSON_H
