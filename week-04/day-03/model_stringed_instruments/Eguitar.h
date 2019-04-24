//
// Created by Viktor on 2019. 04. 24..
//

#ifndef MODEL_STRINGED_INSTRUMENTS_EGUITAR_H
#define MODEL_STRINGED_INSTRUMENTS_EGUITAR_H

#include "StringedInstrument.h"

class Eguitar : public StringedInstrument {
public:
    std::string sound() override;

    Eguitar(int numberOfStrings = 6);

};


#endif //MODEL_STRINGED_INSTRUMENTS_EGUITAR_H
