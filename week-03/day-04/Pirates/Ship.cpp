//
// Created by Viktor on 2019. 04. 30..
//

#include "Ship.h"


Ship::Ship(std::string name)
{
    _name = name;

}

void Ship::fillShip()
{
    int random = rand() % 30 + 1;
    for (int i = 0; i < random; ++i) {
        add();
    }
    _crew.at(0).setCaptain(true);
}

void Ship::add()
{
    Pirate pirate;
    _crew.push_back(pirate);
}

int Ship::crewAlive()
{
    //std::vector<Pirate> _crew;
    std::vector<Pirate>::iterator it;
    int alive = 0;
    for (it = _crew.begin(); it != _crew.end(); ++it) {
       if (it->deadOrNot() != true){
           alive ++;
       }
    }
    std::cout << alive << std::endl;
    return alive;
}


