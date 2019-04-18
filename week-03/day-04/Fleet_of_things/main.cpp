#include <iostream>
#include "Thing.h"
#include "Fleet.h"

int main(int argc, char *args[])
{
    Fleet fleet;

    Thing milk("Get milk");
    fleet.add(milk);

    Thing obstacle("Remove the obstacle");
    fleet.add(obstacle);

    Thing stand("Stand up");
    stand.complete();
    fleet.add(stand);

    Thing eat("Eat lunch");
    eat.complete();
    fleet.add(eat);

    // Create a fleet of things to have this output:
    // 1. [ ] Get milk
    // 2. [ ] Remove the obstacles
    // 3. [x] Stand up
    // 4. [x] Eat lunch



    std::cout << fleet.toString() << std::endl;
    return 0;
}

