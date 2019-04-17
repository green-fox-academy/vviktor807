//
// Created by Viktor on 2019. 04. 17..
//
#include <iostream>
#include "PostIt.h"

PostIt::PostIt(const std::string &backgroundcolor, const std::string &text, const std::string &textcolor)
{
    setBackgroundcolor(backgroundcolor);
    setText(text);
    setTextcolor(textcolor);
}

void PostIt::setBackgroundcolor(std::string backgroundcolor)
{
    PostIt::_backgroundcolor = backgroundcolor;
}

void PostIt::setText(std::string text)
{
    PostIt::_text = text;
}

void PostIt::setTextcolor(std::string textcolor)
{
    PostIt::_textcolor = textcolor;
}

std::string PostIt::GetBackgroundcolor()
{
    return _backgroundcolor;
}

std::string PostIt::GetText()
{
    return _text;
}

std::string PostIt::GetTextcolor()
{
    return _textcolor;
}
