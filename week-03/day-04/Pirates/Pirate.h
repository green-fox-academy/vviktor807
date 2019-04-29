//
// Created by Viktor on 2019. 04. 29..
//

#ifndef PIRATES_PIRATE_H
#define PIRATES_PIRATE_H

#include <iostream>
#include <string>

class Pirate {
private:
    int _drunk = 0;
    bool _passedout = false;
public:
    Pirate();

    void drinkSomeRum();

    void isPassedOut();

    bool getPassedOut();

    void howsItGoingMate();
};


#endif //PIRATES_PIRATE_H
