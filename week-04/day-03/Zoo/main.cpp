#include <iostream>
#include "Animal.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Birds.h"

int main( int argc, char* args[] )
{
    Reptile reptile("Crocodile", 4, MALE, "hungry");
    Mammal mammal("Koala", 8, FEMALE, "hungry");
    Birds bird("Parrot", 3, MALE, "not hungry");

    std::cout << "How do you breed?" << std::endl;
    std::cout << "A " << reptile.getName() << " is breeding by " << reptile.breed() << std::endl;
    std::cout << "A " << mammal.getName() << " is breeding by " << mammal.breed() << std::endl;
    std::cout << "A " << bird.getName() << " is breeding by " << bird.breed() << std::endl;
}