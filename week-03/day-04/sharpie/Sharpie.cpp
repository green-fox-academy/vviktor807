//
// Created by Viktor on 2019. 04. 18..
//

#include "Sharpie.h"

Sharpie::Sharpie(const std::string &color, float width)
{
    setColor(color);
    setWidth(width);
    _inkAmount = 100;
}

void Sharpie::setColor(std::string color)
{
    _color = color;
}

void Sharpie::setWidth(float width)
{
    _width = width;
}

void Sharpie::use()
{
    _inkAmount -= 1;
}

std::string Sharpie::getColor()
{
    return _color;
}

float Sharpie::getWidth()
{
    return _width;
}

float Sharpie::getInk()
{
    return _inkAmount;
}
