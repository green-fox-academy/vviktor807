//
// Created by Viktor on 2019. 04. 24..
//

#ifndef ZOO_MAMMAL_H
#define ZOO_MAMMAL_H

#include "Animal.h"

class Mammal : public Animal {
public:
    Mammal(std::string name, int age, Gender gender, std::string hunger);

    std::string getGenderAsString() override;

    std::string breed() override;

    Gender getGender() override;

    std::string getName() override;

    std::string getHunger()override;

    int getAge() override;


};


#endif //ZOO_MAMMAL_H
