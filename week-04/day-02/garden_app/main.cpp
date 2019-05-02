#include <iostream>
#include "Plants.h"
#include "Trees.h"
#include "Flowers.h"
#include "Garden.h"

int main()
{
    Trees tree1("purple");
    Trees tree2("orange");
    Flowers flower1("yellow");
    Flowers flower2("blue");

    Garden garden;
    garden.add(&tree1);
    garden.add(&tree2);
    garden.add(&flower1);
    garden.add(&flower2);

    garden.status();
    garden.watering(40);
    garden.status();
    garden.watering(70);
    garden.status();

    return 0;
}