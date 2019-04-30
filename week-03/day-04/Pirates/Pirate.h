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
    bool _dead = false;
    int _hp = 100;
    bool _captain = false;
public:
    Pirate();

    void drinkSomeRum();

    void isPassedOut();

    bool getPassedOut();

    void howsItGoingMate();

    void die();

    bool deadOrNot();

    bool getCaptain();

    void setCaptain(bool captain);

    int getHp();
};


#endif //PIRATES_PIRATE_H
