//
// Created by Viktor on 2019. 04. 24..
//

#ifndef MODEL_STRINGED_INSTRUMENTS_INSTRUMENT_H
#define MODEL_STRINGED_INSTRUMENTS_INSTRUMENT_H

#include <iostream>

class Instrument {
public:
    virtual void play() = 0;

protected:
    std::string _name;
};


#endif //MODEL_STRINGED_INSTRUMENTS_INSTRUMENT_H
