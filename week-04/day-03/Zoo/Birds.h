//
// Created by Viktor on 2019. 04. 24..
//

#ifndef ZOO_BIRDS_H
#define ZOO_BIRDS_H

#include "Animal.h"

class Birds : public Animal {
public:
    Birds(std::string name, int age, Gender gender, std::string hunger);

    std::string getGenderAsString() override;

    std::string breed() override;

    Gender getGender() override;

    std::string getName() override;

    std::string getHunger()override;

    int getAge() override;

};


#endif //ZOO_BIRDS_H
