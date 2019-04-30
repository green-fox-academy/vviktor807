//
// Created by Viktor on 2019. 04. 29..
//

#include "Pirate.h"

Pirate::Pirate()
{

}

void Pirate::drinkSomeRum()
{
    if (_hp <= 0) {
        std::cout << "He can't. He is dead" << std::endl;
    } else {
        _drunk++;
    }
}

void Pirate::howsItGoingMate()
{
    if (_drunk < 5 && !_dead) {
        std::cout << "Pour me anudder!" << std::endl;
    } else if (_drunk >= 5 && !_dead) {
        std::cout << "Arghh, I'ma Pirate. How d'ya d'ink its goin? /Falls asleep./" << std::endl;
    } else if (_dead) {
        std::cout << "He is already dead." << std::endl;
    }
}

void Pirate::isPassedOut()
{
    if (_drunk >= 5) {
        _passedout = true;
    } else {
        _passedout = false;
    }
}

bool Pirate::getPassedOut()
{
    if (_passedout) {
        std::cout << "He fell asleep" << std::endl;
    } else {
        std::cout << "He is awake" << std::endl;
    }
    return _passedout;
}

void Pirate::die()
{
    _hp = 0;
    _dead = true;
}

bool Pirate::deadOrNot()
{
    return _dead;
}

bool Pirate::getCaptain()
{
    return _captain;
}

void Pirate::setCaptain(bool captain)
{
    _captain = captain;
}
int Pirate::getHp()
{
    return _hp;
}


