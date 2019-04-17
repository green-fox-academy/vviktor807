//
// Created by Viktor on 2019. 04. 17..
//

#ifndef POST_IT_POSTIT_H
#define POST_IT_POSTIT_H

#include <iostream>
#include <string>

class PostIt {

public:
    PostIt(const std::string &backgroundcolor, const std::string &text, const std::string &textcolor);
    void setBackgroundcolor(std::string backgroundcolor);
    void setText(std::string text);
    void setTextcolor(std::string textcolor);
    std::string GetBackgroundcolor();
    std::string GetText();
    std::string GetTextcolor();
private:
    std::string _backgroundcolor;
    std::string _text;
    std::string _textcolor;
};


#endif //POST_IT_POSTIT_H
