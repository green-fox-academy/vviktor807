//
// Created by Viktor on 2019. 04. 23..
//

#ifndef GARDEN_APP_PLANTS_H
#define GARDEN_APP_PLANTS_H

#include <iostream>

class Plants {
public:
    Plants(std::string color);


    void setColor(std::string);

    std::string getColor();

    void setWaterAmount(double);

    double getWaterAmount();

private:
    double _currentWaterAmount;
    std::string _color;
};


#endif //GARDEN_APP_PLANTS_H
