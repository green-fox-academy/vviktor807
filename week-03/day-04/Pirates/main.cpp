#include <iostream>
#include "Pirate.h"
#include "Ship.h"
#include <time.h>

int main()
{

    srand(time(NULL));

    Ship ship1("Jackdaw");
    ship1.fillShip();
    ship1.crewAlive();

    return 0;
}