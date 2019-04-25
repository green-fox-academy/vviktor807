//
// Created by Viktor on 2019. 04. 25..
//

#include "anagram.h"


bool anagram(std::string one, std::string two)
{
    std::sort(one.begin(), one.end());
    std::sort(two.begin(), two.end());
    if (!one.compare(two)) {
        return true;
    } else {
        return false;
    }
}
