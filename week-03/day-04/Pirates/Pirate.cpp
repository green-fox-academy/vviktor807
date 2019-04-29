//
// Created by Viktor on 2019. 04. 29..
//

#include "Pirate.h"

Pirate::Pirate()
{

}

void Pirate::drinkSomeRum()
{
    _drunk++;
}

void Pirate::howsItGoingMate()
{
    if (_drunk < 5) {
        std::cout << "Pour me anudder!" << std::endl;
    } else {
        std::cout << "Arghh, I'ma Pirate. How d'ya d'ink its goin? /Falls asleep./" << std::endl;
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