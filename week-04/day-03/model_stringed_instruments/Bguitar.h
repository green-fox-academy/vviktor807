//
// Created by Viktor on 2019. 04. 24..
//

#ifndef MODEL_STRINGED_INSTRUMENTS_BGUITAR_H
#define MODEL_STRINGED_INSTRUMENTS_BGUITAR_H

#include "StringedInstrument.h"

class Bguitar : public StringedInstrument {
public:
    Bguitar(int numberOfStrings = 4);

    std::string sound() override;

};


#endif //MODEL_STRINGED_INSTRUMENTS_BGUITAR_H
