//
// Created by Viktor on 2019. 04. 30..
//

#ifndef PIRATES_SHIP_H
#define PIRATES_SHIP_H

#include "Pirate.h"
#include <vector>

class Ship {
public:
    Ship(std::string name);

    void fillShip();

    int crewAlive();

    bool battle(Ship);

    void add();

private:
    std::vector<Pirate> _crew;
    std::string _name;

};


#endif //PIRATES_SHIP_H
