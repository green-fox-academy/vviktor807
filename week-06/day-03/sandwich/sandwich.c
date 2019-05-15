//
// Created by Viktor on 2019. 05. 15..
//

#include "sandwich.h"

float total_amount_to_pay(struct sandwich sandwich, int x)
{
    float result;
    result = x * sandwich.price;

    return result;
}

