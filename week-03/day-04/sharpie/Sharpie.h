//
// Created by Viktor on 2019. 04. 18..
//
#include <iostream>
#include <string>

#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H


class Sharpie {

public:
    Sharpie(const std::string &color, float width);

    void setColor(std::string color);

    void setWidth(float width);

    void use();

    std::string getColor();

    float getWidth();

    float getInk();

private:
    std::string _color;
    float _width;
    float _inkAmount;
};


#endif //SHARPIE_SHARPIE_H
