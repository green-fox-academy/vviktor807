#include <iostream>
#include "Eguitar.h"
#include "Bguitar.h"
#include "Violin.h"

int main( int argc, char* args[] )
{

    std::cout << "Test 1, create Electric Guitar, Bass Guitar and Violin with default strings." << std::endl;
    Eguitar guitar;
    Bguitar bassGuitar;
    Violin violin;

    std::cout<< "Test 1 Play" << std::endl;
    guitar.play();
    bassGuitar.play();
    violin.play();

    std::cout << "Test 2, create Electric Guitar, Bass Guitar with 7 and 5 strings ." << std::endl;
    Eguitar guitar2(7);
    Bguitar bassGuitar2(5);

    std::cout << "Test 2 Play" << std::endl;
    guitar2.play();
    bassGuitar2.play();
}