//
// Created by Viktor on 2019. 04. 23..
//

#ifndef GARDEN_APP_TREES_H
#define GARDEN_APP_TREES_H

#include <iostream>
#include "Plants.h"

class Trees : public Plants {
public:
    Trees(std::string color);

    std::string getName();

    Type getType() override;

private:
    std::string _name;
};


#endif //GARDEN_APP_TREES_H
