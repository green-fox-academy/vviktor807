//
// Created by Viktor on 2019. 04. 24..
//

#ifndef MODEL_STRINGED_INSTRUMENTS_VIOLIN_H
#define MODEL_STRINGED_INSTRUMENTS_VIOLIN_H

#include "StringedInstrument.h"

class Violin : public StringedInstrument {
public:
    std::string sound() override;

    Violin(int numberOfStrings = 4);
};


#endif //MODEL_STRINGED_INSTRUMENTS_VIOLIN_H
