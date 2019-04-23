//
// Created by Viktor on 2019. 04. 23..
//

#ifndef GARDEN_APP_FLOWERS_H
#define GARDEN_APP_FLOWERS_H

#include <iostream>
#include "Plants.h"

class Flowers : public Plants {
public:
    Flowers(const std::string &color);

    std::string getName();

private:
    std::string _name;
};


#endif //GARDEN_APP_FLOWERS_H
