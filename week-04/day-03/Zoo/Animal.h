//
// Created by Viktor on 2019. 04. 24..
//

#ifndef ZOO_ANIMAL_H
#define ZOO_ANIMAL_H

#include <iostream>

enum Gender {
    FEMALE,
    MALE
};

class Animal {
public:
    Animal(std::string name, int age, Gender gender, std::string hunger);

public:
    virtual std::string getName() = 0;

    virtual std::string breed() = 0;

    virtual std::string getHunger() = 0;

    virtual std::string getGenderAsString() = 0;

    virtual Gender getGender() = 0;

    virtual int getAge() = 0;

protected:
    std::string _name;
    int _age;
    Gender _gender;
    std::string _hunger;

};


#endif //ZOO_ANIMAL_H
