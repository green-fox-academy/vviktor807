//
// Created by Viktor on 2019. 04. 17..
//
#include <iostream>
#include <string>

#ifndef ANIMALS_ANIMALS_H
#define ANIMALS_ANIMALS_H


class Animals {
public:
    Animals(int hunger, int thirst);

    Animals();


    int getHunger();

    int getThirst();

    void eat();

    void drink();

    void play();

    std::string toString();

private:
    int _hunger;
    int _thirst;
};


#endif //ANIMALS_ANIMALS_H
