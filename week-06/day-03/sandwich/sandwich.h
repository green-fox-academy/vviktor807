//
// Created by Viktor on 2019. 05. 15..
//

#ifndef SANDWICH_SANDWICH_H
#define SANDWICH_SANDWICH_H

struct sandwich
{
    char name[20];
    float price;
    float weight;
};

float total_amount_to_pay(struct sandwich, int x);

#endif //SANDWICH_SANDWICH_H
