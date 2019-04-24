//
// Created by Viktor on 2019. 04. 24..
//

#ifndef MODEL_STRINGED_INSTRUMENTS_STRINGEDINSTRUMENT_H
#define MODEL_STRINGED_INSTRUMENTS_STRINGEDINSTRUMENT_H

#include <iostream>
#include "Instrument.h"

class StringedInstrument : public Instrument {
public:
    StringedInstrument(const std::string &name, int numberOfStrings);

    virtual std::string sound() = 0;

    void play() override;

private:
    int _numberOfStrings;

};


#endif //MODEL_STRINGED_INSTRUMENTS_STRINGEDINSTRUMENT_H
