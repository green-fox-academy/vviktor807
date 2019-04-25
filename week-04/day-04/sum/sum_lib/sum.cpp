//
// Created by Viktor on 2019. 04. 25..
//

#include "sum.h"

int sum(std::vector<int> myVector)
{
    int sum = 0;
    for (int i = 0; i < myVector.size(); ++i) {
        sum += myVector.at(i);

    }
    return sum ;
}
